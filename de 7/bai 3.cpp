#include <iostream>
using namespace std;
void hoan_vi(int a,int b){
	int temp=a;
	a=b;
	b=temp;
}
int main(){
	int a,b;
	do{
		cout<<"nhap a: "; cin>>a;
	} while(a<=0);
	do{
		cout<<"nhap b: "; cin>>b;
	} while(b<=0);
	hoan_vi(a,b);
	cout<<ab;
	return 0;
}
