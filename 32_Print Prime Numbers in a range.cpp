#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isPrime(int n){
    for(int i = 2; i <= n/2 ; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n ;
    int arr[n], j = 0;
    for(int i = 2; i<= n ;i++){
        if(isPrime(i)){
            arr[j++] = i;
        }
    }
    for(int k = 0; k < j;k++){
        cout << arr[k] <<" ";
    }
    return 0;
}
