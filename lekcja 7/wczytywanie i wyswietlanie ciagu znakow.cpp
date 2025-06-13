#include <iostream>
using namespace std;

int main() {
    char tekst[21];
    
    cout << "Podaj ci¹g znaków (max 20 znaków): ";
    cin.getline(tekst, 21);
    
    cout << "Wprowadzony ci¹g znaków: " << tekst << endl;
    
    return 0;
}
