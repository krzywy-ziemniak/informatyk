#include <iostream>
 
using namespace std;
 
int main() {
    int godziny;
    char pojazd;
    
    cout << "Podaj liczbe godzin parkowania: ";
    cin >> godziny;
    
    cout << "Podaj rodzaj pojazdu (S - samochod, M - motocykl, A - autobus): ";
    cin >> pojazd;
    
    int oplata = 0;
 
    switch (toupper(pojazd)) {
        case 'S':
            oplata = godziny * 5;
            break;
        case 'M':
            oplata = godziny * 2;
            break;
        case 'A':
            oplata = godziny * 10;
            break;
        default:
            cout << "Blad: Niepoprawny typ pojazdu." << endl;
            return 1;
    }
 
    cout << "Oplata za parkowanie: " << oplata << " zl" << endl;
    
    return 0;
}
