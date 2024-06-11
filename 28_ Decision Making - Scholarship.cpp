#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int age , year , income , standing ;
    float marksPercentage  , attendencePercentage;
    cin>> age >> year >> income >> standing >> marksPercentage >> attendencePercentage;
    
    if( year >= 2021 && standing <=2 && income <= 200000 && ( age >= 18 && age < 21 ) && marksPercentage >= 60 &&                 attendencePercentage >=80  ){
        cout <<"Eligible";
    }
    else if( year >= 2021 && standing > 2 && income <= 250000 && ( age >= 18 && age < 21 ) && marksPercentage >= 80 &&                 attendencePercentage >=90 ) {
        cout <<"Partially Eligible";
    }
    else{
        cout <<"Not Eligible";
    }
    return 0;
}
