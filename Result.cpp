//
// Created by Michin on 21.06.2022.
//

#include "Result.h"

Result::Result(RandomWord * p, Win * _w, Lose* _l)
{
    l = _l;
    w = _w;
    keyWord = p;
}
void Result::check_result()
{
    std::string word = keyWord->get_word();
    if(w->getState())
    {
        std::cout<<"gratulacje zgadles slowo klucz czyli "<<word<<" super!"<<std::endl;
    }
    else if(l->getState())
    {
        std::cout<<"niestety nie udalo ci sie, moze nastepnym razem, slowem klucz bylo "<<word<<" slabo :("<<std::endl;
    }
}

void Result::check_life(LivesCounter * lcounter)
{
    if(lcounter->get_lifes()==0)
    {
        l->change_GameState(true);
    }
    else
    {
        l->change_GameState(false);
    }
}
