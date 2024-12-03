#include <iostream>
using namespace std;
 
int main() {
    char decyzja; 
    int liczba;   
 
    do {
        cout << "Podaj liczbę: ";
        cin >> liczba; 
        cout << "Wprowadziłeś liczbę: " << liczba << endl;
 
        cout << "Czy chcesz wprowadzić kolejną liczbę? (t/n): ";
        cin >> decyzja;
    } while (decyzja == 't' || decyzja == 'T'); 
    cout << "Dziękuję za użycie programu." << endl;
    return 0;
}