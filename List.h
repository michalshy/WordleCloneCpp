//
// Created by Michin on 27.04.2022.
//

#ifndef PROJEKT_LIST_H
#define PROJEKT_LIST_H
#include "ListElement.h"
#include "Counter.h"
#include <iostream>
#include <fstream>

class List {
    ListElement* head = nullptr;
    Counter * counter = nullptr;
public:
    //domyslny kontruktor
    List() = default;
    //zwraca wskaznik na licznik
    Counter* getCounter(){ return counter; }
    //ustawia wskaznik na licznik
    void set_counter(Counter*p);
    //dodaje element do listy
    void push_back(const std::string &_word);
    //zwraca wskaznik na pierwszy element w liscie
    ListElement* get_element(){ return head; }
    //ustawia wskaznik na pierwszy element w liscie
    void set_element(ListElement*);
    //usuwa element z listy poszukujac docelowego przez slowo
    bool remove_element(const std::string &search_word);
    //konstruktor zdefiniowany tak, by zapobiegac wyciekom pamieci
    ~List();
    //przeciazony operator strumieniowy wypisujacy liste
    std::ostream &operator << (std::ostream &s)
    {
        int size = counter->get_counter();
        ListElement* current = get_element();
        std::string words = " ";
        for(int i = 0; i<size; i++)
        {
            s << current->get_word() << " ";
            current=current->get_next();
        }
        s << std::endl;
        return s;
    }
    //przeciazony operator strumieniony dodajacy slowo podane przez uzytkownika do listy
    std::istream &operator >> (std::istream &s)
    {
        std::string word;
        std::cout<<"Wprowadz slowo dla nowego elementu w liscie:"<<std::endl;
        s>>word;
        push_back(word);
        return s;
    }
};


#endif //PROJEKT_LIST_H
