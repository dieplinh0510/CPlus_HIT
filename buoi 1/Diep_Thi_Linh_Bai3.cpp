#include <iostream>
using namespace std;
int main(){
	int m,n;
	cout<<"nhap m: "; cin>>m;
	cout<<"nhap n: "; cin>>n;
	float x,y;
	cout<<"nhap x: "; cin>>x;
	cout<<"nhap y: "; cin>>y;
	if (n>m){
		cout<<"co "<<n<<" con cho"<<endl;
	}
	else {
		cout<<"co "<<m<<" con meo"<<endl;
	}
	if (x>y){
		cout<<"gau gau "<<x<<" lan"<<endl;
	}
	else {
		cout<<"meo meo "<<y<<" lan"<<endl;
	}
	return 0;
}
