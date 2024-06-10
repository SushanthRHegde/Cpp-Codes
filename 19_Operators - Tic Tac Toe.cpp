#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int number ;
    cin >> number ;
    int count = 0;
    int rowIndex = -1 , colIndex = -1;
    // c3 x 3 matrix --> Tic tac Toe 
    //if met the that index number --> then print its rowIndex & columnIndex
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0; j < 3 ; j++){
            count++;
            if(count == number){
                rowIndex = i;
                colIndex = j;
                break;
            }
        }
    }
    cout << rowIndex<<" "<<colIndex;
    return 0;
}
