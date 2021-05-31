/*
    coder: omer-genc
    ogunler.h
        classlar:
            (small medium large)
            Breakfast
            Lunch
            Dinner
    
    sporlar.h
        claslar:
            Basketball
            Football
            Tennis
            Swimming
    
    users.h
        claslar:
            User:
                ad,soyad,ID,yaş,kilo
                alınan verilen kalori
                kaçıncı hafta
                öğün ve spor classları


*/

#include "User.h"

int main(){
    User *usr1 = new User;
    User *usr2 = new User;
    User *usr3 = new User;
    int secim;
    cout<<"1. Kullanıcı modu"<<
    endl<<"2. Geliştirici modu"<<
    endl<<"Secim: ";
    cin>>secim;
    
    if (secim == 1)
        UserMode(usr1,usr2,usr3);
    else if(secim == 2)
        DevMode();
    else
        cout<<"Hatalı seçim";
    
    return 0;
}