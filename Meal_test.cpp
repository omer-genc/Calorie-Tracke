#include "Meals.h"

int main(){
    cout<<"Breakfast test"<<endl;
    Breakfast br1;
    cout<<br1;
    Breakfast br2(10,10);
    cout<<br2;
    Breakfast br3(br2);
    cout<<br3;
    br3 = br1;
    cout<<br3;
    Breakfast br4(20,20);
    br3 = br4 + br2;
    cout<<br3;
    br3.Eat();
    cout<<br3;
    cout<<endl<<endl;

    cout<<"Lunch test"<<endl;
    Lunch ln1;
    cout<<ln1;
    Lunch ln2(10,10);
    cout<<ln2;
    Lunch ln3(ln2);
    cout<<ln3;
    ln3 = ln1;
    cout<<ln3;
    Lunch ln4(20,20);
    ln3 = ln4 + ln2;
    cout<<ln3;
    cout<<endl<<endl;

    cout<<"Dinner test"<<endl;
    Dinner dn1;
    cout<<dn1;
    Dinner dn2(10,10);
    cout<<dn2;
    Dinner dn3(dn2);
    cout<<dn3;
    dn3 = dn1;
    cout<<dn3;
    Dinner dn4(20,20);
    dn3 = dn4 + dn2;
    cout<<dn3;
    cout<<endl<<endl;
    return 0;
}