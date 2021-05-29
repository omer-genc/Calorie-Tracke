#include "Sports.h"
#include "Meals.h"

class User{
    friend ostream& operator<<(ostream& os,const User);
    public:
        User();
        User(string name, string surname, int id, int age, int weight, int year);
        User(const User&);
        User& operator=(const User&);

        string GetName();
        string GetSurname();
        int GetID();
        int GetAge();
        int GetWeight();

        void SetName(string);
        void SetSurname(string);
        void SetId(int);
        void SetAge(int);
        void SetWeight(int);

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