#include <iostream>
using namespace std;

int main() {
    int size1, size2;
    cout << "Enter length of first string: ";
    cin >> size1;
    cout << "Enter length of second string: ";
    cin >> size2;

    char *str1 = new char[size1 + 1];
    char *str2 = new char[size2 + 1];

    cout << "Enter first string: ";
    cin.ignore();
    cin.getline(str1, size1 + 1);

    cout << "Enter second string: ";
    cin.getline(str2, size2 + 1);

    char *result = new char[size1 + size2 + 1];

    int i = 0, j = 0;
    while (str1[i] != '\0') {
        result[i] = str1[i];
        i++;
    }
    while (str2[j] != '\0') {
        result[i] = str2[j];
        i++;
        j++;
    }
    result[i] = '\0';

    cout << "First string: " << str1 << endl;
    cout << "Second string: " << str2 << endl;
    cout << "Concatenated string: " << result << endl;

    delete[] str1;
    delete[] str2;
    delete[] result;

    return 0;
}
