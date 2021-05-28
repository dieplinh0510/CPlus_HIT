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
			cout<<a[i][j];
		}
		cout<<endl;
	}
}
void max_min(int **a, int m, int n){
	int max=a[0][0];
	for (int i=0; i<m; i++){
		for (int j=0; j<n; j++){
			if (max<a[i][j]){
				max=a[i][j];
			}
		}
	}
	int min=a[0][0];
	for (int i=0; i<m; i++){
		for (int j=0; j<n; j++){
			if (min>a[i][j]){
				min=a[i][j];
			}
		}
	}
	cout<<"max= "<<max<<endl;
	cout<<"min= "<<min<<endl;
}
int main(){
	int m, n;
	cout<<"nhap m, n: ";
	cin>>m>>n;
	int **a= new int *[m];
	for (int i=0; i<m; i++){
		a[i]= new int [n];
	}
	nhap_mang(a,m,n);
	hien_thi(a,m,n);
	max_min(a,m,n);
	return 0;
}
