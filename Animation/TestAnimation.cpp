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

    window->setKeyRepeatEnabled(false);

    silas.setScale(3.0f);
    silas.setPosition(50.0f,50.0f);

    while (window->isOpen())
    {
        sf::Event event;

        // while there are pending events...
        while (window->pollEvent(event)) //two sf::Events cannot happen at the same time, game will crash
        {
            // check the type of the event...
            switch (event.type)
            {
                // window closed
                case sf::Event::Closed: //if user closes game in any way shape or form
                    window->close();
                    break;

                // key pressed
                case sf::Event::KeyPressed:
                    switch(event.key.code){
                        case sf::Keyboard::Escape:
                            window->close();
                            break;
                        case sf::Keyboard::Up:
//                            if (silas.getAction() != Actions::ActionEnum::WalkUp || silas.getDirection() != Actions::DirectionEnum::Up) {
//                                silas.setAction(Actions::ActionEnum::WalkUp);
//                                silas.setMovement(Actions::DirectionEnum::Up);
//                            }
                            silas.setAction(Actions::ActionEnum::WalkUp);
                            silas.setMovement(Actions::DirectionEnum::Up, true);
                            silas.setMovement(Actions::DirectionEnum::Down, false);
                            break;
                        case sf::Keyboard::Right:
                            silas.setAction(Actions::ActionEnum::WalkRight);
                            silas.setMovement(Actions::DirectionEnum::Right, true);
                            silas.setMovement(Actions::DirectionEnum::Left, false);
                            break;
                        case sf::Keyboard::Down:
                            silas.setAction(Actions::ActionEnum::WalkDown);
                            silas.setMovement(Actions::DirectionEnum::Down, true);
                            silas.setMovement(Actions::DirectionEnum::Up, false);
                            break;
                        case sf::Keyboard::Left:
                            silas.setAction(Actions::ActionEnum::WalkLeft);
                            silas.setMovement(Actions::DirectionEnum::Left, true);
                            silas.setMovement(Actions::DirectionEnum::Right, false);
                            break;
                        default:
                            break;
                    }
                    break;

                //key released
                case sf::Event::KeyReleased:
                    switch(event.key.code){
                        case sf::Keyboard::Up:
                            silas.setMovement(Actions::DirectionEnum::Up, false);
                            if (silas.getMovement(Actions::DirectionEnum::Left)) {
                                silas.setAction(Actions::ActionEnum::WalkLeft);
                            } else if (silas.getMovement(Actions::DirectionEnum::Right)) {
                                silas.setAction(Actions::ActionEnum::WalkRight);
                            } else if (silas.getMovement(Actions::DirectionEnum::Down)) {
                                silas.setAction(Actions::ActionEnum::WalkDown);
                            } else {
                                silas.setAction(Actions::ActionEnum::InanimateUp);
                            }
                            break;
                        case sf::Keyboard::Right:
                            silas.setMovement(Actions::DirectionEnum::Right, false);
                            if (silas.getMovement(Actions::DirectionEnum::Up)) {
                                silas.setAction(Actions::ActionEnum::WalkUp);
                            } else if (silas.getMovement(Actions::DirectionEnum::Down)) {
                                silas.setAction(Actions::ActionEnum::WalkDown);
                            } else if (silas.getMovement(Actions::DirectionEnum::Left)) {
                                silas.setAction(Actions::ActionEnum::WalkLeft);
                            } else {
                                silas.setAction(Actions::ActionEnum::InanimateRight);
                            }
                            break;
                        case sf::Keyboard::Down:
                            silas.setMovement(Actions::DirectionEnum::Down, false);
                            if (silas.getMovement(Actions::DirectionEnum::Left)) {
                                silas.setAction(Actions::ActionEnum::WalkLeft);
                            } else if (silas.getMovement(Actions::DirectionEnum::Right)) {
                                silas.setAction(Actions::ActionEnum::WalkRight);
                            } else if (silas.getMovement(Actions::DirectionEnum::Up)) {
                                silas.setAction(Actions::ActionEnum::WalkUp);
                            } else {
                                silas.setAction(Actions::ActionEnum::InanimateDown);
                            }
                            break;
                        case sf::Keyboard::Left:
                            silas.setMovement(Actions::DirectionEnum::Left, false);
                            if (silas.getMovement(Actions::DirectionEnum::Up)) {
                                silas.setAction(Actions::ActionEnum::WalkUp);
                            } else if (silas.getMovement(Actions::DirectionEnum::Down)) {
                                silas.setAction(Actions::ActionEnum::WalkDown);
                            } else if (silas.getMovement(Actions::DirectionEnum::Right)) {
                                silas.setAction(Actions::ActionEnum::WalkRight);
                            } else {
                                silas.setAction(Actions::ActionEnum::InanimateLeft);
                            }
                            break;
                        default:
                            break;
                    }
                    break;
                    // we don't process other types of events
                default:
                    break;
            } //switch (event.type)

        } //while (window->pollEvent(event))

        window->clear();

        silas.animate();
        silas.move();
        silas.draw(window);

        window->display();

    } //while (window->isOpen())


}