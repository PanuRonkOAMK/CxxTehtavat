#include <iostream>
#include <cstdlib>

using namespace std;

int game(int maxnum);

int main()
{
    int suurin;
    cout << "Anna suurin arvattava luku" << endl;
    cin >> suurin;
    int maara = game(suurin);
    cout << "Arvausten maara " << maara << endl;
    return 0;
}
int game(int maxnum)
{
    std::srand(maxnum);
    maxnum++;
    int satunnaisluku = std::rand() % maxnum;
    maxnum--;
    int arvaus;
    int maara = 0;
    cout << "Arvaa luku valilta 1-" << maxnum << endl;
    while(arvaus != satunnaisluku){
        maara++;
        cin >> arvaus;
        if(arvaus == satunnaisluku) {
            cout << "Oikea vastaus" << endl;
        } else if(arvaus > satunnaisluku) {
            cout << "Luku on pienempi" << endl;
        } else if(arvaus < satunnaisluku) {
            cout << "Luku on suurempi" << endl;
        }
    }
    return(maara);
}
