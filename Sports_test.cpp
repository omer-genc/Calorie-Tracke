#include "Sports.h"

int main(){
    //Basketball
    Basketball bs1;
    cout<<bs1;
    Basketball bs2(10);
    cout<<bs2;
    Basketball bs3(bs2);
    Basketball bs4;
    bs4 = bs3 + bs2;
    cout<<bs4;
    bs4.SetMinute(50);
    cout<<bs4<<endl<<endl;

    //Football
    Football fb1;
    cout<<fb1;
    Football fb2(10);
    cout<<fb2;
    Football fb3(fb2);
    Football fb4;
    fb4 = fb3 + fb2;
    cout<<fb4;
    fb4.SetMinute(50);
    cout<<fb4<<endl<<endl;

    //Tennis
    Tennis tn1;
    cout<<tn1;
    Tennis tn2(10);
    cout<<tn2;
    Tennis tn3(tn2);
    Tennis tn4;
    tn4 = tn3 + tn2;
    cout<<tn4;
    tn4.SetMinute(50);
    cout<<tn4<<endl<<endl;

    //Swimming
    Swimming sw1;
    cout<<sw1;
    Swimming sw2(10);
    cout<<sw2;
    Swimming sw3(sw2);
    Swimming sw4;
    sw4 = sw3 + sw2;
    cout<<sw4;
    sw4.SetMinute(50);
    cout<<sw4<<endl<<endl;
    
    return 0;
}