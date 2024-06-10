#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int unitsConsumed , amount;
    cin >> unitsConsumed;
    
    if(unitsConsumed <= 200){
        amount  = unitsConsumed / 2;
    }
    else if(unitsConsumed <= 400 ){
        amount  = (unitsConsumed * 0.65) + 100;
    }
    else if(unitsConsumed <=600){
        amount = (unitsConsumed * 0.80) + 200;
    }
    else {
        amount = (unitsConsumed * 1.25) + 425;
    }
    cout <<"Rs."<<amount;
    return 0;
}
