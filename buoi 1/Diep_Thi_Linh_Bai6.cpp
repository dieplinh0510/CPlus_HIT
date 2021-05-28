#include <iostream>
using namespace std;
int main(){
	int a, gia;
	cout<<"nhap a: "; cin>>a;
	if (a<49){
		gia=1500*a;
	}
	else if(a<100){
		gia=49*1500+2500*(a-49);
	}
	else if(a<150){
		gia=49*1500+2500*50+(a-99)*3500;
	}
	else if(a<200){
		gia=49*1500+2500*50+50*3500+4000*(a-149);
	}
	else {
		gia=49*1500+2500*50+50*3500+4000*50+5000*(a-199);
	}
	cout<<"gia tien: "<<gia;
	return 0;
}

