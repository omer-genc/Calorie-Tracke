#include "User.h"

User::User(){
    Name = "Name";
    Surname = "Surname";
    ID = 0;
    Age = 0;
    Weight = 0;
    WeekOfYear = 0;
    Bilgi = "NULL";

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
    Bilgi = "NULL";

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
    Bilgi = user.Bilgi;

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
    Bilgi = user.Bilgi;

    BasketPtr   = user.BasketPtr;
    FootPtr     = user.FootPtr;
    TennisPtr   = user.TennisPtr;
    Swimptr     = user.Swimptr;

    BreakPtr    = user.BreakPtr;
    LunchPtr    = user.LunchPtr;
    DinnerPtr   = user.DinnerPtr;

    return *this;
}

string User::GetName(){return Name;}
string User::GetSurname(){return Surname;}
int User::GetID(){return ID;}
int User::GetAge(){return Age;}
int User::GetWeight(){return Weight;}

ostream& operator<<(ostream& os,const User user){
    os<<
    "İsim: "<<user.Name<<endl<<
    "Soyisim: "<<user.Surname<<endl<<
    "ID: "<<user.ID<<endl<<
    "Age: "<<user.Age<<endl<<
    "Weight: "<<user.Weight<<endl<<
    "Week Of Year: "<<user.WeekOfYear<<endl;

    return os;
}