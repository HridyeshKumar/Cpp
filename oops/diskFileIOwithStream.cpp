#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Writing to a file
    ofstream outFile("output.txt");
    outFile << "Hello, file!" << endl;
    outFile.close();

    // Reading from a file
    ifstream inFile("output.txt");
    string content;
    while (getline(inFile, content)) {
        cout << content << endl;
    }
    inFile.close();

    return 0;
}
