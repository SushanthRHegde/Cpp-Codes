#include <iostream>
#include <iomanip>
#include <cmath> // For the round function
using namespace std;

int main() {
    // Variable declarations
    string name;
    int age;
    float cgpa;
    char grade;
    
    // Input from the user
    cin >> name;
    cin >> age;
    cin >> cgpa;
    cin >> grade;
    
    // Round the CGPA to 2 decimal places
     cgpa = floor(cgpa * 100) / 100;

    // Output the details of the student
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << fixed << setprecision(2); // Setting the precision to 2 decimal places
    cout << "CGPA: " << cgpa << endl;
    cout << "Grade: " << grade << endl;
    
    return 0;
}
