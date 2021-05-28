#include <bits/stdc++.h>
using namespace std;
void nhap_mang(int **a, int m, int n){
	for (int i=0; i<m; i++){
		for (int j=0; j<n; j++){
			cin>>a[i][j];
		}
	}
}
void xuat_mang(int **a, int m, int n){
	for (int i=0; i<m; i++){
		for (int j=0; j<n; j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
int snt (int n){
	if (n<2) return 0;
	else {
		for (int i=2; i<=sqrt(n); i++){
			if (n%i==0) return 0;
		}
	}
	return 1;
}
int main(){
	int m,n;
	cout<<"nhap m, n: ";
	cin>>m>>n;
	int **a= new int *[m];
	for (int i=0; i<m; i++){
		a[i]= new int [n];
	}
	nhap_mang(a,m,n);
	xuat_mang(a,m,n);
	int dem=0;
	for (int i=0; i<m; i++){
		for (int j=0; j<n; j++){
			if (snt(a[i][j])==1){
				cout<<a[i][j]<<"  ";
				dem++;
			}
		}
	}
	cout<<"so so nguyen to: "<<dem;
	return 0;
}
