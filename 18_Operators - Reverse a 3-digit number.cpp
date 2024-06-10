#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
 
    int num , rev = 0 , digit = 0 ;
    cin >> num ;
    
    while( num != 0){
        digit = num % 10;
        rev  = (rev*10) + digit ;
        num /= 10;
    }
    cout<<rev;
    return 0;
}
