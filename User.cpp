#include "User.h"

User::User(){
    Name = "Name";
    Surname = "Surname";
    ID = 0;
    Age = 0;
    Weight = 0;
    WeekOfYear = 0;



    BasketPtr   =  Basketball();
    FootPtr     =  Football();
    TennisPtr   =  Tennis();
    Swimptr     =  Swimming();

    BreakPtr    =  Breakfast();
    LunchPtr    =  Lunch();
    DinnerPtr   =  Dinner();
}

User::User(string name, string surname, int id, int age, int weight, int year){
    Name = name;
    Surname = surname;
    ID = id;
    Age = age;
    Weight = weight;
    WeekOfYear = year;
    Day = 0;



    BasketPtr   =  Basketball();
    FootPtr     =  Football();
    TennisPtr   =  Tennis();
    Swimptr     =  Swimming();

    BreakPtr    =  Breakfast();
    LunchPtr    =  Lunch();
    DinnerPtr   =  Dinner();
}

User::User(const User& user){
    Name = user.Name;
    Surname = user.Surname;
    ID = user.ID;
    Age = user.Age;
    Weight = user.Weight;
    WeekOfYear = user.WeekOfYear;
    Day = user.Day;



    BasketPtr   = user.BasketPtr;
    FootPtr     = user.FootPtr;
    TennisPtr   = user.TennisPtr;
    Swimptr     = user.Swimptr;

    BreakPtr    = user.BreakPtr;
    LunchPtr    = user.LunchPtr;
    DinnerPtr   = user.DinnerPtr;
}

User& User::operator=(const User& user){
    Name = user.Name;
    Surname = user.Surname;
    ID = user.ID;
    Age = user.Age;
    Weight = user.Weight;
    WeekOfYear = user.WeekOfYear;
    Day = user.Day;


    BasketPtr   = user.BasketPtr;
    FootPtr     = user.FootPtr;
    TennisPtr   = user.TennisPtr;
    Swimptr     = user.Swimptr;

    BreakPtr    = user.BreakPtr;
    LunchPtr    = user.LunchPtr;
    DinnerPtr   = user.DinnerPtr;
    return *this;
}

User::~User(){
    cout<<endl<<this<<" User Deleted"<<endl;
}

string User::GetName(){return Name;}
string User::GetSurname(){return Surname;}
int User::GetID(){return ID;}
int User::GetAge(){return Age;}
int User::GetWeight(){return Weight;}
int User::GetWeekOfYear(){return WeekOfYear;}
int User::GetDay(){return Day;}

void User::SetName(string name){Name = name;}
void User::SetSurname(string surname){Surname = surname;}
void User::SetId(int id){ID = id;}
void User::SetAge(int age){Age = age;}
void User::SetWeight(int weight){Weight = weight;}
void User::SetWeekOfYear(int weekofyear){WeekOfYear = weekofyear;}
void User::SetDay(int day){Day = day;}

void User::DoSports(){
    int secim;
    bool dongu = true;
    int minute;
    cout<<"Hoşgeldin "<<Name + " " + Surname<<"\nSpor süresi (dk): ";
    cin>>minute;
    cout<<"Sporlar:"<<endl<<
    "1 Basketbol"<<endl<<"2 Futbol"<<endl<<
    "3 Tenis"<<endl<<"4 Yüzme"<<endl;
    
    while (dongu)
    {
        cout<<endl<<"Spor seçimi: ";
        cin>>secim;
        switch (secim)
        {
            case 1:
                BasketPtr.SetMinute(minute);
                break;
            case 2:
                FootPtr.SetMinute(minute);
                break;
            case 3:
                TennisPtr.SetMinute(minute);
                break;
            case 4:
                Swimptr.SetMinute(minute);
                break;
            default:
                cout<<"Geçerli seçim yapınız"<<endl;
                break;
        }//end switc case
        cout<<"1. Yeni kayıt"<<endl<<"2. Çıkış"<<endl<<"Seçim: ";
        cin>>secim;
        if(secim == 1)
        {
            cout<<"Spor süresi (dk): ";
            cin>>minute;
            cout<<"Sporlar:"<<endl<<
            "1 Basketbol"<<endl<<"2 Futbol"<<endl<<
            "3 Tenis"<<endl<<"4 Yüzme"<<endl;
        }
        else
            dongu = false;
        
    }//end while
    
}//end do sport function

void User::EatMeal(){
    int secim;
    bool mealBool = true;

    while (mealBool)
    {
        cout<<endl<<"Öğünler"<<endl<< "1 Breakfast"<<endl
        <<"2 Lunch"<<endl<<"3 Dinner"<<endl;
        cout<<"Seçim: ";
        cin>>secim;
        switch (secim)
        {
            case 1:
                BreakPtr.Eat();
                break;
            case 2:
                LunchPtr.Eat();
                break;
            case 3:
                DinnerPtr.Eat();
                break;
            default:
                cout<<"Hatalı seçim";
                break;
        }
        cout<<"1. Yeni kayıt"<<endl<<"2. çıkış"<<endl<<"seçim: ";
        cin>>secim;
        if(secim != 1)
            mealBool = false;

    }

    
    

}

void User::StartDay(){
    Day+=1;
    if (Day <= 7)
    {
        this->DoSports();
        this->EatMeal();    
    }
    else
        cout<<endl<<"***** 1 Hafta doldu daha fazla yapamazsın *****"<<endl;    
}

int User::CaloriesTaken(){
    int kcal = 0;
    kcal += this->BreakPtr.GetCalori();
    kcal += this->LunchPtr.GetCalori();
    kcal += this->DinnerPtr.GetCalori();

    return kcal;
}

int User::CaloriesBurned(){
    int kcal = 0;
    kcal += this->BasketPtr.GetBurn();
    kcal += this->FootPtr.GetBurn();
    kcal += this->TennisPtr.GetBurn();
    kcal += this->Swimptr.GetBurn();

    return kcal;
}

ostream& operator<<(ostream& os,const User user){
    os<<
    "Name: "<<user.Name<<endl<<
    "Surname: "<<user.Surname<<endl<<
    "ID: "<<user.ID<<endl<<
    "Age: "<<user.Age<<endl<<
    "Weight: "<<user.Weight<<endl<<
    "Week Of Year: "<<user.WeekOfYear<<endl<<
    "Day: "<<user.Day<<endl<<
    "***Meals***"<<endl<<
    (user.BreakPtr)<<endl<<(user.LunchPtr)<<endl<<(user.DinnerPtr)<<endl<<endl<<
    "***Sports***"<<endl<<
    (user.BasketPtr)<<endl<<(user.FootPtr)<<endl<<(user.TennisPtr)<<endl<<(user.Swimptr);
    return os;
}

User operator+(User& usr1,User& usr2){
    User* usr3 = new User;
    usr3->Name          = usr1.Name + usr2.Name;
    usr3->Surname       = usr1.Surname + usr2.Surname;
    usr3->Age           = usr1.Age + usr2.Age;
    usr3->Weight        = usr1.Weight + usr2.Weight;
    usr3->WeekOfYear    = usr1.WeekOfYear + usr2.WeekOfYear;
    usr3->Day           = usr1.Day + usr2.Day;

    (usr3->BasketPtr)  = (usr1.BasketPtr) + (usr2.BasketPtr);
    (usr3->FootPtr)    = (usr1.FootPtr) + (usr2.FootPtr);
    (usr3->TennisPtr)  = (usr1.TennisPtr) + (usr2.TennisPtr);
    (usr3->Swimptr)    = (usr1.Swimptr) + (usr2.Swimptr);

    (usr3->BreakPtr)   = (usr1.BreakPtr) + (usr2.BreakPtr);
    (usr3->LunchPtr)   = (usr1.LunchPtr) + (usr2.LunchPtr);
    (usr3->DinnerPtr)  = (usr1.DinnerPtr) + (usr2.DinnerPtr);
    return *usr3;
}

void User::VeriGir(){
    string name,surname;
    int id, age, weight, year,day;
    cout<<"İsim giriniz: ";
    cin>>name;
    cout<<"Soyisim giriniz: ";
    cin>>surname;
    cout<<"ID giriniz: ";
    cin>>id;
    cout<<"Yaş giriniz: ";
    cin>>age;
    cout<<"Kilonuzu giriniz: ";
    cin>>weight;
    cout<<"Hafta sayısını giriniz: ";
    cin>>year;
    cout<<"Kaçıncı gün: ";
    cin>>day;
    BreakPtr.SetCalori(0);
    LunchPtr.SetCalori(0);
    DinnerPtr.SetCalori(0);

    Name = name;
    Surname = surname;
    ID = id;
    Age = age;
    Weight = weight;
    WeekOfYear = year;
    Day = day;
}

void UserMode(User* usr1,User* usr2,User* usr3)
{
    bool kapi = true;
    int secim;
    
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
            endl<<"Secim: ";
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
    
}

void DevMode(){
    int secim;
    while (secim != 10)
    {
        cout<<"1. Breakfast class test"<<
        endl<<"2. Lunch class test "<<
        endl<<"3. Dinner class test"<<
        endl<<"4. Basketball class test"<<
        endl<<"5. Football class test"<<
        endl<<"6. Tennis class test"<<
        endl<<"7. Swimming class test"<<
        endl<<"8. User class test"<<
        endl<<"Seçim: ";
        cin>>secim;

        switch (secim)
        {
        case 1:
            breakfastTest();
            break;
        case 2:
            lunchTest();
            break;
        case 3:
            dinnerTest();
            break;
        case 4:
            basketballTest();
            break;
        case 5:
            footballTest();
            break;
        case 6:
            tennisTest();
            break;
        case 7:
            swimmingTest();
        case 8:
            userTest();
            break;
        
        default:
            secim = 10;
            break;
        }
    }
    
}

void userTest(){
    User *usr1 = new User();
    User *usr2 = new User("ömer","genç",1,23,74,10);
    
    string setmethod = "SetName(nazlı);\nSetSurname(genç);\nSetId(1);\nSetAge(1);\nSetWeight(1);\nSetWeekOfYear(1);\nSetDay(1);";
    string getmethod = "GetName();\nGetSurname();\nGetID();\nGetAge();\nGetWeight();\nGetWeekOfYear();\nGetDay();";
    cout<<"usr1 default constructor ile oluşturuldu"<<
    endl<<"usr1 yazdırılıyor..."<<endl;
    cout<<*usr1<<
    endl<<"usr2 constructor ile oluşturuldu.... User usr2(ömer,genç,1,23,74,10)"<<
    endl<<"usr2 yazdırılıyor..."<<endl<<*usr2<<endl<<"Usr2 için StartDay() metodu çalıştırılıyor (dosport ve eat meal bunun içerisinde)"<<endl;
    usr2->StartDay();
    User *usr3 = new User(*usr2);
    cout<<"usr3 copy constructor ile oluşturuldu... User usr3(usr2)"<<
    endl<<"usr3 yazdırılıyor..."<<endl<<*usr3<<endl;
    cout<<"asigmant operator test ediliyor... usr1 = usr3"<<endl;
    *usr1=*usr3;
    cout<<"usr1 yazdırılıyor...."<<endl<<*usr1<<
    endl<<"set metotları usr1 için uygulanıyor..."<<
    endl<<setmethod<<endl;
    usr1->SetName("nazlı");
    usr1->SetSurname("genç");
    usr1->SetId(1);
    usr1->SetAge(1);
    usr1->SetWeight(1);
    usr1->SetWeekOfYear(1);
    usr1->SetDay(1);
    cout<<"usr1 için get mehodtları test ediliyor.."<<endl<<getmethod<<
    endl<<usr1->GetName()<<endl<<usr1->GetSurname()<<
    endl<<usr1->GetID()<<endl<<usr1->GetAge()<<
    endl<<usr1->GetWeight()<<endl<<usr1->GetWeekOfYear()<<
    endl<<usr1->GetDay()<<endl;
    delete usr1,usr2,usr3;
}