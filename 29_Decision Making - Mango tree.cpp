#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int row , col , pos ;
    cin >> row >> col >> pos;
    if((pos<=col || pos%col==1 || pos%col==0) && (pos<=row || pos%row==0 || pos%row==1)){
        cout <<"Yes";
    }
    else{
        cout <<"No";
    }
    return 0;
}
