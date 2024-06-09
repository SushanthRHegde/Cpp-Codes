#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int totalFriends , teams;
    cin>> totalFriends;
    cin>> teams;
    int numFriends = totalFriends / teams;
    int leftOut = totalFriends % teams;
    cout<<"The number of friends in each team is "<<numFriends<<" and left out is "<<leftOut<<endl;
    return 0;
}
