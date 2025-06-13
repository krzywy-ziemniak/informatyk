#include <iostream>
using namespace std;
 
int ObliczSume(int* tablica, int rozmiar) {
    int suma = 0;
    for (int i = 0; i < rozmiar; i++) {
        suma += *(tablica + i);
    }
    return suma;
}
 
int main() {
    const int ROZMIAR = 5;
    int tablica[ROZMIAR] = {10, 20, 5, 15, 0};
 
    cout << "Suma elementow tablicy: " << ObliczSume(tablica, ROZMIAR) << endl;
 
    for (int i = 0; i < 3; i++) {
        int indeks, nowaWartosc;
        cout << "Podaj nowa wartosc dla elementu nr " << i << ": ";
        cin >> nowaWartosc;
        *(tablica + i) = nowaWartosc;
    }
 
    cout << "Nowa tablica: ";
    for (int i = 0; i < ROZMIAR; i++) {
        cout << *(tablica + i) << " ";
    }
    cout << endl;
 
    cout << "Nowa suma elementow tablicy: " << ObliczSume(tablica, ROZMIAR) << endl;
 
    return 0;
}