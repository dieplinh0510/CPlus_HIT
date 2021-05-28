#include <iostream>
#include <math.h>
using namespace std;
void nhap_mang(int *a, int n){
	for (int i=0; i<n; i++){
		cin>>a[i];
	}
}
void xuat_mang(int *a, int n){
	for (int i=0; i<n; i++){
		cout<<a[i]<<"  ";
	}
}
int snt(int n){
	if (n<2) return 0;
	for (int i=2; i<=sqrt(n); i++){
		if (n%i==0) return 0;
	}
	return 1;
}
void so_nt(int *a, int n){
	int tong=0;
	for (int i=0; i<n; i++){
		if (snt(a[i])==1){
			tong+=a[i];
		}
	}
	cout<<"tong so nguyen to : "<<tong<<endl;
}
void chinh_phuong(int *a, int n){
	int tong=0;
	for (int i=0; i<n; i++){
		for (int j=1; j<a[i]; j++){
			if (j*j==a[i]){
				tong+=a[i];
			}
		}
	}
	cout<<"tong chinh phuong: "<<tong<<endl;
}
void hoan_thien(int *a, int n){
	int tich=1;
	for (int i=0; i<n; i++){
		int uoc=0;
		for (int j=1; j<a[i]; j++){
			if (a[i]%j==0){
				uoc+=j;
			}
		}
		if (uoc==a[i]){
			tich*=a[i];
		}
	}
	if (tich==1){
		cout<<"khong co so hoan hao"<<endl;
	}
	else {
		cout<<"tich cac so hoan hao: "<<tich<<endl;
	}
}
void xoa(int *a, int &n){
	for (int i=0; i<n; i++){
		while (snt(a[i])==1 && i<n){
			for (int j=i; j<n-1; j++){
				a[j]=a[j+1];
			}
			n--;
		}
	}
}
int main(){
	int n;
	do{
		cout<<"nhap n: "; cin>>n;
	} while(n<=3||n>=50);
	int *a=new int[n];
	nhap_mang(a,n);
	xuat_mang(a,n);
	cout<<endl;
	so_nt(a,n);
	chinh_phuong(a,n);
	hoan_thien(a,n);
	xoa(a,n);
	xuat_mang(a,n);
	return 0;
}
