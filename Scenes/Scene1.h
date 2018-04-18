//
// Created by mhendrix on 4/13/18.
//

#ifndef SFMLDEMO_SCENE1_H
#define SFMLDEMO_SCENE1_H
#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>

void runText(sf::RenderWindow * window, const std::string * string, int x, int y);
void runScene1(sf::RenderWindow * window);
void resetFade();
void fillBackground(sf::RenderWindow * window);
void introChapterNum(sf::RenderWindow * window);
void runSprites(sf::RenderWindow * window);
#endif //SFMLDEMO_SCENE1_H
