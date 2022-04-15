#include<iostream>
using namespace std;
int SOLN2 (int a, int b)
{
	int Max;
	if(a > b){
		Max = a;
	} else {
		Max = b;
	}
	return Max;
}
int SOLN3 (int a, int b, int c)
{
	int Max = SOLN2(a, b);
	Max = SOLN2(a, b);
	Max = SOLN2( Max, c);
	if ( a >= b) {
		Max = a;
	}else {
		Max = b;
	} if( c > Max){
		Max = c;
	} 
	return Max;
}
int main(){
	int a, b, c;
	cout << "Nhap 3 so nguyen: ";
	cin >> a >> b >> c;
	cout << "So lon nhat 2 so " << a << ", " << b << " la: " << SOLN2(a, b) << endl;
	cout << "So lon nhat 3 so " << a << ", " << b << ", " << c << " la: " << SOLN3(a, b, c) << endl;
	system("pause");
	return 0;
}
	
	
