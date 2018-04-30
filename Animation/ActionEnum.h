//
// Created by Gio Panlertkitsakul on 30/4/18.
//

#ifndef SFMLDEMO_ACTIONENUM_H
#define SFMLDEMO_ACTIONENUM_H

#include <vector>
#include <unordered_map>

namespace Actions {

    //======== Enum class for all actions ========//
    enum class ActionEnum {
        InanimateUp,
        InanimateRight,
        InanimateDown,
        InanimateLeft,
        WalkUp,
        WalkRight,
        WalkDown,
        WalkLeft,
        InanimateFightRight,
        InanimateFightLeft,
        SlashRight,
        SlashLeft,
        CastSpellRight,
        CastSpellLeft
    };

};

#endif //SFMLDEMO_ACTIONENUM_H
