//
// Created by Michin on 21.06.2022.
//

#include "GameState.h"

void GameState::change_GameState(bool b)
{
    state = b;
}

void GameState::set_pointer(LivesCounter *p)
{
    counter = p;
}