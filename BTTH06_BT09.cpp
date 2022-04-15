#include<iostream>
#include<cmath>
using namespace std;
int tongChS(int n)
{
	int chs, tong = 0;
	while(n > 0){
		chs = n % 10;
		tong += chs;
		n = n / 10;
	}
	return tong;
}
int main(){
	int n, n1;
	cout <<"Nhap so nguyen: ";
	cin >> n;
	n1 = abs(n); // Gia tri tuyet doi cua n
	cout << "Tong cac chu so cua "<< n <<" la " << tongChS(n1) << endl;
	system("pause");
	return 0;
}
