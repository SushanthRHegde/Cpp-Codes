#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int x , y , hop;
    cin>> x;
    cin>> y;
    //To find the no. of hops --> Euclidean Distance Formula
    hop = sqrt(pow(x - 3, 2)+ pow(y - 4,2));
    cout<<hop;
    return 0;
}
