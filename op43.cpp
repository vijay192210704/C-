#include <iostream>
using namespace std;
int main() {
    int size;
    cout << "Enter the size of the dynamic array: ";
    cin >> size;
    int *arr = new int[size];
    cout << "Enter " << size << " values for the array: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
    cout << "Values of the dynamic array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    delete[] arr;
    return 0;
}

