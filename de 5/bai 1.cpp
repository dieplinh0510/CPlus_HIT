#include <bits/stdc++.h>
#include <time.h>
using namespace std;
int snt(int n){
	if (n<2) return 0;
	else {
		for (int i=2; i<=sqrt(n); i++){
			if (n%i==0) return 0;
		}
	}
	return 1;
}
void sap_xep(int *a, int n){
	for (int i=0; i<n-1; i++){
		for (int j=i+1; j<n; j++){
			if (a[i]<a[j]){
				int temp= a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}
void xoa(int *a, int &n, int k){
	for (int i=0; i<n; i++){
		a[k]=a[k+1];
	}
	n=n-1;
}
int main(){
	int n;
	cout<<"nhap n: "; cin>>n;
	int *a= new int [n];
	srand((int)time(NULL));
	for (int i=0; i<n; i++){
		a[i]=-50+ rand()%101;
		cout<<a[i]<<"   ";
	}
	cout<<endl;
	for (int i=0; i<n; i++){
		if (a[i]==1) cout<<"yess";
		else cout<<"nooo"<<"   ";
	}
	cout<<endl;
	for (int i=0; i<n; i++){
		sap_xep(a,n);
		cout<<a[i]<<"  ";
	}
	int k;
	do{
		cout<<"nhap k: "; cin>>k;
	} while(k<0||k>=n);
	xoa(a,n,k);
	for (int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
