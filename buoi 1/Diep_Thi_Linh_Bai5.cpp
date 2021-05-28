#include <iostream>
using namespace std;
int main(){
	int m,n,a;
	cout<<"nhap m: "; cin>>m;
	cout<<"nhap n: "; cin>>n;
	cout<<"nhap a: "; cin>>a;
	float b=(float)(m*n)/(a*a);
	if(b-(int)b!=0){
		b=(int)(b+1);
		cout<<"so vien gach phai mua: "<<b<<endl;
	}
	else {
		cout<<"so vien gach phai mua: "<<b<<endl;
	}
	return 0;
}
