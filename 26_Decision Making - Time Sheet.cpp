
#include <iostream>

using namespace std;

int main() {
    int hours[7];
    for(int i = 0; i < 7; i++) {
        cin >> hours[i];
    }

    int salary = 0;

    // Sunday
    salary += hours[0] * 150;

    // Monday to Friday
    for(int i = 1; i <= 5; i++) {
        if (hours[i] <= 8) {
            salary += hours[i] * 100;
        } else {
            salary += (8 * 100) + ((hours[i] - 8) * 115);
        }
    }

    // Saturday
    salary += hours[6] * 125;

    cout << salary << endl;

    return 0;
}
