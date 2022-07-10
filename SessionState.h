//
// Created by Michin on 21.06.2022.
//

#ifndef PROJEKT_SESSIONSTATE_H
#define PROJEKT_SESSIONSTATE_H
#include <iostream>

class SessionState {
    //stan pokazujacy czy gra jest w toku
    bool state = true;
public:
    //domyslny konstruktor
    SessionState() = default;
    //zwraca stan sesji
    bool getState(){ return state; }
    //zmienia stan sesji (pyta uzytkownika o kontynuacje lub zakonczenie
    void changeState();
    //domyslny destruktor
    ~SessionState() = default;
};


#endif //PROJEKT_SESSIONSTATE_H
