#ifndef SPORTS_H_
#define SPORTS_H_
#include<iostream>
using namespace std;

class Basketball{
    friend ostream& operator <<(ostream&, const Basketball);
    public:
        Basketball();
        Basketball(int minute);
        Basketball(const Basketball&);
        Basketball& operator=(const Basketball&);
        int GetBurn();
        int GetMinute();
        int GetCount();
        void SetCount(int);
        void SetMinute(int);
        
    private:
        int count = 0;
        int Minute = 0;
        const int Kcal = 6;
};

ostream& operator<<(ostream&,const Basketball);
Basketball operator+(Basketball&,Basketball&);

class Football{
    friend ostream& operator <<(ostream&, const Football);
    public:
        Football();
        Football(int minute);
        Football(const Football&);
        Football& operator=(const Football&);
        int GetBurn();
        int GetMinute();
        int GetCount();
        void SetCount(int);
        void SetMinute(int);
        
    private:
        int count = 0;
        int Minute = 0;
        const int Kcal = 5;
};

ostream& operator<<(ostream&,const Football);
Football operator+(Football&,Football&);

class Tennis{
    friend ostream& operator <<(ostream&, const Tennis);
    public:
        Tennis();
        Tennis(int minute);
        Tennis(const Tennis&);
        Tennis& operator=(const Tennis&);
        int GetBurn();
        int GetMinute();
        int GetCount();
        void SetCount(int);
        void SetMinute(int);
        
    private:
        int count = 0;
        int Minute = 0;
        const int Kcal = 5;
};

ostream& operator<<(ostream&,const Tennis);
Tennis operator+(Tennis&,Tennis&);

class Swimming{
    friend ostream& operator <<(ostream&, const Swimming);
    public:
        Swimming();
        Swimming(int minute);
        Swimming(const Swimming&);
        Swimming& operator=(const Swimming&);
        int GetBurn();
        int GetMinute();
        int GetCount();
        void SetCount(int);
        void SetMinute(int);
        
    private:
        int count = 0;
        int Minute = 0;
        const int Kcal = 7;
};

ostream& operator<<(ostream&,const Swimming);
Swimming operator+(Swimming&,Swimming&);

//test
void basketballTest();
void footballTest();
void tennisTest();
void swimmingTest();

#endif