//
// Created by Michin on 21.06.2022.
//

#include "Validation.h"
Validation::Validation(Dictionary * p, InputWord * c, Counter* q)
{
    counter = q;
    base = p;
    comp = c;
}

bool Validation::Validator()
{
    int size = counter->get_counter();
    while(true)
    {
        comp->change_word();
        for(int i = 0; i<size; i++)
        {
            std::string uWord = comp->get_word();
            std::string dWord = base->search_word(i);
            if(comp->get_word()==base->search_word(i))
            {
                return true;
            }
        }
    }

    return false;
}

void Validation::set_dict(Dictionary *d)
{
    base = d;
}
void Validation::set_counter(Counter *c)
{
    counter = c;
}
void Validation::set_input(InputWord *i)
{
    comp = i;
}
