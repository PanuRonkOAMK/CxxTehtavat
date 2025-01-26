#include <iostream>
#include "italianchef.h"

using namespace std;

int main()
{
    Chef kokki("Gordon");
    kokki.makeSalad(11);
    kokki.makeSoup(18);

    ItalianChef kokki2("Mario");
    kokki2.makeSalad(9);
    kokki2.askSecret("password",6,6);
    kokki2.askSecret("pizza",12,12);

    return 0;
}
