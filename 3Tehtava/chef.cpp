#include "chef.h"

Chef::Chef()
{
    cout << "Chef defaultkonstruktori" << endl;
}
Chef::Chef(string n)
{
    cout << "Chef " << n << " konstruktori" << endl;
    chefName = n;
}
Chef::~Chef()
{
    cout << "Chef " << chefName << " destruktori" << endl;
}
string Chef::getName()
{
    return(chefName);
}
int Chef::makeSalad(int a)
{
    cout << "Chef " << chefName << " with " << a << " items can make salad " << (a/5) << " portions" << endl;
    return(a / 5);
}
int Chef::makeSoup(int b)
{
    cout << "Chef " << chefName << " with " << b << " items can make soup " << (b/3) << " portions" << endl;
    return(b / 3);
}
