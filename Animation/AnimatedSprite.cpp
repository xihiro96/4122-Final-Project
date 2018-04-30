//
// Created by Gio Panlertkitsakul on 27/4/18.
//

#include "AnimatedSprite.h"

AnimatedSprite::AnimatedSprite() {

}

bool AnimatedSprite::load(const std::string& filename) {
    if(myTexture.loadFromFile(filename)) {
        mySprite.setTexture(myTexture);
        spriteRect.top = spritesheetInfo.actionsToCoordinates[myAction][0]->getTop();
        spriteRect.left = spritesheetInfo.actionsToCoordinates[myAction][0]->getLeft();
        spriteRect.width = spritesheetInfo.actionsToCoordinates[myAction][0]->getWidth();
        spriteRect.height = spritesheetInfo.actionsToCoordinates[myAction][0]->getHeight();
        actionIterator = spritesheetInfo.actionsToCoordinates[myAction].begin();
        mySprite.setTextureRect(spriteRect);
        animateClock.restart();
        isValid = true;
        return true;
    }
    return false;
}

void AnimatedSprite::animate() {
    if (isValid) {
        if (myAction == Actions::ActionEnum::InanimateLeft ||
            myAction == Actions::ActionEnum::InanimateRight ||
            myAction == Actions::ActionEnum::InanimateDown ||
            myAction == Actions::ActionEnum::InanimateLeft ||
            myAction == Actions::ActionEnum::InanimateFightLeft ||
            myAction == Actions::ActionEnum::InanimateFightRight) {
            return;
        }

        if (animateClock.getElapsedTime().asMilliseconds() > 200) {
            if (actionIterator == spritesheetInfo.actionsToCoordinates[myAction].end()) {
                actionIterator = spritesheetInfo.actionsToCoordinates[myAction].begin();
            }
            spriteRect.top = (*actionIterator)->getTop();
            spriteRect.left = (*actionIterator)->getLeft();
            spriteRect.width = (*actionIterator)->getWidth();
            spriteRect.height = (*actionIterator)->getHeight();
            mySprite.setTextureRect(spriteRect);
            ++actionIterator;
            animateClock.restart();
        }
    }
}

void AnimatedSprite::draw(sf::RenderWindow& window) {
    if (isValid)
        window.draw(mySprite);
}

void AnimatedSprite::move(sf::Vector2f loc) {
    if (isValid)
        mySprite.move(loc);
}

void AnimatedSprite::setAction(Actions::ActionEnum action) {
    if (isValid) {
        myAction = action;
        actionIterator = spritesheetInfo.actionsToCoordinates[myAction].begin();
        spriteRect.top = (*actionIterator)->getTop();
        spriteRect.left = (*actionIterator)->getLeft();
        spriteRect.width = (*actionIterator)->getWidth();
        spriteRect.height = (*actionIterator)->getHeight();
        mySprite.setTextureRect(spriteRect);
        ++actionIterator;
        animateClock.restart();
    }
}

void AnimatedSprite::setPosition(float x, float y) {
    if (isValid)
        mySprite.setPosition(x, y);
}

void AnimatedSprite::setScale(float scale) {
    if (isValid)
        mySprite.setScale(scale, scale);
}

sf::Vector2f AnimatedSprite::getPosition() const {
    if (isValid)
        return mySprite.getPosition();
    else
        return sf::Vector2f(0, 0);
}

float AnimatedSprite::getHeight() const {
    return mySprite.getLocalBounds().height;
}

float AnimatedSprite::getWidth() const {
    return mySprite.getLocalBounds().width;
}