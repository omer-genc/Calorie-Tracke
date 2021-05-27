#include "Meals.h"

int main(){
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
    return 0;
}