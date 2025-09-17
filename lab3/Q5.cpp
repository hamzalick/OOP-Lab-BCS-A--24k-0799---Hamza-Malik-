#include <iostream>
using namespace std;

class Concrete {
private:
    string message;
public:
    Concrete(string msg) {
        message = msg;
    }
    void displayMessage() {
        cout << message << endl;
    }
};

int main() {
    Concrete obj("Hello world");
    obj.displayMessage();
    return 0;
}
