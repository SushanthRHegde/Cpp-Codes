#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int totalGold, benPercentage , blackbeardPercentage;
    cin >> totalGold >> benPercentage >> blackbeardPercentage;
    
    int benShare = ( totalGold * benPercentage) / 100;
    int leftover = totalGold - benShare;
    int blackbeardShare = (leftover * blackbeardPercentage) /100;
    
    int remaining = totalGold - benShare - blackbeardShare;
    int pirateShare =  remaining  / 3;
    
    cout << benShare <<endl;
    cout << blackbeardShare <<endl;
    cout << pirateShare <<endl;
    
    
    return 0;
}
