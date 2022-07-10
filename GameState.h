//
// Created by Michin on 21.06.2022.
//

#ifndef PROJEKT_GAMESTATE_H
#define PROJEKT_GAMESTATE_H
#include "LivesCounter.h"


class GameState {
    //pole sprawdzajace czy stan jest aktywny czy nie
    bool state = false;
    //wskaznik na licznik
    LivesCounter* counter = nullptr;
public:
    //zwraca aktualny stan
    bool getState(){ return state; }
    //zmienia aktualny stan
    void change_GameState(bool b);
    //zwraca wskaźnik na licznik
    LivesCounter* get_pointer(){ return counter; }
    //ustawia wksaźnik na licznik
    void set_pointer(LivesCounter* p);
    //wirtualny destruktor (upewnia sie ze obiekty dziedziczace rowniez zostana zniszczone)
    virtual ~GameState() = default;
};


#endif //PROJEKT_GAMESTATE_H
