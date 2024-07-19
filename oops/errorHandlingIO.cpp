#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("example.txt");

    if (!file.is_open()) {
        cerr << "Error opening file" << endl;
        return 1;
    }

    char c;
    while (file.get(c)) {
        cout << c;
    }

    if (file.eof()) {
        cout << "End of file reached" << endl;
    } else if (file.fail()) {
        cout << "Logical error on I/O operation" << endl;
    } else if (file.bad()) {
        cout << "Read/write error on I/O operation" << endl;
    }

    file.close();
    return 0;
}
