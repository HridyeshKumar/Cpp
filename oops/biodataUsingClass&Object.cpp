#include <iostream>
using namespace std;
class Student {
private:
    char name[30];
    int rollNo;
    int total;
    float perc;

public:
    // Member function to get student's details
    void getDetails() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> rollNo;
        cout << "Enter total marks out of 500: ";
        cin >> total;
        perc = static_cast<float>(total) / 500 * 100;
    }

    // Member function to print student's details
    void putDetails() {
        cout << "Student details:\n";
        cout << "Name: " << name << ", Roll Number: " << rollNo;
        cout << ", Total: " << total << ", Percentage: " << perc << endl;
    }
};

int main() {
    Student std; // Create an object of the Student class
    std.getDetails();
    std.putDetails();
    return 0;
}
