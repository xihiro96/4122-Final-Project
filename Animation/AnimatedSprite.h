//
// Created by Gio Panlertkitsakul on 27/4/18.
//

#ifndef ANIMATEDSPRITE_H
#define ANIMATEDSPRITE_H

#pragma once

#include <SFML/Graphics.hpp>
#include "ActionEnum.h"
#include "Coordinate.h"
#include "Animations.h"

class AnimatedSprite {

public:
    AnimatedSprite();

    bool load(const std::string& filename);

    void draw(sf::RenderWindow& window);

    void animate();

    void setAction(Actions::ActionEnum action);

    void setPosition(float x, float y);

    void setScale(float scale);

    void move(sf::Vector2f);

    sf::Vector2f getPosition() const;

    float getHeight() const;

    float getWidth() const;

private:
    sf::Sprite mySprite;
    sf::Texture myTexture;
    sf::IntRect spriteRect;
    bool isValid = false;
    Actions::ActionEnum myAction = Actions::ActionEnum::InanimateDown;
    std::vector<Coordinate*>::iterator actionIterator;
    sf::Clock animateClock;
    Animations spritesheetInfo;
};

#endif //ANIMATEDSPRITE_H