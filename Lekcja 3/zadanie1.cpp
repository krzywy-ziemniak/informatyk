#include <iostream>
using namespace std;
 
int main() {
    int liczba1, liczba2;
    char znak;
 
    // Wczytanie danych od użytkownika
    cout << "Podaj pierwsza liczbe: ";
    cin >> liczba1;
 
    cout << "Podaj druga liczbe: ";
    cin >> liczba2;
 
    cout << "Podaj znak dzialania (+, -, *, /): ";
    cin >> znak;
 
    // Wykonanie odpowiedniej operacji
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
                cout << "Blad: Dzielenie przez zero!" << endl;
            }
            break;
        default:
            cout << "Blad: Nieznany znak dzialania!" << endl;
    }
 
    return 0;
}