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
void swap(int &m, int &n){
	int temp= m;
	m=n;
	n= temp;
}
void doi_hang(int **a, int m , int n, int k, int l){
	for (int j=0; j<n; j++){
		swap(a[k][j], a[l][j]);
	}
}
void doi_cot(int **a, int m, int n, int x, int y){
	for (int i=0; i<m; i++){
		swap(a[i][x], a[i][y]);
	}
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
	int k,l;
	do{
		cout<<"nhap k,l";
		cin>>k>>l;
	} while (k<0 || k>m||l<0||l>m);
	doi_hang(a,m,n,k,l);
	xuat_mang(a,m,n);
	int x,y;
	do{
		cout<<"nhap x,y";
		cin>>x>>y;
	} while (x<0||x>n||y<0||y>n);
	doi_cot(a,m,n,x,y);
	xuat_mang(a,m,n);
	return 0;
}
