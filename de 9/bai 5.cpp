#include <bits/stdc++.h>
using namespace std;
void nhap_mang(int **a, int m, int n){
	for (int i=0; i<m; i++){
		for (int j=0; j<n; j++){
			cin>>a[i][j];
		}
	}
}
void hien_thi(int **a, int m, int n){
	for (int i=0; i<m; i++){
		for (int j=0; j<n; j++){
			cout<<a[i][j]<<"  ";
		}
		cout<<endl;
	}
}
int main(){
	int m, n;
	cout<<"nhap m, n: ";
	cin>>m>>n;
	int **a= new int *[m];
	for (int i=0; i<m; i++){
		a[i]= new int [n];
	}
	int x=m, y=n;
	int **b= new int *[x];
	for (int i=0; i<x; i++){
		b[i]= new int [y];
	}
	nhap_mang(a,m,n);
	hien_thi(a,m,n);
	cout<<endl;
	nhap_mang(b,x,y);
	hien_thi(b,x,y);
	cout<<"tong 2 mang: "<<endl;
	for (int i=0; i<m; i++){
		for (int j=0; j<n; j++){
			a[i][j]=a[i][j]+b[i][j];
			cout<<a[i][j]<<"  ";
		}
		cout<<endl;
	}
	return 0;
}
