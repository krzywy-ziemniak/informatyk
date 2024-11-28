#include <iostream>
using namespace std;
 
int main() {
    int N;
 
    cout << "Podaj liczbe N: ";
    cin >> N;
 
    int i = 2;
    cout << "Liczby parzyste od 2 do " << N << ":\n";
    while (i <= N) {
        cout << i << endl;
        i += 2;
    }
 
    return 0;
}
 