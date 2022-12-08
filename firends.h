#include <iostream>

using namespace std;

class Punkt
{
    string nazwa;
    float x,y;
    public:
        Punkt(string="A",float=0, float=0);
        void wczytaj();
};
