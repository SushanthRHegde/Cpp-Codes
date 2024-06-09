#include <iostream>
#include <iomanip> //for setprecision and fixed
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
    
    // Output the details of the student
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << fixed << setprecision(2); // Setting the precision to 2 decimal places
    cout << "CGPA: " << cgpa << endl;
    cout << "Grade: " << grade << endl;
    
    return 0;
}
