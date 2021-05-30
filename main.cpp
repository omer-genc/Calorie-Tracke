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

    UserMode(usr1,usr2,usr3);
    return 0;
}