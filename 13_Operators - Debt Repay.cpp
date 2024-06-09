#include <cmath>
#include <cstdio>
#include <vector>
#include <iomanip>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    float pAmount , rate , year;
    cin >> pAmount;
    cin >> rate;
    cin >> year ;
    float interest = (pAmount * rate * year) / 100.00;
    float amount = pAmount + interest  ;
    float discount = (interest * 2)/100.00;
    float finalAmount = amount - discount;
    
    cout <<fixed <<setprecision(2);
    cout << interest << endl;
    cout << amount << endl;
    cout << discount << endl;
    cout << finalAmount << endl;
    return 0;
}
