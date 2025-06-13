#include <iostream>
#include <cstdlib>
#include <ctime>
 
using namespace std;
 
void LosujTablice(int* tab, int rozmiar) {
    for (int i = 0; i < rozmiar; ++i) {
        tab[i] = rand() % 51;  // liczby z przedziału 0–50
    }
}
 
bool SprawdzLiczbe(int* liczba, int* tab, int rozmiar) {
    for (int i = 0; i < rozmiar; ++i) {
        if (*liczba == tab[i]) {
            return true;
        }
    }
    return false;
}
 
int main() {
    const int ROZMIAR = 10;
    int tablica[ROZMIAR];
    int proba = 0;
    int liczba;
 
    srand(time(0));
    LosujTablice(tablica, ROZMIAR);
 
    cout << "Wylosowana tablica: ";
    for (int i = 0; i < ROZMIAR; ++i) {
        cout << tablica[i] << " ";
    }
    cout << endl;
 
    do {
        cout << "Podaj liczbe: ";
        cin >> liczba;
        proba++;
    } while (!SprawdzLiczbe(&liczba, tablica, ROZMIAR));
 
    cout << "Zgadles za " << proba << " razem!" << endl;
 
    return 0;
}