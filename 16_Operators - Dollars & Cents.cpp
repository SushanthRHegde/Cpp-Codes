#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int dollar1 ,cent1 , dollar2, cent2;
    cin >> dollar1;
    cin >> cent1;
    cin >> dollar2;
    cin >> cent2;
    
    // Given : 1 dollar = 100 cent 
    // Sum of Dollar = add 2 dollar value + if cents = 100 then it will be 1 dollar 
    // Cent  = remainder of two cents
    int sumCent = (cent1 + cent2 ) % 100;
    int carryCent = (cent1 + cent2 ) / 100;
    int sumDollar  = dollar1 + dollar2 + carryCent;
    cout << sumDollar <<endl;
    cout << sumCent <<endl;
    return 0;
}
