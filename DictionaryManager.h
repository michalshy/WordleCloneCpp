//
// Created by Michin on 23.06.2022.
//

#ifndef PROJEKT_DICTIONARYMANAGER_H
#define PROJEKT_DICTIONARYMANAGER_H
#include "Counter.h"
#include "List.h"
#include "Dictionary.h"
#include "LoadDictionary.h"

class DictionaryManager {
    Counter numberOfElements;
    List list;
    Dictionary dict;
    LoadDictionary load;
public:
    DictionaryManager() = default;
    void Initialize();
    Counter * get_counter(){ return &numberOfElements; }
    List * get_list(){ return &list; }
    Dictionary * get_dict(){ return &dict; }
    LoadDictionary * get_load(){ return &load; }
    ~DictionaryManager() = default;
};


#endif //PROJEKT_DICTIONARYMANAGER_H
