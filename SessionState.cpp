//
// Created by Michin on 21.06.2022.
//

#include "SessionState.h"

void SessionState::changeState()
{
    std::cout<<"Czy chcesz zagrac w wordle ponownie? (wprowadz 1 jesli tak, a 0 jesli nie)"<<std::endl;
    std::cin>>state;
}