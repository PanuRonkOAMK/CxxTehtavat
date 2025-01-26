#include "italianchef.h"

ItalianChef::ItalianChef()
{
    cout << "Italian chef defaultkonstruktori" << endl;
}
ItalianChef::ItalianChef(string n) : Chef(n)
{
    cout << "Italian Chef " << n << " konstruktori" << endl;
    chefName = n;
}
ItalianChef::~ItalianChef()
{
    cout << "Italian Chef " << chefName << " destruktori" << endl;
}
bool ItalianChef::askSecret(string a, int f, int w)
{
    if(a == password)
    {
        cout << "Password ok!" << endl;
        flour = f;
        water = w;
        makePizza();
        return(true);
    }else
    {
        return(false);
    }
}
int ItalianChef::makePizza()
{
    int p = 0;
    int w2 = water;
    int f2 = flour;
    while ((w2 >= 5) && (f2 >=5))
    {
        w2 = w2 - 5;
        f2 = f2 - 5;
        p = p + 1;
    }
    cout << "Italian Chef " << chefName << " with " << flour << " flour and " << water << " water can make " << p << " pizzas" << endl;
    return(p);
}
