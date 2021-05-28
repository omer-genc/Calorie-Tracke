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
        void SetCount(int);
        void SetCalori(int);
        void Eat();
    private:
        const int Small = 200;
        const int Medium = 400;
        const int Large = 600;
        int Count = 0;
        int Calori = 0;
};

ostream& operator << (ostream&, const Breakfast);
Breakfast operator+ (Breakfast&,Breakfast&);

class Lunch{
    friend ostream& operator << (ostream&, const Lunch);
    public:
        Lunch();
        Lunch(int count,int calori);
        Lunch(const Lunch&);
        Lunch& operator=(const Lunch&);
        int GetCount();
        int GetCalori();
        void SetCount(int);
        void SetCalori(int);
        void Eat();
    private:
        const int Small = 400;
        const int Medium = 600;
        const int Large = 800;
        int Count = 0;
        int Calori = 0;
};

ostream& operator << (ostream&, const Lunch);
Lunch operator+ (Lunch&,Lunch&);

class Dinner{
    friend ostream& operator << (ostream&, const Dinner);
    public:
        Dinner();
        Dinner(int count,int calori);
        Dinner(const Dinner&);
        Dinner& operator=(const Dinner&);
        int GetCount();
        int GetCalori();
        void SetCount(int);
        void SetCalori(int);
        void Eat();
    private:
        const int Small = 400;
        const int Medium = 600;
        const int Large = 800;
        int Count = 0;
        int Calori = 0;
};

ostream& operator << (ostream&, const Dinner);
Dinner operator+ (Dinner&,Dinner&);