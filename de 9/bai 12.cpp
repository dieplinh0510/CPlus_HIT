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
void max_min(int **a, int m, int n){
	if (m==n){
		int max= a[0][0];
		for (int j=1; j<n; j++){
			if (a[j][j]>max){
				max=a[j][j];
			}	
		}
		cout<<"max: "<<max;
		int min=a[0][0];
		for (int j=1; j<n; j++){
			if (a[j][j]<min){
				min=a[j][j];
			}
		}
		cout<<"min: "<<min;
	}else {
		cout<<"khong phai ma tran vuong,  k co duong cheo chinh";
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
	max_min(a,m,n);
	return 0;
}
