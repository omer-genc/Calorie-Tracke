#include "User.h"

int main(){
    
    bool kapi = true;
    int secim;
    User *usr1 = new User;
    User *usr2 = new User;
    User *usr3 = new User;
    while (kapi)
    {
        cout<<"1. Kullanıcı oluştur"<<
        endl<<"2. Gün kaydı"<<
        endl<<"3. Kalori verileri"<<
        endl<<"4. Kullanıcı yazdır"<<
        endl<<"5. çıkış"<<
        endl<<"Seçim:";
        cin>>secim;

        if (secim == 1)
        {
            cout<<"1. slot"<<endl<<"2. slot"<<endl<<"3. slot"<<endl<<"Seçim: ";
            cin>>secim;
            if(secim == 1)
                usr1->VeriGir();
            else if(secim == 2)
                usr2->VeriGir();
            else if(secim == 3)
                usr3->VeriGir();
            else
                cout<<"Hatalı seçim";
        }
        else if(secim == 2)
        {
            cout<<"1. "<<usr1->GetName()<<" "<<usr1->GetSurname()<<
            endl<<"2. "<<usr2->GetName()<<" "<<usr2->GetSurname()<<
            endl<<"3. "<<usr3->GetName()<<" "<<usr3->GetSurname()<<
            endl<<"Secim: ";
            cin>>secim;
            if(secim == 1)
                usr1->StartDay();
            else if(secim == 2)
                usr2->StartDay();
            else if(secim == 3)
                usr3->StartDay();
            else
                cout<<"Hatalı seçim";
        }
        else if (secim == 3)
        {
            cout<<"1. "<<usr1->GetName()<<" "<<usr1->GetSurname()<<
            endl<<"2. "<<usr2->GetName()<<" "<<usr2->GetSurname()<<
            endl<<"3. "<<usr3->GetName()<<" "<<usr3->GetSurname()<<
            "Secim: ";
            cin>>secim;
            if(secim == 1)
            {
                cout<<"Alınan kalori: "<<usr1->CaloriesTaken()<<
                endl<<"Yakılan kalori: "<<usr1->CaloriesBurned()<<
                endl<<"Net"<<usr1->CaloriesTaken()-usr1->CaloriesBurned()<<endl;
            }
            else if(secim == 2)
            {
                cout<<"Alınan kalori: "<<usr2->CaloriesTaken()<<
                endl<<"Yakılan kalori: "<<usr2->CaloriesBurned()<<
                endl<<"Net"<<usr2->CaloriesTaken()-usr2->CaloriesBurned()<<endl;
            }
            else if(secim == 3)
            {
                cout<<"Alınan kalori: "<<usr3->CaloriesTaken()<<
                endl<<"Yakılan kalori: "<<usr3->CaloriesBurned()<<
                endl<<"Net"<<usr3->CaloriesTaken()-usr3->CaloriesBurned()<<endl;
            }
            else
                cout<<"Hatalı seçim";
        }
        else if(secim == 4)
        {
            cout<<"1. "<<usr1->GetName()<<" "<<usr1->GetSurname()<<
            endl<<"2. "<<usr2->GetName()<<" "<<usr2->GetSurname()<<
            endl<<"3. "<<usr3->GetName()<<" "<<usr3->GetSurname()<<
            "Secim: ";
            cin>>secim;

            if(secim == 1)
                cout<<endl<<*usr1<<endl;
            else if(secim == 2)
                cout<<endl<<*usr1<<endl;
            else if(secim == 3)
                cout<<endl<<*usr1<<endl;
            else
                cout<<"Hatalı seçim."<<endl;
        }
        else if(secim == 5)
            kapi = false;
        else 
            cout<<"Hatalı seçim tekrar deneyiniz"<<endl;
        
    }
    

    return 0;
}