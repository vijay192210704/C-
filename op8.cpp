#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << (a > b ? a : b) << " is greater." << endl;
    return 0;
}

