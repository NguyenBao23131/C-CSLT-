#include<iostream>
using namespace std;
double DTCN (double a, double b)
{
	double kq;
	kq = a * b;
	return kq;
}
double CVCN (double a, double b)
{
	double kq;
	kq = ( a + b) * 2;
	return kq;
} 
int main(){
	double d, r;
	do {
		cout << "Nhap chieu dai: ";
		cin >> d;
		cout << "Nhap chieu rong: ";
		cin >> r;
		if (d <= 0 || r <= 0){
			cout <<"Nhap sai! Hay nhap lai "<< endl;
		}
	} while (d <= 0 || r <= 0);
	cout << "Dien tich hinh chu nhat: " << DTCN(d, r) << endl;
	cout << "Chu vi hinh chu nhat: " << CVCN(d, r) << endl;
	system("pause");
	return 0;
	return 0;
}
