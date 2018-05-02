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
        if (myAction == Actions::ActionEnum::InanimateUp ||
            myAction == Actions::ActionEnum::InanimateRight ||
            myAction == Actions::ActionEnum::InanimateDown ||
            myAction == Actions::ActionEnum::InanimateLeft ||
            myAction == Actions::ActionEnum::InanimateFightLeft ||
            myAction == Actions::ActionEnum::InanimateFightRight) {
            return;
        }

        if (animateClock.getElapsedTime().asMilliseconds() > 100) {
            if (actionIterator == spritesheetInfo.actionsToCoordinates[myAction].end()) {
                switch (myAction) {
                    case Actions::ActionEnum::SlashLeft:
                        setAction(Actions::ActionEnum::InanimateFightLeft);
                        return;
                    case Actions::ActionEnum::SlashRight:
                        setAction(Actions::ActionEnum::InanimateFightRight);
                        return;
                    case Actions::ActionEnum::CastSpellLeft:
                        setAction(Actions::ActionEnum::InanimateFightLeft);
                        return;
                    case Actions::ActionEnum::CastSpellRight:
                        setAction(Actions::ActionEnum::InanimateFightRight);
                        return;
                    default:
                        actionIterator = spritesheetInfo.actionsToCoordinates[myAction].begin();
                        break;
                }
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


void AnimatedSprite::move() {
    if(isValid) {
        sf::Vector2f movement(0.0f, 0.0f);
        if(moveUp)
            movement.y -= mySpeed;
        if(moveDown)
            movement.y += mySpeed;
        if(moveLeft)
            movement.x -= mySpeed;
        if(moveRight)
            movement.x += mySpeed;

        mySprite.move(movement * moveClock.getElapsedTime().asSeconds());
        moveClock.restart();
    }
}


void AnimatedSprite::draw(sf::RenderWindow* window) {
    if (isValid)
        window->draw(mySprite);
}

void AnimatedSprite::setAction(Actions::ActionEnum action) {
    if (isValid) {
        if (myAction == action) {
            return;
        }
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

void AnimatedSprite::setMovement(Actions::DirectionEnum direction, bool move) {
    if (isValid){
        if (direction == Actions::DirectionEnum::Up) {
            moveUp = move;
        } else if (direction == Actions::DirectionEnum::Down) {
            moveDown = move;
        } else if (direction == Actions::DirectionEnum::Right) {
            moveRight = move;
        } else if (direction == Actions::DirectionEnum::Left) {
            moveLeft = move;
        }
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

Actions::ActionEnum AnimatedSprite::getAction() {
        return myAction;
}

bool AnimatedSprite::getMovement(Actions::DirectionEnum direction) {
    if (direction == Actions::DirectionEnum::Up) {
        return moveUp;
    } else if (direction == Actions::DirectionEnum::Down) {
        return moveDown;
    } else if (direction == Actions::DirectionEnum::Right) {
        return moveRight;
    } else {
        return moveLeft;
    }
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