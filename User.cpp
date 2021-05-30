#include "User.h"

User::User(){
    Name = "Name";
    Surname = "Surname";
    ID = 0;
    Age = 0;
    Weight = 0;
    WeekOfYear = 0;



    BasketPtr   = new Basketball();
    FootPtr     = new Football();
    TennisPtr   = new Tennis();
    Swimptr     = new Swimming();

    BreakPtr    = new Breakfast();
    LunchPtr    = new Lunch();
    DinnerPtr   = new Dinner();
}

User::User(string name, string surname, int id, int age, int weight, int year){
    Name = name;
    Surname = surname;
    ID = id;
    Age = age;
    Weight = weight;
    WeekOfYear = year;



    BasketPtr   = new Basketball();
    FootPtr     = new Football();
    TennisPtr   = new Tennis();
    Swimptr     = new Swimming();

    BreakPtr    = new Breakfast();
    LunchPtr    = new Lunch();
    DinnerPtr   = new Dinner();
}

User::User(const User& user){
    Name = user.Name;
    Surname = user.Surname;
    ID = user.ID;
    Age = user.Age;
    Weight = user.Weight;
    WeekOfYear = user.WeekOfYear;



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
    WeekOfYear = user.WeekOfYear;;


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
    delete[]  BasketPtr,FootPtr,TennisPtr,Swimptr,BreakPtr,LunchPtr,DinnerPtr;
    cout<<endl<<this<<" User Deleted"<<endl;
}

string User::GetName(){return Name;}
string User::GetSurname(){return Surname;}
int User::GetID(){return ID;}
int User::GetAge(){return Age;}
int User::GetWeight(){return Weight;}
int User::GetWeekOfYear(){return WeekOfYear;}

void User::SetName(string name){Name = name;}
void User::SetSurname(string surname){Surname = surname;}
void User::SetId(int id){ID = id;}
void User::SetAge(int age){Age = age;}
void User::SetWeight(int weight){Weight = weight;}
void User::SetWeekOfYear(int weekofyear){WeekOfYear = weekofyear;}

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
                BasketPtr->SetMinute(minute);
                dongu = false;
                break;
            case 2:
                FootPtr->SetMinute(minute);
                dongu = false;
                break;
            case 3:
                TennisPtr->SetMinute(minute);
                dongu = false;
                break;
            case 4:
                Swimptr->SetMinute(minute);
                dongu = false;
                break;
            default:
                cout<<"Geçerli seçim yapınız"<<endl;
                break;
        }//end switc case  
    }//end while
    
}//end do sport function

void User::EatMeal(){
    int meal;
    bool sizeBool = true;
    bool mealBool = true;

    cout<<endl<<"Öğünler"<<endl<< "1 Breakfast"<<endl
    <<"2 Lunch"<<endl<<"3 Dinner"<<endl;
    while (mealBool)
    {
        cout<<"Seçim: ";
        cin>>meal;
        if(meal == 1 || meal == 2 || meal ==3)
            mealBool = false;
        else
            cout<<"Tekrar deneyiniz."<<endl;
    }

    switch (meal)
    {
        case 1:
            BreakPtr->Eat();
            break;
        case 2:
            LunchPtr->Eat();
            break;
        case 3:
            DinnerPtr->Eat();
            break;
        default:
            cout<<"Bi sorun var";
            break;
    }
    

}

void User::StartDay(){
    this->DoSports();
    this->EatMeal();
}

int User::CaloriesTaken(){
    int kcal = 0;
    kcal += this->BreakPtr->GetCalori();
    kcal += this->LunchPtr->GetCalori();
    kcal += this->DinnerPtr->GetCalori();

    return kcal;
}

int User::CaloriesBurned(){
    int kcal = 0;
    kcal += this->BasketPtr->GetBurn();
    kcal += this->FootPtr->GetBurn();
    kcal += this->TennisPtr->GetBurn();
    kcal += this->Swimptr->GetBurn();

    return kcal;
}

User* User::Getnext(){return next;}
void User::Setnext(User& usr){next=&usr;}

ostream& operator<<(ostream& os,const User user){
    os<<
    "İsim: "<<user.Name<<endl<<
    "Soyisim: "<<user.Surname<<endl<<
    "ID: "<<user.ID<<endl<<
    "Age: "<<user.Age<<endl<<
    "Weight: "<<user.Weight<<endl<<
    "Week Of Year: "<<user.WeekOfYear<<endl<<endl<<
    "***Meals***"<<endl<<
    *(user.BreakPtr)<<endl<<*(user.LunchPtr)<<endl<<*(user.DinnerPtr)<<endl<<endl<<
    "***Sports***"<<endl<<
    *(user.BasketPtr)<<endl<<*(user.FootPtr)<<endl<<*(user.TennisPtr)<<endl<<*(user.Swimptr);
    return os;
}

User operator+(User& usr1,User& usr2){
    User* usr3 = new User;
    usr3->Name          = usr1.Name + usr2.Name;
    usr3->Surname       = usr1.Surname + usr2.Surname;
    usr3->Age           = usr1.Age + usr2.Age;
    usr3->Weight        = usr1.Weight + usr2.Weight;
    usr3->WeekOfYear    = usr1.WeekOfYear + usr2.WeekOfYear;

    *(usr3->BasketPtr)  = *(usr1.BasketPtr) + *(usr2.BasketPtr);
    *(usr3->FootPtr)    = *(usr1.FootPtr) + *(usr2.FootPtr);
    *(usr3->TennisPtr)  = *(usr1.TennisPtr) + *(usr2.TennisPtr);
    *(usr3->Swimptr)    = *(usr1.Swimptr) + *(usr2.Swimptr);

    *(usr3->BreakPtr)   = *(usr1.BreakPtr) + *(usr2.BreakPtr);
    *(usr3->LunchPtr)   = *(usr1.LunchPtr) + *(usr2.LunchPtr);
    *(usr3->DinnerPtr)  = *(usr1.DinnerPtr) + *(usr2.DinnerPtr);
    return *usr3;
}

User& createUser(){
    string name,surname;
    int id, age, weight, year;
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
    User* tmp = new User(name,surname,id,age,weight,year);
    return *tmp;
}

void User::VeriGir(){
    string name,surname;
    int id, age, weight, year;
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
    BreakPtr->SetCalori(0);
    LunchPtr->SetCalori(0);
    DinnerPtr->SetCalori(0);
    
    Name = name;
    Surname = surname;
    ID = id;
    Age = age;
    Weight = weight;
    WeekOfYear = year;
}

