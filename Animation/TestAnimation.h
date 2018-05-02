//
// Created by Gio Panlertkitsakul on 30/4/18.
//

/*
 * Test Instructions:
 * replace code in main.cpp with the following:

#include "Animation/TestAnimation.h"
int main()
{
    sf::RenderWindow window(sf::VideoMode(1920, 1080), "Lonely Blade IV", sf::Style::Default); //create 1080p window with close button
    window.setVerticalSyncEnabled(true); //game will update according to graphics card settings
    TestAnimation::runAnimationTest(&window);
    return 0;
}
 
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