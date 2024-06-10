#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int fkPrice ,fkDiscount , fkService , sdPrice , sdDiscount , sdService , amazonPrice , amazonDiscount , amazonService;
    cin>> fkPrice;
    cin>>fkDiscount;
    cin>>fkService;
    
    cin>>sdPrice;
    cin>>sdDiscount;
    cin>>sdService;
    
    cin>>amazonPrice;
    cin>>amazonDiscount;
    cin>>amazonService;
    
    int netFk = fkPrice - ((fkPrice *fkDiscount) /100) + fkService;
    int netSd = sdPrice - ((sdPrice * sdDiscount) / 100) + sdService;
    int netAz = amazonPrice - ((amazonPrice * amazonDiscount) / 100 ) + amazonService;
    
    
    cout << "In Flipkart: Rs."<< netFk <<endl;
    cout << "In Snapdeal: Rs."<< netSd <<endl;
    cout << "In Amazon: Rs."<< netAz <<endl;
    
    if(netFk <= netSd &&  netFk <= netAz){
        cout<<"Choose Flipkart";
    }
    else if(netSd <= netFk && netSd <= netAz){
        cout << "Choose Snapdeal";
    }
    else{
        cout << "Choose Amazon";
    }
    
    
    
    return 0;
}
