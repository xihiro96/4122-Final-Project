//
// Created by Gio Panlertkitsakul on 30/4/18.
//

/*
 * Test Instructions:
 *      1) add `#include Animation/TestAnimations.cpp` to main.cpp
 *      2) add `runAnimationTest()` to main.cpp before runScene1()
 *      3) comment out runScene1()
 *
 */

#ifndef TESTANIMATIONS_H
#define TESTANIMATIONS_H

#include <SFML/Graphics.hpp>
#include <iostream>
#include "AnimatedSprite.h"

class TestAnimation {
public:
    static void runAnimationTest(sf::RenderWindow * window);
};


#endif //TESTANIMATIONS_H