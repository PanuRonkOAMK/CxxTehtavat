#ifndef CHEF_H
#define CHEF_H
#include <iostream>

using namespace std;

class Chef
{
public:
    Chef();
    Chef(string n);
    ~Chef();
    string getName();
    int makeSalad(int a);
    int makeSoup(int b);
protected:
    string chefName;
};

#endif // CHEF_H
