#include <bits/stdc++.h>
using namespace std;
int pow1(int n){
	int a=1;
	for (int i=1; i<=n; i++){
		a=a*i;
	}
	return a;
}
int pow2(int n, float x){
	int a=1, b=0;
	float s=0;
	for (int i=1; i<=n; i++){
		a=a*x;
		b=b+i;
		s=s+(float)a/b;
	}
	cout<<"ket qua: "<<s;
}
int main(){
	int n;
	float x, f=0;
	cout<<"nhap n: ";
	cin>>n;
	cout<<"nhap x: ";
	cin>>x;
	if (n>5){
		f=f+pow1(n)+2021*x;
		cout<<"ket qua: "<<f;
	}
	else {
		pow2(n,x);
	}
	return 0;
}
