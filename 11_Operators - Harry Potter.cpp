#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int num , firstDigit , lastDigit;
    cin >> num;
    num = abs(num); //non - negative

    lastDigit = num % 10;
    firstDigit = num / 1000;
    
    //we have to add first and last digit 
    int sum  = lastDigit + firstDigit;
    cout<<sum <<endl;
        
    return 0;
}
