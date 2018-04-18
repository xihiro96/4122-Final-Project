//
// Created by mhendrix on 4/13/18.
//
#include "Scene1.h"
sf::Uint8 fadeVal = 0;
sf::Clock smallClock;
bool fadeOut = false;
bool pause = false;
sf::Clock sceneClock;
int spritePosition = 0;

void runText(sf::RenderWindow * window, const std::string * string, int x, int y){

    sf::Text text;
    sf::Font font;
    //load font
    if (!font.loadFromFile("eutemia-i.italic.ttf"))
    {
        std::cout << "No font loaded" <<std::endl;
    }
    text.setFont(font);
    text.setString(*string);
    text.setCharacterSize(150); // in pixels, not points!
    //set colors
    sf::Color color(255,255,255,fadeVal);
    text.setColor(color);
    //start timer
    sf::Time elapsed1 = smallClock.getElapsedTime();

    //fadeIn
    if (fadeVal <= 255 && !fadeOut && !pause){
        if (elapsed1.asMilliseconds() > 25){
            fadeVal = fadeVal + 5;
            color.a = fadeVal;
            text.setColor(color);
            smallClock.restart();
        }
        if (fadeVal >=255) {
            pause = true;
            smallClock.restart();
        }
    }
    if (pause){
        if (elapsed1.asSeconds() > 1.75) {
            fadeOut = true;
            pause = false;
        }
    }
    //fadeOut
    if(fadeOut){
        if (elapsed1.asMilliseconds() > 25){
            fadeVal = fadeVal - 5;
            color.a = fadeVal;
            text.setColor(color);
            smallClock.restart();
        }
    }
    //display text
    text.setPosition(x, y);
    window->clear();
    window->draw(text);
    window->display();

}
void resetFade(){
    fadeVal = 0;
    fadeOut = false;
    pause = false;
}

void fillBackground(sf::RenderWindow * window){
    sf::RectangleShape background(sf::Vector2f(window->getSize().x,window->getSize().y));
    sf::RectangleShape fader(sf::Vector2f(window->getSize().x,window->getSize().y));
    sf::Texture backgroundTexture;
    /*sf::Texture samuraiTexture;
    sf::Sprite samuraiSprite;*/
    if (!backgroundTexture.loadFromFile("forest.jpeg"))
    {
        std::cout << "Cannot load forest background" << std::endl;
    }
    /*if (!samuraiTexture.loadFromFile("samurai.png", sf::IntRect(1292, 5, 252, 252))){
        std::cout << "Cannot load samurai texture" << std::endl;
    }*/

    background.setTexture(&backgroundTexture);
    sf::Color color(0,0,0,fadeVal);
    fader.setFillColor(color);
    sf::Time elapsed1 = smallClock.getElapsedTime();

    //fade in the background by fading away black square
    if(fadeVal > 0) {
        if(elapsed1.asMilliseconds() > 20) {
            fadeVal = fadeVal - 5;
            color.a = fadeVal;
            fader.setFillColor(color);
            smallClock.restart();
        }
    }

    /*samuraiSprite.setScale(sf::Vector2f(-2.f, 2.f));
    //samuraiSprite.setScale(sf::Vector2f(-1.0f, -1.0f));
    samuraiSprite.setPosition(sf::Vector2f(500, 380));
    samuraiSprite.setTexture(samuraiTexture);*/
    window->clear();
    window->draw(background);
    window->draw(fader);
    //window->draw(samuraiSprite);

    window->display();
}
void runSprites(sf::RenderWindow * window){
    sf::Time elapsed1 = smallClock.getElapsedTime();
    sf::RectangleShape background(sf::Vector2f(window->getSize().x,window->getSize().y));
    sf::RectangleShape textBox(sf::Vector2f(window->getSize().x, 380));
    sf::Texture backgroundTexture;
    sf::Texture samuraiTexture;
    sf::Sprite samuraiSprite;
    sf::Texture brotherTexture;
    sf::Sprite brotherSprite;
    if (!backgroundTexture.loadFromFile("forest.jpeg"))
    {
        std::cout << "Cannot load forest background" << std::endl;
    }
    if (!samuraiTexture.loadFromFile("samurai.png", sf::IntRect(1292, 5, 252, 252))){
        std::cout << "Cannot load samurai texture" << std::endl;
    }
    if (!brotherTexture.loadFromFile("brother.png", sf::IntRect(780, 5, 252, 252))){
        std::cout << "Cannot load samurai texture" << std::endl;
    }

    background.setTexture(&backgroundTexture);

    samuraiSprite.setScale(sf::Vector2f(-2.f, 2.f));
    //samuraiSprite.setScale(sf::Vector2f(-1.0f, -1.0f));
    if(spritePosition < 500){
        //if(elapsed1.asMicroseconds() > 2){
            spritePosition = spritePosition + 50;
            //smallClock.restart();
        //}
    }
    samuraiSprite.setPosition(sf::Vector2f(spritePosition, 380));
    samuraiSprite.setTexture(samuraiTexture);

    brotherSprite.setScale(sf::Vector2f(2.f, 2.f));
    brotherSprite.setPosition(sf::Vector2f((1900-spritePosition),380));
    brotherSprite.setTexture(brotherTexture);

    sf::Color color(0,0,0,fadeVal);
    textBox.setFillColor(color);
    elapsed1 = smallClock.getElapsedTime();

    //fade in the background by fading away black square
    if(fadeVal < 255) {
        if(elapsed1.asMilliseconds() > 20) {
            fadeVal = fadeVal - 5;
            color.a = fadeVal;
            textBox.setFillColor(color);
            smallClock.restart();
        }
    }

    window->clear();
    window->draw(background);
    window->draw(samuraiSprite);
    window->draw(brotherSprite);
    window->draw(textBox);
    window->display();
}





void introChapterNum(sf::RenderWindow * window){
    sf::Text text;
    sf::Font font;
    //load font
    if (!font.loadFromFile("made-in-china.regular.ttf"))
    {
        std::cout << "No font loaded" <<std::endl;
    }
    std::string string = "Chapter 1: Early Departure";
    text.setFont(font);
    text.setString(string);
    text.setCharacterSize(150); // in pixels, not points!
    //set colors
    sf::Color color(255,255,255,255);
    text.setColor(color);
    sf::Time elapsed1 = smallClock.getElapsedTime();


    text.setPosition(50,450);
    window->clear();
    if (elapsed1.asSeconds() > 1.2){
        window->draw(text);
    }
    window->display();
}
void runScene1(sf::RenderWindow * window){
    std::string string;
    sf::Time elapsedMain = sceneClock.getElapsedTime();
    //line1
    if(elapsedMain.asSeconds() <= 5) {
        string = "Off the coast of the Andriac Sea...";
        runText(window, &string, 200, 450);
    }
    else if (elapsedMain.asSeconds() > 5 && elapsedMain.asSeconds() < 5.1) {
        resetFade();
    }//line 2
    else if (elapsedMain.asSeconds() >= 5.1 && elapsedMain.asSeconds() < 10.1){
        string = "A powerful village is hidden in the\n depths of the forest...";
        runText(window, &string, 100, 400);
    }
    else if (elapsedMain.asSeconds() > 10.1 && elapsedMain.asSeconds() < 10.2) {
        resetFade();
    }//line 3
    else if (elapsedMain.asSeconds() >= 10.2 && elapsedMain.asSeconds() < 14.8){
        string = "Where two brothers are heir to the throne...";
        runText(window, &string, 10, 450);
    }
    else if (elapsedMain.asSeconds() >= 14.8 && elapsedMain.asSeconds() < 18.2) {
        introChapterNum(window);
    }
    else if (elapsedMain.asSeconds() >= 18.2 && elapsedMain.asSeconds() < 18.3){
        fadeVal = 255;
    }
    else if(elapsedMain.asSeconds() >= 18.3 && elapsedMain.asSeconds() < 21.1) {
        smallClock.restart();
        fillBackground(window);
    }
    else if (elapsedMain.asSeconds() >= 21.1 && elapsedMain.asSeconds() < 21.2){
        fadeVal = 0;
    }
    else if(elapsedMain.asSeconds() >= 21.2 && elapsedMain.asSeconds() < 23.1){
        runSprites(window);
    }
    //run only chapter 1 rn
    /*if (elapsedMain.asSeconds() >= 0 && elapsedMain.asSeconds() < .2){
        fadeVal = 255;
    }
    else if(elapsedMain.asSeconds() >= .2 && elapsedMain.asSeconds() < 2) {
        smallClock.restart();
        fillBackground(window);
    }
    else if(elapsedMain.asSeconds() >= 2 && elapsedMain.asSeconds() < 7){
        runSprites(window);
    }*/
    //can get rid of this once testing is done

}

