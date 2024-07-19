#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file("example.txt", ios::in | ios::out | ios::trunc);
    file << "Hello, World!" << endl;

    // Move the read pointer to the beginning of the file
    file.seekg(0);

    string content;
    file >> content;
    cout << content << endl;

    file.close();
    return 0;
}
