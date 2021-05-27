#include "Meals.h"

//Breakfast 
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

void Breakfast::SetCount(int count){Count = count;}
void Breakfast::SetCalori(int calori){Calori = calori;}

ostream& operator << (ostream& os, const Breakfast br){
    os<<"Sayaç : "<<br.Count<<endl<<"Kalori: "<<br.Calori<<endl;
    return os;
}
int Breakfast::GetCount(){return Count;}
int Breakfast::GetCalori(){return Calori;}

//lunch
Lunch::Lunch(){
    Count = 0;
    Calori = 0;
}

Lunch::Lunch(int count, int calori){
    Count = count;
    Calori = calori;
}

Lunch::Lunch(const Lunch& other){
    Count = other.Count;
    Calori = other.Calori;
}

Lunch& Lunch::operator= (const Lunch& other){
    Count = other.Count;
    Calori = other.Calori;
    return *this;
}

Lunch operator+ (Lunch& a, Lunch& b){
    int count = a.GetCount() + b.GetCount();
    int calori = a.GetCalori() + b.GetCalori();
    Lunch x(count,calori);
    return x;
}

void Lunch::SetCount(int count){Count = count;}
void Lunch::SetCalori(int calori){Calori = calori;}

ostream& operator << (ostream& os, const Lunch br){
    os<<"Sayaç : "<<br.Count<<endl<<"Kalori: "<<br.Calori<<endl;
    return os;
}
int Lunch::GetCount(){return Count;}
int Lunch::GetCalori(){return Calori;}

//Dinner 
Dinner::Dinner(){
    Count = 0;
    Calori = 0;
}

Dinner::Dinner(int count, int calori){
    Count = count;
    Calori = calori;
}

Dinner::Dinner(const Dinner& other){
    Count = other.Count;
    Calori = other.Calori;
}

Dinner& Dinner::operator= (const Dinner& other){
    Count = other.Count;
    Calori = other.Calori;
    return *this;
}

Dinner operator+ (Dinner& a, Dinner& b){
    int count = a.GetCount() + b.GetCount();
    int calori = a.GetCalori() + b.GetCalori();
    Dinner x(count,calori);
    return x;
}

void Dinner::SetCount(int count){Count = count;}
void Dinner::SetCalori(int calori){Calori = calori;}

ostream& operator << (ostream& os, const Dinner br){
    os<<"Sayaç : "<<br.Count<<endl<<"Kalori: "<<br.Calori<<endl;
    return os;
}
int Dinner::GetCount(){return Count;}
int Dinner::GetCalori(){return Calori;}