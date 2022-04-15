#include<iostream>
using namespace std;
int SoDao(int a)
{
	int kq, chS;
	while (a > 0){
		chS = a % 10;
		kq = kq * 10 + chS;
		a = a / 10;
	}
	return kq;
}
int main(){
	int n; 
	cout << "Nhap so nguyen: ";
	cin >> n;
	cout << "So dao cua "<< n << " la " << SoDao(n) << endl;
	system("pause");
	return 0;
} 
