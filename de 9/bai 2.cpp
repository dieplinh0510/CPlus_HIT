#include <bits/stdc++.h>
using namespace std;
int main(){
	int m,n;
	cout<<"nhap m,n: ";
	cin>>m>>n;
	int **a= new int*[m];
	for (int i=0; i<m; i++){
		a[i]=new int[n];
	}
	for (int i=0; i<m; i++){
		for (int j=0; j<n; j++){
			cout<<"*"<<" ";
		}
		cout<<endl;
	}
	return 0;
}
