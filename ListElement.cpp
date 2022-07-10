//
// Created by Michin on 27.04.2022.
//

#include "ListElement.h"

void ListElement::set_word(std::string & s)
{
    word = s;
}
void ListElement::set_next(ListElement *_next)
{
    next = _next;
}
ListElement::ListElement(std::string _word)
{
    word = _word;
}