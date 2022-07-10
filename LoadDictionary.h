//
// Created by Michin on 17.06.2022.
//

#ifndef PROJEKT_LOADDICTIONARY_H
#define PROJEKT_LOADDICTIONARY_H
#include "Dictionary.h"

class LoadDictionary {
    Dictionary* dict = nullptr;
public:
    LoadDictionary() = default;
    explicit LoadDictionary(Dictionary*);
    Dictionary* get_dict(){ return dict; }
    void set_dict(Dictionary* point);
    void load_file(const std::string &path);
    ~LoadDictionary() = default;
};


#endif //PROJEKT_LOADDICTIONARY_H
