//
// Created by Gio Panlertkitsakul on 30/4/18.
//

#include "TestAnimation.h"

void TestAnimation::runAnimationTest(sf::RenderWindow * window) {
    AnimatedSprite silas;
    if (!silas.load("silas_sprite.png")) {
        std::cout << "Couldn't load spritesheet" << std::endl;
        return;
    }

    silas.setScale(1);
    silas.setPosition(50,50);


}