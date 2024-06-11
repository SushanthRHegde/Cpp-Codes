#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int totalBalls, totalRuns, runsScored, ballsBowled;
    cin >> totalBalls >> totalRuns >> runsScored >> ballsBowled;
    
    float overs = totalBalls / 6.0;
    
    int completedOvers = ballsBowled / 6;
    int remainingBalls = ballsBowled % 6;
    float finishedOvers = completedOvers + (remainingBalls / 10.0);
    
    float runRate = runsScored / finishedOvers;
    float reqRate = totalRuns / overs;
    
    cout << fixed << setprecision(1);
    cout << (int)overs << endl;
    cout << finishedOvers << endl;
    cout << runRate << endl;
    cout << reqRate << endl;
    
    if (runRate > reqRate) {
        cout << "Eligible to Win";
    } else {
        cout << "Not Eligible to Win";
    }
    
    return 0;
}
