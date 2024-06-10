#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int number , mid = 0;
    cin >> number;
    mid  = (number % 100);
    mid = mid / 10;
    if(number >= 100 && number <= 999 ){
        if(mid % 3 == 0){
            cout <<"Trendy Number";
        }
        else{
            cout << "Not a Trendy Number";
        }
    }
    else{
        cout << "Invalid Number";
    }

    return 0;
}
