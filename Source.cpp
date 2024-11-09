#include <iostream>

using namespace std;
int tong(int a, int b);
int hieu(int a, int b) {
	return a-b;
}
int tich(int a, int b){
return a*b;
}

float thuong(int a, int b){
return a/b;}
int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
int a,b;
cin>>a>>b;
cout<<thuong(a,b);
cout<<tich(a,b);
	system("pause");
	return 0;
}