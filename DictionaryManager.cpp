//
// Created by Michin on 23.06.2022.
//

#include "DictionaryManager.h"

void DictionaryManager::Initialize()
{
    list.set_counter(&numberOfElements);
    dict.setP(&list);
    load.set_dict(&dict);
    load.load_file("list2.txt");
}
