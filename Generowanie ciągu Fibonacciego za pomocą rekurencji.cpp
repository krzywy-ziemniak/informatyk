#include <iostream>
using namespace std;
 
int GetNumberFromUser() {
    int n;
    cin >> n;
    return n;
}
 
int GetFibonacciRecursive(int index) {
    if (index == 0 || index == 1)
        return 1;
    return GetFibonacciRecursive(index - 1) + GetFibonacciRecursive(index - 2);
}
 
void DisplayFibonacciSequence(int count) {
    cout << "Ci¹g Fibonacciego: ";
    for (int i = 0; i < count; i++) {
        cout << GetFibonacciRecursive(i);
        if (i != count - 1)
            cout << ", ";
    }
    cout << endl;
}
 
int main() {
    int number = GetNumberFromUser();
    cout << "Podaj liczbê elementów: " << number << endl;
    DisplayFibonacciSequence(number);
    return 0;
}