#include <iostream>

using namespace std;
int tong(int a, int b);
int hieu(int a, int b) {
	return a-b;
}
int tich(int a, int b);
float thuong(int a, int b){
return a/b;}
int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
int a,b;
cin>>a>>b;
<<<<<<< HEAD

cout<<"hieu a va b=" << hieu(a, b);
=======
cout<<hieu(a,b);
cout<<"aaaaaaaaa";
=======
cout<<thuong(a,b);
>>>>>>> 144f862 (thuong)
	system("pause");
	return 0;
}