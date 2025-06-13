#include <iostream>
using namespace std;

int main() {
    char tekst[21];
    char znak;
    int licznik = 0;
    int pozycje[21];
    
    cout << "Podaj ci�g znak�w (max 20 znak�w): ";
    cin.getline(tekst, 21);
    
    cout << "Podaj znak do zliczenia: ";
    cin >> znak;
    
    for (int i = 0; tekst[i] != '\0'; i++) {
        if (tekst[i] == znak) {
            pozycje[licznik] = i + 1;
            licznik++;
        }
    }
    
    cout << "Liczba wyst�pie� znaku '" << znak << "': " << licznik << endl;
    
    if (licznik > 0) {
        cout << "Pozycje wyst�pie�: ";
        for (int i = 0; i < licznik; i++) {
            cout << pozycje[i];
            if (i < licznik - 1) cout << ", ";
        }
        cout << endl;
    }
    
    return 0;
}
