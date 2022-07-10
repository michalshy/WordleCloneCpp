//
// Created by Michin on 23.06.2022.
//

#include "SessionManager.h"

void SessionManager::Initialization()
{
    win.change_GameState(false);
    lose.change_GameState(false);
    win.set_pointer(&lifes);
    lose.set_pointer(&lifes);
}
