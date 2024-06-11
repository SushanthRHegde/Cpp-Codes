#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isLeapyear(int year){
    if((year % 4 == 0 && year % 100 != 0)|| year % 400 == 0 ){
        return true;
    }
    return false;
}
int main() {
    int year , month , days ;
    cin >> year >> month;
    if(year < 1900 || year > 9999 || month < 1|| month > 31  ){
        cout <<"0";
    }
    else{
        if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
            days = 31;
        }
        else if( month == 4 || month == 6 || month == 9 || month == 11){
            days = 30;
        }
        else{
            if(isLeapyear(year)){
                days = 29;
            }
            else{
                days = 28;
            }
        }
        cout << days <<" Days ";
    }
    return 0;
}
