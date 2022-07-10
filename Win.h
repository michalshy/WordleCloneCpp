//
// Created by Michin on 21.06.2022.
//

#ifndef PROJEKT_WIN_H
#define PROJEKT_WIN_H
#include "GameState.h"

class Win : public GameState{
public:
    Win() = default;
    Win(LivesCounter*, bool);
};


#endif //PROJEKT_WIN_H
