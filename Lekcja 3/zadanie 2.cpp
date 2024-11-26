#include <iostream>
using namespace std;
 
int main() {
    double celsius, result;
    char choice;
 
    cout << "Podaj temperature w stopniach Celsjusza: ";
    cin >> celsius;
 
    cout << "Wybierz jednostke docelowa (K - Kelvin, F - Fahrenheit): ";
    cin >> choice;
 
    switch (choice) {
        case 'K':
        case 'k':
            result = celsius + 273.15;
            cout << "Temperatura w stopniach Kelvina: " << result << endl;
            break;
 
        case 'F':
        case 'f':
            result = (celsius * 9/5) + 32;
            cout << "Temperatura w stopniach Fahrenheita: " << result << endl;
            break;
 
        default: 
            cout << "Nieprawidlowa opcja! Sprobuj ponownie." << endl;
            break;
    }
 
    return 0;
}