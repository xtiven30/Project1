#include <iostream>
using namespace std;

int main() {
	int n1, n2, n3, m;
	cout << "Digite un numero " << endl; cin >> n1;
	cout << "Digite un numero " << endl; cin >> n2;
	cout << "Digite un numero " << endl; cin >> n3;
	m = n1;
	if (m < n2)
	{
		m = n2;
	}
	else if (m < n3) {
		m = n3;
	}
	else {
		m = n1;
	}
	cout << "El numero mayor es: " << m << endl;
	system("Pause");
}