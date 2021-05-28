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

void Breakfast::Eat(){
    int x;
    bool A = true;
    cout<<"Boy seçiniz:\n"<<"1 Small: 200 kcal"<<
    endl<<"2 Medium: 400 kcal"<<endl<<"3 Large: 600 kcal"<<
    endl<<"4 İptal"<<endl;
    while (A)
    {
        cout<<"Seçim:";
        cin>>x;
        switch (x){
            case 1:
                Calori += Small;
                Count +=1;
                A = false;
                break;
            case 2:
                Calori += Medium;
                Count +=1;
                A = false;
            case 3:
                Calori += Large;
                Count +=1;
                A = false;
            case 4:
                A = false;
                break;
            default:
                cout<<"Tekrar Seçim Yapınız:";
                break;
        }
    }
    
}

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

void Lunch::Eat(){
    int x;
    bool A = true;
    cout<<"Boy seçiniz:\n"<<"1 Small: 400 kcal"<<
    endl<<"2 Medium: 600 kcal"<<endl<<"3 Large: 800 kcal"<<
    endl<<"4 İptal"<<endl;
    while (A)
    {
        cout<<"Seçim:";
        cin>>x;
        switch (x){
            case 1:
                Calori += Small;
                Count +=1;
                A = false;
                break;
            case 2:
                Calori += Medium;
                Count +=1;
                A = false;
            case 3:
                Calori += Large;
                Count +=1;
                A = false;
            case 4:
                A = false;
                break;
            default:
                cout<<"Tekrar Seçim Yapınız:";
                break;
        }
    }
    
}

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

void Dinner::Eat(){
    int x;
    bool A = true;
    cout<<"Boy seçiniz:\n"<<"1 Small: 400 kcal"<<
    endl<<"2 Medium: 600 kcal"<<endl<<"3 Large: 800 kcal"<<
    endl<<"4 İptal"<<endl;
    while (A)
    {
        cout<<"Seçim:";
        cin>>x;
        switch (x){
            case 1:
                Calori += Small;
                Count +=1;
                A = false;
                break;
            case 2:
                Calori += Medium;
                Count +=1;
                A = false;
            case 3:
                Calori += Large;
                Count +=1;
                A = false;
            case 4:
                A = false;
                break;
            default:
                cout<<"Tekrar Seçim Yapınız:";
                break;
        }
    }
    
}