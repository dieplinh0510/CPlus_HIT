#include <iostream>
using namespace std;
void sap_xep_chan(int b[], int nchan){
	for (int i=0; i<nchan-1; i++){
		for (int j=i+1; j<nchan; j++){
			if (b[i]>b[i+1]){
			int temp=b[i];
			b[i]=b[i+1];
			b[i+1]=temp;
		}
		}
	}
}
void sap_xep_le(int c[], int nle){
	for (int i=0; i<nle-1; i++){
		for (int j=i+1; j<nle; j++){
			if (c[i]>c[j]){
				int temp=c[i];
				c[i]=c[j];
				c[j]=temp;
			}
		}
	}
}
int main(){
	int n=5, nle=0, nchan=0;
	int a[50]={8,4,0,9,1};
	int b[50], c[50];
	for (int i=0; i<n; i++){
		if (a[i]!=0&&a[i]%2==0){
			b[nchan]=a[i];
			nchan++;
		}
		if (a[i]%2!=0){
			c[nle]=a[i];
			nle++;
		}
	}
	sap_xep_chan(b, nchan);
	sap_xep_le(c, nle);
	int j=0; int mangnew[50];
	for (int i=0; i<nchan; i++){
		mangnew[j]=b[i];
		j++;
	}
	for (int i=0; i<nle; i++){
		mangnew[j]=c[i];
		j++;
	}
	for (int i=0; i<n; i++){
		if (a[i]==0){
			mangnew[j]=a[i];
			j++;
		}
	}
	for (int i=0; i<j; i++){
		cout<<mangnew[i]<<" ";
	}
	return 0;
}
