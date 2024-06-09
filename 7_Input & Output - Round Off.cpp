#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    //Entering the floot value 
    float num;
    cin >> num;
    cout<<static_cast<int>(num)<<endl; //integer value
    cout<<ceil(num)<<endl; //using ceil for rounded up value
    cout<<floor(num)<<endl; //using floor for rounded down value
    return 0;
}
