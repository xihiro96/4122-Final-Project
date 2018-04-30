//
// Created by Gio Panlertkitsakul on 30/4/18.
//

#ifndef SFMLDEMO_ACTIONS_H
#define SFMLDEMO_ACTIONS_H

#include <vector>
#include "Coordinate.h"
#include "ActionEnum.h"

using namespace Actions;

class Animations {
public:

//    std::vector<Coordinate*> inAnimateUpCoordinates;
//    std::vector<Coordinate*> inAnimateRightCoordinates;
//    std::vector<Coordinate*> inAnimateDownCoordinates;
//    std::vector<Coordinate*> inAnimateLeftCoordinates;
//    std::vector<Coordinate*> walkUpCoordinates;
//    std::vector<Coordinate*> walkRightCoordinates;
//    std::vector<Coordinate*> walkDownCoordinates;
//    std::vector<Coordinate*> walkLeftCoordinates;
//    std::vector<Coordinate*> inanimateFightRightCoordinates;
//    std::vector<Coordinate*> inanimateFightLeftCoordinates;
//    std::vector<Coordinate*> slashRightCoordinates;
//    std::vector<Coordinate*> slashLeftCoordinates;
//    std::vector<Coordinate*> castSpellRightCoordinates;
//    std::vector<Coordinate*> castSpellLeftCoordinates;
    //======== Map from Action to Vector of Coordinate* ========//
    struct ActionEnumClassHash
    {
        template <typename T>
        std::size_t operator()(T t) const
        {
            return static_cast<std::size_t>(t);
        }
    };

    template <typename Key>
    using HashType = typename std::conditional<std::is_enum<Key>::value, ActionEnumClassHash, std::hash<Key>>::type;

    template <typename Key, typename Val>
    using ActionCoordinateUnorderedMap = std::unordered_map<Key, Val, HashType<Key>>;

//    ActionCoordinateUnorderedMap<Actions::ActionEnum, std::vector<Coordinate*>> actionsToCoordinates;
        std::vector<Coordinate*> inAnimateUpCoordinates { new Coordinate(519, 11, 579, 53) };
        std::vector<Coordinate*> inAnimateRightCoordinates { new Coordinate(711, 11, 773,53) };
        std::vector<Coordinate*> inAnimateDownCoordinates { new Coordinate(648, 11, 710, 53) };
        std::vector<Coordinate*> inAnimateLeftCoordinates{ new Coordinate(583, 11, 645, 53) };
        std::vector<Coordinate*> walkUpCoordinates {
                new Coordinate(519, 11, 579, 53),
                new Coordinate(519, 75, 579, 117),
                new Coordinate(519, 139, 579, 181),
                new Coordinate(519, 203, 579, 245),
                new Coordinate(519, 267, 579, 309),
                new Coordinate(519, 331, 579, 373),
                new Coordinate(519, 395, 579, 437),
                new Coordinate(519, 459, 579, 501),
                new Coordinate(519, 523, 579, 565)
        };

        std::vector<Coordinate*> walkRightCoordinates {
                new Coordinate(711, 11, 773,53),
                new Coordinate(711, 75, 711, 117),
                new Coordinate(711, 139, 711, 181),
                new Coordinate(711, 203, 711, 245),
                new Coordinate(711, 267, 711, 309),
                new Coordinate(711, 331, 711, 373),
                new Coordinate(711, 395, 711, 437),
                new Coordinate(711, 459, 711, 501),
                new Coordinate(711, 523, 711, 565)
        };

        std::vector<Coordinate*> walkDownCoordinates {
                new Coordinate(648, 11, 710, 53),
                new Coordinate(648, 75, 710, 117),
                new Coordinate(648, 139, 710, 181),
                new Coordinate(648, 203, 710, 245),
                new Coordinate(648, 267, 710, 309),
                new Coordinate(648, 331, 710, 373),
                new Coordinate(648, 395, 710, 437),
                new Coordinate(648, 459, 710, 501),
                new Coordinate(648, 523, 710, 565)
        };

        std::vector<Coordinate*> walkLeftCoordinates {
                new Coordinate(583, 11, 645, 53),
                new Coordinate(583, 75, 645, 117),
                new Coordinate(583, 139, 645, 181),
                new Coordinate(583, 203, 645, 245),
                new Coordinate(583, 267, 645, 309),
                new Coordinate(583, 331, 645, 373),
                new Coordinate(583, 395, 645, 437),
                new Coordinate(583, 459, 645, 501),
                new Coordinate(583, 523, 645, 565)
        };

        //======== TODO: ADJUST COORDINATES FOR FIGHT SCENE ACTIONS ========//

        std::vector<Coordinate*> inanimateFightRightCoordinates { new Coordinate() };

        std::vector<Coordinate*> inanimateFightLeftCoordinates { new Coordinate() };

        std::vector<Coordinate*> slashRightCoordinates {
                new Coordinate(518, 10, 580, 54),
                new Coordinate(518, 10, 580, 54),
                new Coordinate(518, 10, 580, 54),
                new Coordinate(518, 10, 580, 54),
                new Coordinate(518, 10, 580, 54),
                new Coordinate(518, 10, 580, 54)
        };

        std::vector<Coordinate*> slashLeftCoordinates {
                new Coordinate(518, 10, 580, 54),
                new Coordinate(518, 10, 580, 54),
                new Coordinate(518, 10, 580, 54),
                new Coordinate(518, 10, 580, 54),
                new Coordinate(518, 10, 580, 54),
                new Coordinate(518, 10, 580, 54)
        };

        std::vector<Coordinate*> castSpellRightCoordinates {
                new Coordinate(518, 10, 580, 54),
                new Coordinate(518, 10, 580, 54),
                new Coordinate(518, 10, 580, 54),
                new Coordinate(518, 10, 580, 54),
                new Coordinate(518, 10, 580, 54),
                new Coordinate(518, 10, 580, 54),
                new Coordinate(518, 10, 580, 54)
        };

        std::vector<Coordinate*> castSpellLeftCoordinates {
                new Coordinate(518, 10, 580, 54),
                new Coordinate(518, 10, 580, 54),
                new Coordinate(518, 10, 580, 54),
                new Coordinate(518, 10, 580, 54),
                new Coordinate(518, 10, 580, 54),
                new Coordinate(518, 10, 580, 54),
                new Coordinate(518, 10, 580, 54)
        };


        //======== Map from Action to Vector of Coordinate* ========//
        ActionCoordinateUnorderedMap<Actions::ActionEnum, std::vector<Coordinate*>> actionsToCoordinates = {
                {ActionEnum::InanimateUp, inAnimateUpCoordinates},
                {ActionEnum::InanimateRight, inAnimateRightCoordinates},
                {ActionEnum::InanimateDown, inAnimateDownCoordinates},
                {ActionEnum::InanimateLeft, inAnimateLeftCoordinates},
                {ActionEnum::WalkUp, walkUpCoordinates},
                {ActionEnum::WalkRight, walkRightCoordinates},
                {ActionEnum::WalkDown, walkDownCoordinates},
                {ActionEnum::WalkLeft, walkLeftCoordinates},
                {ActionEnum::InanimateFightRight, inanimateFightRightCoordinates},
                {ActionEnum::InanimateFightLeft, inanimateFightLeftCoordinates},
                {ActionEnum::SlashRight, slashRightCoordinates},
                {ActionEnum::SlashLeft, slashLeftCoordinates},
                {ActionEnum::CastSpellRight, castSpellRightCoordinates},
                {ActionEnum::CastSpellLeft, castSpellLeftCoordinates}
        };
        };


#endif //SFMLDEMO_ACTIONS_H
