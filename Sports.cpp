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

//test
void basketballTest(){
    cout<<"bs1 nesnesi oluşturuldu... default constractor"<<
    endl<<"bs1 yazdırılıyor..."<<endl;
    Basketball bs1;
    cout<<bs1;
    cout<<"bs2 nesnesi oluşturuluyor... bs2(10)"<<
    endl<<"bs2 nesnesi yazdırılıyor..."<<endl;
    Basketball bs2(10);
    cout<<bs2;
    cout<<"bs3 nesnesi copy constructor ile oluşturuluyor... bs3(bs2)"<<
    endl<<"bs3 nesnesi yazdırılıyor...."<<endl;
    Basketball bs3(bs2);
    cout<<bs3;
    cout<<"bs4 nesnesi oluşturuldu..."<<
    endl<<"assigment operator çağırılıyor.... bs4 = bs2"<<
    endl<<"bs4 yazdırılıyor"<<endl;
    Basketball bs4;
    bs4 = bs2;
    cout<<"bs4 yazdırılıyor..."<<endl;
    cout<<bs4;
    cout<<"+ operator test ediliyor... bs4 = bs2 + bs3"<<
    endl<<"bs4 yazdırılıyor..."<<endl;
    bs4 = bs2 + bs3;
    cout<<bs4;
    bs4.SetMinute(50);
    cout<<"set get metotları test ediliyor"<<
    endl<<"bs4.setMinute(50): "<<
    endl<<"bs4.GetMinute(): "<<bs4.GetMinute()<<
    endl<<"bs4.GetBurn(): "<<bs4.GetBurn()<<
    endl<<endl<<endl;
}
void footballTest(){
    cout<<"fb1 nesnesi oluşturuldu... default constractor"<<
    endl<<"fb1 yazdırılıyor..."<<endl;
    Football fb1;
    cout<<fb1;
    cout<<"fb2 nesnesi oluşturuluyor... fb2(10)"<<
    endl<<"fb2 nesnesi yazdırılıyor..."<<endl;
    Football fb2(10);
    cout<<fb2;
    cout<<"fb3 nesnesi copy constructor ile oluşturuluyor... fb3(fb2)"<<
    endl<<"fb3 nesnesi yazdırılıyor...."<<endl;
    Football fb3(fb2);
    cout<<fb3;
    cout<<"fb4 nesnesi oluşturuldu..."<<
    endl<<"assigment operator çağırılıyor.... fb4 = fb2"<<
    endl<<"fb4 yazdırılıyor"<<endl;
    Football fb4;
    fb4 = fb2;
    cout<<"fb4 yazdırılıyor..."<<endl;
    cout<<fb4;
    cout<<"+ operator test ediliyor... fb4 = fb2 + fb3"<<
    endl<<"fb4 yazdırılıyor..."<<endl;
    fb4 = fb2 + fb3;
    cout<<fb4;
    fb4.SetMinute(50);
    cout<<"set get metotları test ediliyor"<<
    endl<<"fb4.setMinute(50): "<<
    endl<<"fb4.GetMinute(): "<<fb4.GetMinute()<<
    endl<<"fb4.GetBurn(): "<<fb4.GetBurn()<<
    endl<<endl<<endl;
}
void tennisTest(){
    cout<<"tn1 nesnesi oluşturuldu... default constractor"<<
    endl<<"tn1 yazdırılıyor..."<<endl;
    Tennis tn1;
    cout<<tn1;
    cout<<"tn2 nesnesi oluşturuluyor... tn2(10)"<<
    endl<<"tn2 nesnesi yazdırılıyor..."<<endl;
    Tennis tn2(10);
    cout<<tn2;
    cout<<"tn3 nesnesi copy constructor ile oluşturuluyor... tn3(tn2)"<<
    endl<<"tn3 nesnesi yazdırılıyor...."<<endl;
    Tennis tn3(tn2);
    cout<<tn3;
    cout<<"tn4 nesnesi oluşturuldu..."<<
    endl<<"assigment operator çağırılıyor.... tn4 = tn2"<<
    endl<<"tn4 yazdırılıyor"<<endl;
    Tennis tn4;
    tn4 = tn2;
    cout<<"tn4 yazdırılıyor..."<<endl;
    cout<<tn4;
    cout<<"+ operator test ediliyor... tn4 = tn2 + tn3"<<
    endl<<"tn4 yazdırılıyor..."<<endl;
    tn4 = tn2 + tn3;
    cout<<tn4;
    tn4.SetMinute(50);
    cout<<"set get metotları test ediliyor"<<
    endl<<"tn4.setMinute(50): "<<
    endl<<"tn4.GetMinute(): "<<tn4.GetMinute()<<
    endl<<"tn4.GetBurn(): "<<tn4.GetBurn()<<
    endl<<endl<<endl;
}
void swimmingTest(){
    cout<<"sw1 nesnesi oluşturuldu... default constractor"<<
    endl<<"sw1 yazdırılıyor..."<<endl;
    Swimming sw1;
    cout<<sw1;
    cout<<"sw2 nesnesi oluşturuluyor... sw2(10)"<<
    endl<<"sw2 nesnesi yazdırılıyor..."<<endl;
    Swimming sw2(10);
    cout<<sw2;
    cout<<"sw3 nesnesi copy constructor ile oluşturuluyor... sw3(sw2)"<<
    endl<<"sw3 nesnesi yazdırılıyor...."<<endl;
    Swimming sw3(sw2);
    cout<<sw3;
    cout<<"sw4 nesnesi oluşturuldu..."<<
    endl<<"assigment operator çağırılıyor.... sw4 = sw2"<<
    endl<<"sw4 yazdırılıyor"<<endl;
    Swimming sw4;
    sw4 = sw2;
    cout<<"sw4 yazdırılıyor..."<<endl;
    cout<<sw4;
    cout<<"+ operator test ediliyor... sw4 = sw2 + sw3"<<
    endl<<"sw4 yazdırılıyor..."<<endl;
    sw4 = sw2 + sw3;
    cout<<sw4;
    sw4.SetMinute(50);
    cout<<"set get metotları test ediliyor"<<
    endl<<"sw4.setMinute(50): "<<
    endl<<"sw4.GetMinute(): "<<sw4.GetMinute()<<
    endl<<"sw4.GetBurn(): "<<sw4.GetBurn()<<
    endl<<endl<<endl;
}