//
// Created by Gio Panlertkitsakul on 30/4/18.
//

#ifndef SFMLDEMO_ACTIONS_H
#define SFMLDEMO_ACTIONS_H


class Actions {

    std::vector<Coordinate*> inAnimateUpCoordinates;
    std::vector<Coordinate*> inAnimateRightCoordinates;
    std::vector<Coordinate*> inAnimateDownCoordinates;
    std::vector<Coordinate*> inAnimateLeftCoordinates;
    std::vector<Coordinate*> walkUpCoordinates;
    std::vector<Coordinate*> walkRightCoordinates;
    std::vector<Coordinate*> walkDownCoordinates;
    std::vector<Coordinate*> walkLeftCoordinates;
    std::vector<Coordinate*> inanimateFightRightCoordinates;
    std::vector<Coordinate*> inanimateFightLeftCoordinates;
    std::vector<Coordinate*> slashRightCoordinates;
    std::vector<Coordinate*> slashLeftCoordinates;
    std::vector<Coordinate*> castSpellRightCoordinates;
    std::vector<Coordinate*> castSpellLeftCoordinates;
};


#endif //SFMLDEMO_ACTIONS_H
