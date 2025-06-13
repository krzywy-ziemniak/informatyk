#include <iostream>
using namespace std;
 
int main() {
    int liczba1, liczba2;
    char znak;
 
    cout << "Podaj pierwsza liczbe: ";
    cin >> liczba1;
 
    cout << "Podaj druga liczbe: ";
    cin >> liczba2;
 
    cout << "Podaj znak dzialania (+, -, *, /): ";
    cin >> znak;
 
    switch (znak) {
        case '+':
            cout << "Wynik: " << liczba1 + liczba2 << endl;
            break;
        case '-':
            cout << "Wynik: " << liczba1 - liczba2 << endl;
            break;
        case '*':
            cout << "Wynik: " << liczba1 * liczba2 << endl;
            break;
        case '/':
            if (liczba2 != 0) {
                cout << "Wynik: " << liczba1 / liczba2 << endl;
            } else {
                cout << "Blad: dzielenie przez zero!" << endl;
            }
            break;
        default:
            cout << "Blad: nieznany znak dzialania!" << endl;
    }
 
    return 0;
}
