//
// Created by Michin on 21.06.2022.
//

#include "Win.h"
Win::Win(LivesCounter * l, bool c)
{
    set_pointer(l);
    change_GameState(c);
}