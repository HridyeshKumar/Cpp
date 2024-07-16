#include <iostream>
#include <fstream>
using namespace std;

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    Student s[5];

    cout << "Enter information of students:\n";
    for (int i = 0; i < 5; ++i) {
        s[i].roll = i + 1;
        cout << "For roll number " << s[i].roll << ",\n";
        cout << "Enter name: ";
        cin >> s[i].name;
        cout << "Enter marks: ";
        cin >> s[i].marks;
        cout << endl;
    }

    cout << "Displaying Information:\n";
    for (int i = 0; i < 5; ++i) {
        cout << "\nRoll number: " << i + 1 << endl;
        cout << "Name: " << s[i].name << endl;
        cout << "Marks: " << s[i].marks << endl;
    }

    // Store data in a file (optional)
    ofstream outFile("student_records.txt");
    if (outFile.is_open()) {
        for (int i = 0; i < 5; ++i) {
            outFile << "Roll number: " << i + 1 << endl;
            outFile << "Name: " << s[i].name << endl;
            outFile << "Marks: " << s[i].marks << endl;
            outFile << endl;
        }
        outFile.close();
        cout << "\nData saved to student_records.txt\n";
    } else {
        cout << "\nError opening file for writing.\n";
    }

    return 0;
}
