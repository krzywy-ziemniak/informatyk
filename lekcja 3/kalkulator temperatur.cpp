#include <iostream>
using namespace std;
 
int main() {
    float tempC;
    char jednostka;
 
    cout << "Podaj temperature w stopniach Celsjusza: ";
    cin >> tempC;
 
    cout << "Wybierz jednostke docelowa (K - Kelwin, F - Fahrenheit): ";
    cin >> jednostka;
 
    switch (jednostka) {
        case 'K':
        case 'k':
            cout << "Temperatura w Kelvinach: " << tempC + 273.15 << " K" << endl;
            break;
        case 'F':
        case 'f':
            cout << "Temperatura w Fahrenheitach: " << (tempC * 9/5) + 32 << " F" << endl;
            break;
        default:
            cout << "Blad: nieznana jednostka!" << endl;
    }
 
    return 0;
}
