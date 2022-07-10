//
// Created by Michin on 17.06.2022.
//

#include "LoadDictionary.h"

LoadDictionary::LoadDictionary(Dictionary * pointer)
{
    dict = pointer;
}
void LoadDictionary::set_dict(Dictionary *point)
{
    dict = point;
}
void LoadDictionary::load_file(const std::string &path)
{
    List* goal = dict->get_pointer();
    std::string s;
    std::ifstream file;
    file.open(path);
    while(std::getline(file, s))
    {
        goal->push_back(s);
    }
    file.close();
}