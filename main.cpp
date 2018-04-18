#include "Scenes/Scene1.h"
int main()
{
    sf::RenderWindow window(sf::VideoMode(1920, 1080), "Lonely Blade IV", sf::Style::Default); //create 1080p window with close button
    window.setVerticalSyncEnabled(true); //game will update according to graphics card settings
    while (window.isOpen())
    {
        sf::Event event;


// while there are pending events...
        while (window.pollEvent(event)) //two sf::Events cannot happen at the same time, game will crash
        {
            // check the type of the event...
            switch (event.type)
            {
                // window closed
                case sf::Event::Closed: //if user closes game in any way shape or form
                    window.close();
                    break;

                    // key pressed
                case sf::Event::LostFocus: //user clicks out of the game window
                    //pause game;
                    break;
                case sf::Event::GainedFocus: //user goes back to game window
                    //unpause game;
                    break;
                case sf::Event::KeyPressed:
                    switch(event.key.code){
                        case sf::Keyboard::Escape:
                            window.close();
                    }
                    // we don't process other types of events
                default:
                    break;
            }

        }
        runScene1(&window);

    }

    return 0;
}