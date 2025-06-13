#include <iostream>
using namespace std;
 
int main() {
    int a = 5;
    int b = 10;
 
    cout << "Przed modyfikacj¹:\n";
    cout << "a = " << a << "\n";
    cout << "b = " << b << "\n";
 
    a = 15;
    b = 20;
 
    cout << "\nPo modyfikacji:\n";
    cout << "a = " << a << "\n";
    cout << "b = " << b << "\n";
 
    return 0;
}