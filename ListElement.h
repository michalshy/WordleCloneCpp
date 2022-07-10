//
// Created by Michin on 27.04.2022.
//

#ifndef PROJEKT_LISTELEMENT_H
#define PROJEKT_LISTELEMENT_H
#include <string>

class ListElement {
    std::string word = " ";
    ListElement* next = nullptr;
public:
    //podstawowy konstruktor bezparametrowy
    ListElement() = default;
    //konstruktor jednoparametrowy nadajacy od razu slowo
    ListElement(std::string);
    //metoda ktora zmienia slowo w polu prywatnym
    void set_word(std::string & s);
    //metoda ktora zwraca wskaznik na nastepny element listy
    ListElement* get_next(){ return next; }
    //metoda zwracajaca slowo wybranego elementu
    std::string get_word() { return word; }
    //metoda ktora zmienia wskaznik na nastepny element na ten podany jako argument
    void set_next(ListElement* _next);
    //podstawowy destruktor
    ~ListElement() = default;
};


#endif //PROJEKT_LISTELEMENT_H
