//
// Created by Michin on 27.04.2022.
//

#ifndef PROJEKT_DICTIONARY_H
#define PROJEKT_DICTIONARY_H
#include "List.h"
#include <iostream>
#include <fstream>

class Dictionary{
    //wskaznik na liste ktora slownik bedzie operowal
    List* list = nullptr;
public:
    //domyslny konstruktor
    Dictionary() = default;
    //konstruktor ustawiajacy od razu wskaznik
    explicit Dictionary(List*p);
    //metoda ustawiajaca wskaznik na liste
    void setP(List* p);
    //funkcja zwracajaca wskaznik na liste
    List* get_pointer(){ return list; }
    //szukanie slowa bazujac na indeksie
    std::string search_word(int index);
    //domyslny destruktor
    ~Dictionary() = default;
};


#endif //PROJEKT_DICTIONARY_H
