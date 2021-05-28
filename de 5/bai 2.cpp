#include <bits/stdc++.h>
#include <time.h>
using namespace std;
void input(int *a){
	for (int i=0; i<10; i++){
		cin>>a[i];
	}
}
bool ok(int *a, int k){
	for (int i=0; i<10; i++){
		if (a[i]==k) return true;
	}
	return false;
}
int main(){
	int *a= new int[10];
	srand((int)time(NULL));
	int k= rand()%100;
	input(a);
	if (ok(a,k)){
		cout<<"trung de: "<<k;
	}
	else {
		cout<<"khong trung "<<k;
		}
	return 0;
}
