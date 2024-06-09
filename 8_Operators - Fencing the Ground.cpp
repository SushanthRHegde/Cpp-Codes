#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int length , breadth;
    cin >> length;
    cin >> breadth;
    int area = length * breadth;
    int perimeter = 2*(length + breadth);
    
    cout <<"The required length is "<<perimeter<<" m"<<endl;
    cout<<"The required area of carpet is "<<area<<" sqm"<<endl;
    return 0;
}
