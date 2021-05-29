#include "User.h"

User::User(){
    Name = "Name";
    Surname = "Surname";
    ID = 0;
    Age = 0;
    Weight = 0;
    WeekOfYear = 0;
    Day = 0;


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
    Day = 1;


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
    WeekOfYear = user.WeekOfYear;;
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
    delete[]  BasketPtr,FootPtr,TennisPtr,Swimptr,BreakPtr,LunchPtr,DinnerPtr;
    cout<<endl<<this<<" User Deleted";
}

string User::GetName(){return Name;}
string User::GetSurname(){return Surname;}
int User::GetID(){return ID;}
int User::GetAge(){return Age;}
int User::GetWeight(){return Weight;}

void User::SetName(string name){Name = name;}
void User::SetSurname(string surname){Surname = surname;}
void User::SetId(int id){ID = id;}
void User::SetAge(int age){Age = age;}
void User::SetWeight(int weight){Weight = weight;}

void User::DoSports(){
    int secim;
    bool dongu = true;
    int minute;
    cout<<"Hangi sporu yaptın:"<<endl<<
    "1 Basketbol"<<endl<<"2 Futbol"<<endl<<
    "3 Tenis"<<endl<<"4 Yüzme"<<endl;
    cout<<"Spor süresi (dk): ";
    cin>>minute;

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

    cout<<"Öğünler"<<endl<< "1 Breakfast"<<endl
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

