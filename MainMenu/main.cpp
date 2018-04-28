#include <SFML/Graphics.hpp>
#include <iostream>
#include "Menu.h"


int main() {

    sf::RenderWindow window(sf::VideoMode(1920,1080,32),"Lonely Blade IV");

    sf::Font font;

    font.loadFromFile("OpenSans-Bold.ttf");

    Menu menu(window.getSize().x, window.getSize().y);

    //sf::Text text("Hello World",font,11);

    //text.setCharacterSize(32);
    //text.setPosition(window.getSize().x/2 - text.getGlobalBounds().width/2,
    //window.getSize().y/2 - text.getGlobalBounds().height/2);

    while(window.isOpen()){

        sf::Event event;
        while(window.pollEvent(event)) {
            switch(event.type) {
                case sf::Event::KeyReleased:
                    switch(event.key.code) {
                        case sf::Keyboard::Up:
                            menu.MoveUp();
                            break;
                        case sf::Keyboard::Down:
                            menu.MoveDown();
                            break;
                        case sf::Keyboard::Return:
                            switch (menu.GetPressedItem()) {
                                case 0:
                                    std::cout << "Play button has been pressed" << std::endl;
                                    break;
                                case 1:
                                    std::cout << "Option button has been pressed" << std::endl;
                                    break;
                                case 2:
                                    window.close();
                                    break;

                            }
                    }
                    break;
                case sf::Event::Closed:
                    window.close();
            }

            if(event.type == sf::Event::Closed){

                window.close();

            }

            window.clear(sf::Color::White);
            //window.draw(text);
            menu.draw(window);

            window.display();
        }
    }
    return 0;

}