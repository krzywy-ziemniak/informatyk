#include <iostream>
using namespace std;
 
int main() {
    char decyzja; 
    int liczba;   
 
    do {
        cout << "Podaj liczbe: ";
        cin >> liczba; 
        cout << "Wprowadziles liczbe: " << liczba << endl;
 
       
        cout << "Czy chcesz wprowadzic kolejna liczbe? (t/n): ";
        cin >> decyzja;
    } while (decyzja == 't' || decyzja == 'T');
 
    cout << "Dziekuje za uzycie programu." << endl;
    return 0;
}
