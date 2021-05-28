#include <iostream>
#include <math.h>
using namespace std;
//int main(){
//	int n;
//	do{
//		cout<<"nhap n: ";
//		cin>>n;
//	} while (n<=0);
//	int *a= new int[100];
//	int i=0, dem=0, dem1=0;
//	while(n!=0){
//		int y=n%10; dem++;
//		a[i]=y;
//		n=n/10;
//		i++; 
//	}
//	for (int i=0; i<dem/2; i++){
//		if (a[i]==a[dem-1-i]) {
//			dem1++;
//		}
//	}
//	if (dem1==(int)dem/2) cout<<"yesss";
//	else cout<<"nooo";
//	return 0;
//}
int main(){
	int n;
	do{
		cout<<"nhap n: ";
		cin>>n;
	} while(n<=0);int x=n;
	int a, temp=0;
	while(n!=0){
		a=n%10;
		temp=temp*10+a;
		n/=10;
	}
	if (temp==x) cout<<"yess";
	else cout<<"nooo";
}





