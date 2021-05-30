#include "Sports.h"
#include "Meals.h"

class User{
    friend ostream& operator<<(ostream& os,const User);
    friend User operator+(User&,User&);
    public:
        User();
        User(string name, string surname, int id, int age, int weight, int year);
        User(const User& user);
        User& operator=(const User&);
        void VeriGir();
        ~User();
        

        string GetName();
        string GetSurname();
        int GetID();
        int GetAge();
        int GetWeight();
        int GetWeekOfYear();
        int GetDay();

        void SetName(string);
        void SetSurname(string);
        void SetId(int);
        void SetAge(int);
        void SetWeight(int);
        void SetWeekOfYear(int);
        void SetDay(int);

        void DoSports();
        void EatMeal();
        void StartDay();

        int CaloriesTaken();
        int CaloriesBurned();


    private:
        string Name;
        string Surname;
        int ID;
        int Age;
        int Weight;
        int WeekOfYear;
        int Day;

        Basketball* BasketPtr;
        Football*   FootPtr;
        Tennis*     TennisPtr;
        Swimming*   Swimptr;

        Breakfast*  BreakPtr;
        Lunch*      LunchPtr;
        Dinner*     DinnerPtr;
  

};

ostream& operator<<(ostream& os,const User);
User operator+(User&,User&);

void UserMode(User* usr1,User* usr2,User* usr3);



