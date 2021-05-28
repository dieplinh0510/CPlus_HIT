#include <iostream>
using namespace std;
int main(){
	int m, n;
	float x;
	cout<<"nhap m, n: "; cin>>m>>n;
	cout<<"nhap x: "; cin>>x;
	float f=0;
	if (m%2!=0){
		int a=1;
		for (int i=1; i<=n; i++){
			a=a*x;
			f+=a;
		}
		f=f+2021*x+2021;
		cout<<"f= "<<f;
	}
	else if(m%2==0&&n%2==0){
		int a=0, b=1;
		for (int i=1; i<=n; i++){
			for (int j=1; j<=2*i&&j<=n; j++){
				b=b*j;
			}
			a=a+i;
			f=f+(float)b/a;
		}
		f=f+x;
		cout<<"f= "<<f;
	}
	else{
		cout<<"f=-1";
	}
	return 0;
}
