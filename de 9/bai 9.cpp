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
void xoa_dong(int **a, int m, int n, int x){
	for (int i=x; i<m-1; i++){
		for (int j=0; j<n; j++){
			a[i][j]=a[i+1][j];
		}
	}
	m--;
	xuat_mang(a,m,n);
}
void xoa_cot(int **a, int m, int n, int y){
	for (int i=0; i<m; i++){
		for (int j=y; j<n-1; j++){
			a[i][j]=a[i][j+1];
		}
	}
	n--;
	xuat_mang(a,m,n);
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
	int x, y;
	cout<<"nhap dong can xoa: "; cin>>x;
	cout<<"nhap cot can xoa: "; cin>>y;
	xoa_dong(a,m,n,x);
	xoa_cot(a,m,n,y);
	return 0;
}
