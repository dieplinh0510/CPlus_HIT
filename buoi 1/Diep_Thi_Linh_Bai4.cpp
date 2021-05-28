#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"nhap n: "; cin>>n;
	if (n>0&&n<13){
		cout<<n<<" la thang "<<n<<" trong nam"<<endl;
	}
	else {
		cout<<n<<" khong phai la mot thang trong nam"<<endl;
	}
	return 0;
}
