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
			cout<<a[i][j];
		}
		cout<<endl;
	}
}
void tinh(int **a, int m, int n){
	int tong=0;
	for (int i=0; i<m; i++){
		for (int j=0; j<n; j++){
			if((i+1)%2==0){
				cout<<a[i][j]<<"  ";
				tong+=a[i][j];
			}
		}
		cout<<endl;
	}
	cout<<"tong hang chan: "<<tong<<endl;
}
void tim_max(int **a, int m, int n){
	int max=a[0][0];
	for (int i=1; i<m; i++){
		if (max<a[i][0]){
			max=a[i][0];
		}
	}
	cout<<"maxx: "<<max<<endl;
}
int main(){
	int m,n ;
	cout<<"nhap m,n :";
	cin>>m>>n;
	int **a=new int *[m];
	for (int i=0; i<n; i++){
		a[i]= new int [n];
	}
	nhap_mang(a,m,n);
	xuat_mang(a,m,n);
	tinh(a,m,n);
	tim_max(a,m,n);
	return 0;
}
