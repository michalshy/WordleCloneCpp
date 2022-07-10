//
// Created by Michin on 21.06.2022.
//

#ifndef PROJEKT_LOSE_H
#define PROJEKT_LOSE_H
#include "GameState.h"

class Lose : public GameState{
public:
    Lose() = default;
    Lose(LivesCounter*, bool);
};


#endif //PROJEKT_LOSE_H
