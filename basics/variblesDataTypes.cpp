#include <iostream>
using namespace std;

int main() {
    // Variable Declarations
    int age = 19;
    char grade = 'A'; // Lowercase variable names are standard in C++
    float cgpa = 9.27;
    bool isStudent = true; //true --> 1 & false --> 0
    double fee = 100000.00;

    // Output Statements
    cout << sizeof(age) << " Bytes\n";
    cout << grade << endl; // '\n' is faster than 'endl' because it skips flushing the buffer
    cout << "Durga Darsan Mannem\nI am " << age << " Years old\n";
    cout << "This is my first C++\nProgram.\n"; 
    cout << "CGPA: " << cgpa << "\n";
    cout << "Student Status (1 for active): " << isStudent << "\n"; // Prints as 1 or 0
    cout << "Tuition Fee: $" << fee << "\n";

    return 0;
}
