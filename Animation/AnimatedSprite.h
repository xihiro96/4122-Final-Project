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

    void draw(sf::RenderWindow* window);

    void animate();

    void move();

    void setAction(Actions::ActionEnum action);

    void setPosition(float x, float y);

    void setScale(float scale);

//    void setMovement(Actions::DirectionEnum direction);

    void setMovement(Actions::DirectionEnum direction, bool move);

    Actions::ActionEnum getAction();

    bool getMovement(Actions::DirectionEnum direction);

//    Actions::DirectionEnum getDirection();

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
    sf::Clock moveClock;
    Animations spritesheetInfo;
    float mySpeed = 120.0f;
    bool moveUp, moveRight, moveLeft, moveDown;
};

#endif //ANIMATEDSPRITE_H