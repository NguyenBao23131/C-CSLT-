#include<iostream>
using namespace std;
int TongN(int n);
int GiaithuatN(int n);
int main() {
	int n;
	do{
		cout <<"Nhap so nguyen: ";
		cin >> n;
		if ( n < 0){
			cout<< "Nhap sai! Hay nhap lai? " << endl;
		}
	}while (n < 0);
	cout <<"Tong tu 1 den "<< n << " la: " << TongN( n) << endl;
	cout <<"Ket qua: "<< n << "! = "<< GiaithuatN(n) << endl;
	cout <<"Tinh giai thua cua cac so tu 0 den " << n << "la:\n";
	for (int i = 0; i <= n; i++){
		cout << i << "! = "<< GiaithuatN(i) << endl;
	}
	system("pause");
	return 0;
}
int TongN(int n)
{
	int S = 0;
	for (int i = 1; i <= n; i++){
		S += i;
	}
	return S;
}
int GiaithuatN(int n)
{
	int P = 1;
	for (int i = 1; i <= n; i++){
		P *= i;
	}
	return P;
}

	

