#include <iostream>
using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b);
int main()
{
	int a, b;
	char phepToan;
	cout << "Nhap so nguyen 1: ";
	cin >> a;
	cout << "Nhap so nguyen 2: ";
	cin >> b;
	cout << "Chon phep toan (+,-) ";
	cin >> phepToan;
	cout<<tong(a,b);
	system("pause");
	return 0;
}

int tong(int a, int b)
{
	int s = a + b;
	return s;
}
