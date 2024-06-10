#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    char ch;
    cin >> ch;
    if(!((ch <= 'Z' && ch >= 'A' )||(ch <= 'z' && ch >= 'a')) ){
        cout << "Not an alphabet";
    }
    else if( ch == 'a' || ch == 'e' ||ch == 'i' ||ch == 'o' ||ch == 'u' ){
        cout << "Vowel";
    }
    else{
        cout << "Consonant";
    }
    return 0;
}
