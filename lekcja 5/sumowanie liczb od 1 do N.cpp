#include <iostream>
using namespace std;
 
int main() {
    int N, sum = 0;
    cout << "Podaj liczbe N: ";
    cin >> N;
 
    for (int i = 1; i <= N; i++) {
        sum += i;
    }
 
    cout << "Suma liczb od 1 do " << N << " wynosi: " << sum << endl;
    return 0;
}
