#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {
    int month , rent , days ;
    float  payment , high = 0 , totalAmount = 0;
    cin >> month >> rent >> days ;
    //if month and days are in invalid range 
    if(month < 1 || month > 12 || days < 1 || days > 31){
        cout<<"Invalid Input";
    }
    else{
        // 20% more if they took hotel in respective months
        if(month == 4 ||month == 5 ||month == 6 || month == 11 ||month == 12 ){
            high = 20;
    }
    payment = ( days * rent );
    totalAmount = payment + (payment * high)/100;
    cout << fixed <<setprecision(0) <<totalAmount;
}
    return 0;
}
