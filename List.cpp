//
// Created by Michin on 27.04.2022.
//

#include "List.h"

void List::set_counter(Counter *p)
{
    counter = p;
}
void List::push_back(const std::string &_word)
{

    if(head== nullptr)
    {
        head = new ListElement(_word);
        counter->operator++();
    }
    else
    {
        ListElement* current = head;
        while(current->get_next()!=nullptr)
        {
            current=current->get_next();
        }
        ListElement* temp = new ListElement(_word);
        current->set_next(temp);
        counter->operator++();
    }
}
bool List::remove_element(const std::string &search_word)
{
    std::string firstWord = head->get_word();
    ListElement *element = head->get_next();
    ListElement *previous = nullptr;
    std::string word_comp = element->get_word();
    if(search_word == firstWord)
    {
        ListElement *tempA = head;
        head = head->get_next();
        delete tempA;
        counter->operator--();
        return true;
    }
    if(search_word == word_comp)
    {
        ListElement *tempB = element->get_next();
        head->set_next(tempB);
        delete element;
        counter->operator--();
        return true;
    }
    while(word_comp != search_word)
    {
        previous = element;
        element = element->get_next();
        word_comp = element->get_word();
    }
    ListElement* temp = element->get_next();
    previous->set_next(temp);
    delete element;
    counter->operator--();
    return true;
}

List::~List()
{
    ListElement* current = head;
    while(current != nullptr)
    {
        ListElement* temp = current->get_next();
        delete current;
        current = temp;
    }
    head = nullptr;
}

void List::set_element(ListElement * h)
{
    head = h;
}
