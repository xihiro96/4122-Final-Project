//
// Created by Kevin Jones
//

#ifndef SFMLDEMO_MENU_H
#define SFMLDEMO_MENU_H

#include <SFML/Graphics.hpp>
#include <iostream>


#define MAX_ITEMS 3


class Menu {
public:
    Menu(float width, float height);
    ~Menu();

    void draw(sf::RenderWindow &window);
    void MoveUp();
    void MoveDown();
    int GetPressedItem(){return selectedItemIndex;}

private:
    int selectedItemIndex;
    sf::Font font;
    sf::Texture title_image;
    sf::Sprite sprite_title;
    sf::Text menu_text[MAX_ITEMS];


};


#endif //SFMLDEMO_MENU_H
