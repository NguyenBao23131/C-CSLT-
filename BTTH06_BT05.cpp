#include<iostream>
using namespace std;
void InVuong(double n)
{
	for (int i = 1; i <- n; i++){
		for (int j = 1; j <= n; j++){
			cout<< "*";
		}
		cout << endl;
	}
} 
int main() {
	double c;
	cout <<"Nhap canh hinh vuong: ";
	cin >> c;
	InVuong(c);
	system("pause");
	return 0;
}
