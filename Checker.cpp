//
// Created by Michin on 21.06.2022.
//

#include "Checker.h"
void Checker::set_key(RandomWord * p)
{
    keyWord = p;
}
void Checker::set_user(InputWord * p)
{
    userWord = p;
}
Checker::Checker(RandomWord * r, InputWord * i, LivesCounter* l)
{
    keyWord = r;
    userWord = i;
    lifes = l;
}
void Checker::check(Win* w)
{
    std::string uWord = userWord->get_word();
    std::string kWord = keyWord->get_word();
    int strikes = 0;
    char tab[5] = {'_','_','_','_','_'};
    int usedi[5] = {0,0,0,0,0};
    int usedj[5] = {0,0,0,0,0};
    for(int i = 0; i<5; i++)
    {
        if (uWord[i] == kWord[i])
        {
            tab[i] = Utilities::changeToUpper(uWord[i]);
            strikes++;
            usedi[i]=1;
            usedj[i]=1;
        }
    }
    for(int i = 0; i<5; i++)
    {
        for(int j = 0; j<5; j++)
        {
            if(usedi[i]==0 && usedj[j]==0 && uWord[i]==kWord[j])
            {
                tab[i] = Utilities::changeToSmall(uWord[i]);
                usedi[i]=1;
                usedj[j]=1;
            }
        }
        std::cout<<tab[i]<<" ";
    }
    std::cout<<std::endl;
    if(strikes == 5)
    {
        w->change_GameState(true);
    }
    else
    {
        lifes->minusLife();
    }
}

void Checker::set_lifes(LivesCounter *l)
{
    lifes = l;
}


