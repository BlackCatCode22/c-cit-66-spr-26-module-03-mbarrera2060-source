#include <iostream>
using namespace std;
int main() {

    int a = 10;
    int *p = &a;
    cout << " Pointer Basics " << endl;
    cout << " Address stored in p: " << p << endl;
    cout << " Value of a using p: " << *p << endl;
    *p = 20;
    cout << " New value of a after modification: " << a << endl;

    int arr[5] = {1, 2, 3, 4, 5};
    p = arr;
    cout << " Pointer Arithmetic " << endl;
    cout << " Addresses of array elements: " << endl;
    for (int i = 0; i < 5; ++i) {
        cout << " Address of arr[" << i << "]: " << (p + i) << endl;
    }
    cout << " Values of array elements: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << " Value of arr[" << i << "]: " << *p << endl;
        p++;
    }
    return 0;
}