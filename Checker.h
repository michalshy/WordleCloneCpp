//
// Created by Michin on 21.06.2022.
//

#ifndef PROJEKT_CHECKER_H
#define PROJEKT_CHECKER_H
#include "RandomWord.h"
#include "InputWord.h"
#include "LivesCounter.h"
#include "Utilities.h"
#include "Win.h"
#include "Lose.h"

class Checker {
    RandomWord* keyWord = nullptr;
    InputWord* userWord = nullptr;
    LivesCounter* lifes = nullptr;
public:
    Checker() = default;
    Checker(RandomWord*, InputWord*, LivesCounter*);
    void set_key(RandomWord*);
    void set_user(InputWord*);
    void set_lifes(LivesCounter* l);
    RandomWord* get_key(){ return keyWord; }
    InputWord* get_user(){ return  userWord; }
    void check(Win*);
    ~Checker() = default;
};


#endif //PROJEKT_CHECKER_H
