#include "Sports.h"

//Basketball
Basketball::Basketball(){Minute = 0;}

Basketball::Basketball(int minute){Minute = minute;}

Basketball::Basketball(const Basketball& other){Minute = other.Minute;}

Basketball& Basketball::operator=(const Basketball& other){
    Minute = other.Minute;
    return *this;
}

int Basketball::GetBurn(){return Kcal*Minute;}

int Basketball::GetMinute(){return Minute;}

void Basketball::SetMinute(int minute){Minute = minute;}

ostream& operator<<(ostream& os, const Basketball bs){
    os<<"Basketball\n"<<"Minute: "<<bs.Minute
    <<endl<<"Calori: "<<bs.Minute*bs.Kcal<<endl;
    return os;
}

Basketball operator+(Basketball& a,Basketball& b){
    int x = a.GetMinute() + b.GetMinute();
    Basketball y(x);
    return y;
}

//Football
Football::Football(){Minute = 0;}

Football::Football(int minute){Minute = minute;}

Football::Football(const Football& other){Minute = other.Minute;}

Football& Football::operator=(const Football& other){
    Minute = other.Minute;
    return *this;
}

int Football::GetBurn(){return Kcal*Minute;}

int Football::GetMinute(){return Minute;}

void Football::SetMinute(int minute){Minute = minute;}

ostream& operator<<(ostream& os, const Football bs){
    os<<"Football\n"<<"Minute: "<<bs.Minute
    <<endl<<"Calori: "<<bs.Minute*bs.Kcal<<endl;
    return os;
}

Football operator+(Football& a,Football& b){
    int x = a.GetMinute() + b.GetMinute();
    Football y(x);
    return y;
}

//Tennis
Tennis::Tennis(){Minute = 0;}

Tennis::Tennis(int minute){Minute = minute;}

Tennis::Tennis(const Tennis& other){Minute = other.Minute;}

Tennis& Tennis::operator=(const Tennis& other){
    Minute = other.Minute;
    return *this;
}

int Tennis::GetBurn(){return Kcal*Minute;}

int Tennis::GetMinute(){return Minute;}

void Tennis::SetMinute(int minute){Minute = minute;}

ostream& operator<<(ostream& os, const Tennis bs){
    os<<"Tennis\n"<<"Minute: "<<bs.Minute
    <<endl<<"Calori: "<<bs.Minute*bs.Kcal<<endl;
    return os;
}

Tennis operator+(Tennis& a,Tennis& b){
    int x = a.GetMinute() + b.GetMinute();
    Tennis y(x);
    return y;
}

//Swimming
Swimming::Swimming(){Minute = 0;}

Swimming::Swimming(int minute){Minute = minute;}

Swimming::Swimming(const Swimming& other){Minute = other.Minute;}

Swimming& Swimming::operator=(const Swimming& other){
    Minute = other.Minute;
    return *this;
}

int Swimming::GetBurn(){return Kcal*Minute;}

int Swimming::GetMinute(){return Minute;}

void Swimming::SetMinute(int minute){Minute = minute;}

ostream& operator<<(ostream& os, const Swimming bs){
    os<<"Swimming\n"<<"Minute: "<<bs.Minute
    <<endl<<"Calori: "<<bs.Minute*bs.Kcal<<endl;
    return os;
}

Swimming operator+(Swimming& a,Swimming& b){
    int x = a.GetMinute() + b.GetMinute();
    Swimming y(x);
    return y;
}