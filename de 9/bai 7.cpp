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
int tinh_tong(int **a, int m, int n){
	int tong=0;
	for (int i=0; i<m; i++){
		for (int j=0; j<n; j++){
			if (a[i][j]%2==0){
				tong+=a[i][j];
			}
		}
	}
	return tong;
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
	cout<<"tong so chan: "<<tinh_tong(a,m,n);
	return 0;
}
