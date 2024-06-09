#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int num , firstDigit;
    cin >> num;
    //we have to add first and last digit 
    int lastDigit = num % 10;
    while ( num != 0){
        firstDigit = num % 10;
        num = num / 10;   
    }
    int sum  = lastDigit + firstDigit;
    cout<<sum;
        
    return 0;
}
