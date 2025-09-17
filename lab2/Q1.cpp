#include <iostream>
using namespace std;

void swapvalues(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main() {
    int a, b;
    cout << "Enter ptr1: ";
    cin >> a;
    cout << "Enter ptr2: ";
    cin >> b;

    swapvalues(&a, &b);

    cout << "ptr1: " << a << endl;
    cout << "ptr2: " << b << endl;

    return 0;
}

