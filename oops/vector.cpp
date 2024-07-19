#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
