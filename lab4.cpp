#include <iostream>
#include <locale>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	int k,n, m[100];
	//int a;   // ���� ��� ������ � ����� ������� ������������� ������
	//cin >> a; // true ������������� ������ false �����
	cin >> n;
	cin >> k; // ����� � ������ �������� �������������. �� ������ ��������� ��� ������  
	for (int i = 0; i < n; i++) {
		cin >> m[i];
	}

	cout << "������������� ������ �� k �� k - 1:  ";
	for (int i = 0; i <= n - k; i++) {
		cout << m[(k - 1) + i] << " ";
	}
	for (int i = 0; i <  (k - 1); i++) {
		cout << m[i] << " ";
		}
	cout << endl;
	cout << "������������� ������ �� k �� k + 1:  ";
	for (int i = 1; i <= k; i++) {
		cout << m[k - i] << " ";
	}
	for (int i = 1; i <= n - k; i++) {
		cout << m[n - i] << " ";
	}



}