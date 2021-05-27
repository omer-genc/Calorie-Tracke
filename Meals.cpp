#include "Meals.h"

Breakfast::Breakfast(){
    Count = 0;
    Calori = 0;
}

Breakfast::Breakfast(int count, int calori){
    Count = count;
    Calori = calori;
}

Breakfast::Breakfast(const Breakfast& other){
    Count = other.Count;
    Calori = other.Calori;
}

Breakfast& Breakfast::operator= (const Breakfast& other){
    Count = other.Count;
    Calori = other.Calori;
    return *this;
}

Breakfast operator+ (Breakfast& a, Breakfast& b){
    int count = a.GetCount() + b.GetCount();
    int calori = a.GetCalori() + b.GetCalori();
    Breakfast x(count,calori);
    return x;
}

ostream& operator << (ostream& os, const Breakfast br){
    os<<"Sayaç : "<<br.Count<<endl<<"Kalori: "<<br.Calori<<endl;
    return os;
}
int Breakfast::GetCount(){return Count;}
int Breakfast::GetCalori(){return Calori;}