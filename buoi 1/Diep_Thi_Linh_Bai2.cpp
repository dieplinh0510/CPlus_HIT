#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int a, b;
	do{
		cout<<"nhap so a: ";
		cin>>a;
	} while(a<=0);
	do{
		cout<<"nhap so b: ";
		cin>>b;
	} while(b<=0);
	cout<<a<<"+"<<b<<"="<<a+b<<endl;
	cout<<a<<"-"<<b<<"="<<a-b<<endl;
	cout<<a<<"*"<<b<<"="<<a*b<<endl;
	cout<<a<<"/"<<b<<"="<<fixed<<setprecision(2)<<(float)a/b<<endl;
	cout<<a<<"%"<<b<<"="<<a%b<<endl;
	return 0;
}
