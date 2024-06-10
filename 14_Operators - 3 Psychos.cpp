#include <cmath>
#include <cstdio>
#include <iomanip>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int x1, x2 , y1 , y2;
    float x , y;
    cin>> x1;
    cin>> y1;
    cin>> x2;
    cin>> y2;
    
    //To find the midpoint of the cordinates 
    x = (x1 + x2 )/2.0;
    y = (y1 + y2 )/2.0; 
    
    cout<< fixed << setprecision(1);
    cout <<"Arun's house is located at("<<x<<","<<y<<")"<<endl;
    return 0;
}
