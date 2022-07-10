//
// Created by Michin on 16.06.2022.
//

#ifndef PROJEKT_LIVESCOUNTER_H
#define PROJEKT_LIVESCOUNTER_H
#include <iostream>

class LivesCounter {
    int lifes = 6;
public:
    LivesCounter() = default;
    int get_lifes(){ return lifes; }
    void minusLife();
    void showLifes();
    void restoreLifes();
    ~LivesCounter() = default;
};


#endif //PROJEKT_LIVESCOUNTER_H
