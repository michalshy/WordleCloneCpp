//
// Created by Michin on 21.06.2022.
//

#include "Utilities.h"

char Utilities::changeToUpper(char& c)
{
    c = (char)toupper(c);
    return c;
}
char Utilities::changeToSmall(char& c)
{
    c = (char) tolower(c);
    return c;
}