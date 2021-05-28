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
void sap_xep(int **a, int m, int n){
	for (int i=0; i<n; i++){
		if (a[1][i]<a[1][1+i]){
			int temp= a[1][i];
			a[1][i]=a[1][1+i];
			a[1][i+1]=temp;
		}
	}
}
void tinh_tong(int **a, int m, int n){
	int tong=0;
	for (int i=0; i<m; i++){
		for (int j=0; j<n; j++){
			tong+=a[i][j];
		}
	}
	cout<<"tong: "<<tong<<endl;
}
int max_min(int **a, int m, int n, int *tg){
	int max=a[0][0];
	for (int i=0; i<m; i++){
		for (int j=0; j<n; j++){
			if (a[i][j]>max){
				max= a[i][j];
			}
		}
	}
	cout<<"max cua mang: "<<max<<endl;
	for (int i=0; i<m*n; i++){
		tg[i]= a[i/n][i%n];
	}
	for (int i=0; i<m*n-1; i++){
		for (int j=i+1; j<m*n; j++){
			if (tg[i]>tg[j]){
				int temp=tg[i];
				tg[i]=tg[j];
				tg[j]=temp;
			}
		}
	}
	for (int i=0; i<m*n; i++){
		a[i/n][i%n]= tg[i];
	}
	for (int i=0; i<m; i++){
		for (int j=0; j<n; j++){
			if (a[i][j]%3==0) {
			return a[i][j];	
			}	
		}
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
	int *tg= new int[m*n];
	nhap_mang(a,m,n);
	xuat_mang(a,m,n);
	cout<<endl;
	sap_xep(a,m,n);
	xuat_mang(a,m,n);
	tinh_tong(a,m,n);
	max_min(a,m,n,tg);
	cout<<"min: "<<max_min(a,m,n, tg);
	return 0;
}
