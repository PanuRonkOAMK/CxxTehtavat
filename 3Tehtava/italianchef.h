#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "chef.h"

class ItalianChef : public Chef
{
public:
    ItalianChef();
    ItalianChef(string);
    ~ItalianChef();
    bool askSecret(string, int, int);
private:
    int makePizza();

    string password = "pizza";
    int flour;
    int water;
};

#endif // ITALIANCHEF_H
