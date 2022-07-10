//
// Created by Michin on 23.06.2022.
//
#ifndef PROJEKT_SESSIONMANAGER_H
#define PROJEKT_SESSIONMANAGER_H

#include "SessionState.h"
#include "LivesCounter.h"
#include "Win.h"
#include "Lose.h"

class SessionManager {
    SessionState sState;
    LivesCounter lifes;
    Win win;
    Lose lose;
public:
    SessionManager() = default;
    void Initialization();
    SessionState * get_state(){ return &sState; }
    LivesCounter * get_lifes(){ return &lifes; }
    Win * get_win(){ return &win; }
    Lose * get_lose(){return &lose; }
    ~SessionManager() = default;
};


#endif //PROJEKT_SESSIONMANAGER_H
