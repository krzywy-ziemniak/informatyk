#include <iostream>
using namespace std;
int main(){
    int a, b;
	cout << "Podaj liczbe: ";
	cin >> a;
	cout << "Podaj druga liczbe: ";
	cin >> b;
	
	int suma = a + b;
	int roznica = a - b;
	int iloczyn = a * b;
	
	cout << "Suma: " << suma << endl;
	cout << "Roznica: " << roznica << endl;
	cout << "Iloczyn: " << iloczyn << endl;
	
	return 0;
}
