#include <iostream>
using namespace std;
int main(){
	int a[] = {1, 2, 4, 3, 8, 0, 34, 5, 4};
	int n = 9;
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(a[i]%2!=0 && a[j]%2==0 && a[i] != 0 && a[j] != 0)
				swap(a[i], a[j]);
		}
	}
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(a[i] == 0 && a[j] != 0)
				swap(a[i], a[j]);
		}
	}
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(a[i]%2==0 && a[j]%2==0 && a[i] > a[j] && a[i] != 0 && a[j] != 0)
				swap(a[i], a[j]);
		}
	}
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(a[i]%2!=0 && a[j]%2!=0 && a[i] > a[j] && a[i] != 0 && a[j] != 0)
				swap(a[i], a[j]);
		}
	}
	for(int i=0; i<n; i++)
		cout << a[i] <<  " ";

	return 0;
}
