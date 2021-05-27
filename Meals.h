#include<iostream>
using namespace std;

class Breakfast{
    friend ostream& operator << (ostream&, const Breakfast);
    public:
        Breakfast();
        Breakfast(int count,int calori);
        Breakfast(const Breakfast&);
        Breakfast& operator=(const Breakfast&);
        int GetCount();
        int GetCalori();
    private:
        const int Small = 200;
        const int Medium = 400;
        const int Large = 600;
        int Count = 0;
        int Calori = 0;
};

ostream& operator << (ostream&, const Breakfast);
Breakfast operator+ (Breakfast&,Breakfast&);
