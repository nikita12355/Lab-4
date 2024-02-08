#include <iostream>
#include <locale>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	int k,n, m[100];
	//int a;   // флаг дл€ выбора с какой стороны распечатывать массив
	//cin >> a; // true распечатывать справа false слева
	cin >> n;
	cin >> k; // выбор с какого элемента распечатывать. Ќе должен превышать сам массив  
	for (int i = 0; i < n; i++) {
		cin >> m[i];
	}

	cout << "–аспечатанный массив ок k до k - 1:  ";
	for (int i = 0; i <= n - k; i++) {
		cout << m[(k - 1) + i] << " ";
	}
	for (int i = 0; i <  (k - 1); i++) {
		cout << m[i] << " ";
		}
	cout << endl;
	cout << "–аспечатанный массив ок k до k + 1:  ";
	for (int i = 1; i <= k; i++) {
		cout << m[k - i] << " ";
	}
	for (int i = 1; i <= n - k; i++) {
		cout << m[n - i] << " ";
	}



}