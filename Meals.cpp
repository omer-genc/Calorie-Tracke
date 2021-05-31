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
    os<<"Breakfast"<<endl<<"Sayaç : "<<br.Count<<endl<<"Kalori: "<<br.Calori<<endl;
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
    os<<"Lunch"<<endl<<"Sayaç : "<<br.Count<<endl<<"Kalori: "<<br.Calori<<endl;
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
    os<<"Lunch"<<endl<<"Sayaç : "<<br.Count<<endl<<"Kalori: "<<br.Calori<<endl;
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

//tests
void breakfastTest(){
    cout<<"Breakfast test"<<endl<<"br1 nesnesi oluşturuldu"<<endl;
    Breakfast br1;
    cout<<"br1 yazdırılıyor..."<<endl<<br1<<
    endl<<"br2 nesnesi constructor ile  oluşturuluyor..... br2(10,10) "<<endl;
    Breakfast br2(10,10);
    cout<<"br2 nesnesi yazdırılıyor.....";
    cout<<br2;
    cout<<"br3 nesnesi copy constuructor ile oluşturuluyor..... br3(br2)"<<endl;
    Breakfast br3(br2);
    cout<<"br3 nesnesi yazdırılıyor...."<<endl;
    cout<<br3;
    cout<<"Assigmant operator çalıştırılıyor..... br3 = br1"<<endl;
    br3 = br1;
    cout<<"br3 yazdırılıyor....."<<endl;
    cout<<br3;
    Breakfast br4(20,20);
    cout<<"+ operatorü test ediliyor..... br4(20,20), br3 = br4 + br2"<<endl;
    br3 = br4 + br2;
    cout<<"br3 yazdırılıyor..."<<endl;
    cout<<br3;
    cout<<"br3.setCount(3) br3.setCalori(3) metotları çalıştırılıyor"<<
    endl<<"br3.getCount(): "<<br3.GetCount()<<
    endl<<"br3.getCalori(): "<<br3.GetCalori()<<
    endl<<"br3.Eat() metodu çalıştırılıyor...."<<endl;
    br3.Eat();
    cout<<"br3 yazdırılıyor..."<<br3;
    cout<<endl<<endl;
}

void lunchTest(){
    cout<<"Lunch test"<<endl<<"ln1 nesnesi oluşturuldu"<<endl;
    Lunch ln1;
    cout<<"ln1 yazdırılıyor..."<<endl<<ln1<<
    endl<<"ln2 nesnesi constructor ile  oluşturuluyor..... ln2(10,10) "<<endl;
    Lunch ln2(10,10);
    cout<<"ln2 nesnesi yazdırılıyor.....";
    cout<<ln2;
    cout<<"ln3 nesnesi copy constuructor ile oluşturuluyor..... ln3(ln2)"<<endl;
    Lunch ln3(ln2);
    cout<<"ln3 nesnesi yazdırılıyor...."<<endl;
    cout<<ln3;
    cout<<"Assigmant operator çalıştırılıyor..... ln3 = ln1"<<endl;
    ln3 = ln1;
    cout<<"ln3 yazdırılıyor....."<<endl;
    cout<<ln3;
    Lunch ln4(20,20);
    cout<<"+ operatorü test ediliyor..... ln4(20,20), ln3 = ln4 + ln2"<<endl;
    ln3 = ln4 + ln2;
    cout<<"ln3 yazdırılıyor..."<<endl;
    cout<<ln3;
    cout<<"ln3.setCount(3) ln3.setCalori(3) metotları çalıştırılıyor"<<
    endl<<"ln3.getCount(): "<<ln3.GetCount()<<
    endl<<"ln3.getCalori(): "<<ln3.GetCalori()<<
    endl<<"ln3.Eat() metodu çalıştırılıyor...."<<endl;
    ln3.Eat();
    cout<<"ln3 yazdırılıyor..."<<ln3;
    cout<<endl<<endl;
}

void dinnerTest(){
    cout<<"Dinner test"<<endl<<"dn1 nesnesi oluşturuldu"<<endl;
    Dinner dn1;
    cout<<"dn1 yazdırılıyor..."<<endl<<dn1<<
    endl<<"dn2 nesnesi constructor ile  oluşturuluyor..... dn2(10,10) "<<endl;
    Dinner dn2(10,10);
    cout<<"dn2 nesnesi yazdırılıyor.....";
    cout<<dn2;
    cout<<"dn3 nesnesi copy constuructor ile oluşturuluyor..... dn3(dn2)"<<endl;
    Dinner dn3(dn2);
    cout<<"dn3 nesnesi yazdırılıyor...."<<endl;
    cout<<dn3;
    cout<<"Assigmant operator çalıştırılıyor..... dn3 = dn1"<<endl;
    dn3 = dn1;
    cout<<"dn3 yazdırılıyor....."<<endl;
    cout<<dn3;
    Dinner dn4(20,20);
    cout<<"+ operatorü test ediliyor..... dn4(20,20), dn3 = dn4 + dn2"<<endl;
    dn3 = dn4 + dn2;
    cout<<"dn3 yazdırılıyor..."<<endl;
    cout<<dn3;
    cout<<"dn3.setCount(3) dn3.setCalori(3) metotları çalıştırılıyor"<<
    endl<<"dn3.getCount(): "<<dn3.GetCount()<<
    endl<<"dn3.getCalori(): "<<dn3.GetCalori()<<
    endl<<"dn3.Eat() metodu çalıştırılıyor...."<<endl;
    dn3.Eat();
    cout<<"dn3 yazdırılıyor..."<<dn3;
    cout<<endl<<endl;
}