#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int a , b , c;
    cin>> a;
    cin>> b;
    cin>> c;
    
    int profit = (a*b) - (a*c) - 100;
    cout<<profit;
    return 0;
}
