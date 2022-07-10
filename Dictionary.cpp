//
// Created by Michin on 27.04.2022.
//

#include "Dictionary.h"

Dictionary::Dictionary(List *p)
{
    list = p;
}
void Dictionary::setP(List *p)
{
    list = p;
}
std::string Dictionary::search_word(int index)
{
    ListElement* current = list->get_element();

    for(int i = 0; i<index; i++)
    {
        current = current->get_next();
    }
    std::string word = current->get_word();
    return word;
}


