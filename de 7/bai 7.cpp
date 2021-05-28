#include <iostream>
using namespace std;
void nhap_mang(int *a, int n){
	for (int i=0; i<n; i++){
		cin>>a[i];
	}
}
void xuat_mang(int *a, int n){
	for (int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
}
void chen_so(int *a, int &n, int k, int x){
	if (k>=0&&k<n){
		n=n+1;
		for (int i=n-1; i>k; i--){
			a[i]=a[i-1];
		}
		a[k]=x;
	}
	else {
		n=n+1;
		for (int i=n-1; i>0; i--){
			a[i]=a[i-1];
		}
		a[0]=x;
	}
}
void xoa_so(int *a, int &n, int m){
	for (int i=0; i<n; i++){
		while (a[i]==m && i<n){
			//thuc hien xoa phan tu tai vi tri i o day
			for (int j=i; j<n-1; j++){
				a[j]=a[j+1];
			}
			n--;
			//em quen mat i<n de lam i roi\
			//khong co i<n thi phan tu can xoa la so cuoi cung no se chay mai trong do
			//trong for i<n roi ma
			//Linh hiu teo nao hom
			//chut chut
			//chac do Linh buon ngu day
			//do anh lam em thuc khuya do
			//ra mess goi la thuc dc thui
			//chieu mai em ktra anh noi roi
			//O the hoc gi chua
			//hoc lam gi????
			//The nay ngu di sang mai day hoc card
			//lam linh pro lam. ki 1 em duoc 2.5 anh noi. k hieu luon. co cham kieu gi y
			//Hmmmm vua rui tui ktra dc han 5d noi
			//chac ki 2 co cham de hon. co nay khong gat
			//Mai tui ra truong thi tui goi day hoc
			//no. de yen em ngu. 8h day. 9h roi giuong hoc----Bo tay. Ngu hon heo
			//The k hoc thi doc card sao dc
			//???? ngu co moi ti ma keu nguoi ta nhu the. gioi roi. ngoi len dau em di
			//oke em dua dau ra day...
			//roi yeu voi cha duong. chi muon ngoi len dau nguoi ta
			// thui hong dam nua. So nga dau lam -_-
			//cung phai. anh ma nga tren dau em xuong thi chac liet toan than. chenh lech chieu cao do
			//ai co chan dai 1m dau ma biet...
			//lew lew. khong khi o tren cao loang qua. chac nguoi khong cao k biet dau
			//neu muon biet thi ngoi len dau nguoi cao 
			//nguoi hoc gioi thuong co loi di rieng. nhi
			//anh di vao tim Lam Linh thui
			//ua. ai cho ma vao?
			//tui ve BG bao bo me cho vao
			//vay luon a
			//Lam Linh co ban theo can hong anh tich tien mua
			//oi roi oi. con chuot to khong
			//tui co thay gi dau :(. bat cam len nhin Linh cai nao
			//anh bat thu xem?
			//Gan 1 tuan rui chua dc nhin thay Linh :(
			//?. hom nay t6? xong keu gan 1 tuan. the la noi dieu roi???
			//?????? bh la t7 roi
			//a nham. em bi lag roi
			//Hay thuc khuya nen toan bi bat loi nay. Lam Linh hat anh nghe de
			//khong. hihi
			//Hinh nhu truoc Lam Linh hat cho anh 1 lan
			//hinh nhu cai gi. cha the con gi nua. hoi van chua len truong thi phai
			//A. Luc do 3 ngay sau thi Lam Linh len HaNam. Mai hat lai diiiiiii <3
			//con lau nhe
			//Lam ntn thi Lam Linh moi hat :((
			//chang nhu nao ca. du sao cung khong hat
			//Hat di tui cho tui ne
			//the thoi em k can, anh giu lai ma dung
			// :( Co ai can tui dau ma :(
			//ua. sao anh biet hay the. nha tien tri a
			//dung vay. The ma khong tien tri duoc la yeu Linh <3
			//shopee bi dien mat roi. cu flash sale em lai het ma giam gia
			//tao tai khoan moi thi chac co ma tha ho ma dung
			//het sdt roi. k em tao lau roi
			//anh co cai thua ne
			//nhung ma tai khoan nao dung cua tai khoan day thoi
			//Tai tui khong hay mua do nen la giong nguoi rung do :( .A lan nay dat cx nhieu do.k hieu kieu gi
			//thang nay em cung dat nhieu. k hieu luon. toan may cai linh tinh
			//Anh vs Lam Linh lieu co dang bi ngao khong nhi
			//moi anh bi ngao thoi. em k bi nhe
			// Em khong bi ma em lai chat o day vs anh??
			//tiet kiem 4G co duoc khong
			//O bat duoc wifi truong rui a
			//em hoi thay. xong thay cho lai mk luon. ezzz
			//Bo tay Lam Linh. Co cai mk ma cung quen...
			//Lam Linh code cho het bai de
			//thoi ben duoi em biet lam roi
			//Neu ny luoi thi phai lam ntn?
			//nhung ma ny co luoi dau. 2p la xong y day roi
			//dung chua?
			//Tuong code bai 8. Ai ngo -_-
			//bai 8 lam roi ma. toi qua lam y.
			//Gio con nho hay khong?
			//doi 1p em suy ngam lai. chac la nho chut chut
			//rui rui. Vs ca muon rui khong hoc nua. Cbi ma ngu. Qua da thuc khuya r
			//A ma gan bang hq r nhi?
			//O em viet lai di anh vi roi chuot
			//em bao la qua con buon ngu roi. ma sao nhac no k len nhi. em k nghe thay
			//em thay chua
			//nno k keu vao tai nghe cua em
			//em chinh 4 cai do xem cai nao dc
			//duoc roi.nho roi.
			//Nho cach chinh chua
			//Anh khong nghe thay nhac cua em. Luc dau con nghe thay co
			//chiu em k biet. hoc IT nhung mu cong nghe:((
			//Chi can thay anh la duoc rui ne <3
			//em vua sat sinh. dap chet 5 con muoi
			//Mong la em chi sat sinh dong vat nho be thui :(
			//tai no choc em truoc ma. no dot em. khong em tha cho no roi
			//nhung ma. tai sao 2 chung ta lai ngoi noi chuyen o day. khong hieu luon
			//Thi anh hoi em co bi ngao khong do??
			//roi em bi ngao. duoc chua
			//Anh se khong treu em. Anh so anh giong con muoi vua nay :(
			//khong co dau. em se khong dap chet anh 1 cach de dang nhu the. em se tra tan anh....
			//LVL có tra tan a??
			//nhung em thich co duoc khong
			
			
			
			
			
		}
	}
	
}
void sap_xep(int *a, int n){
	for (int i=0; i<n-1; i++){
		for (int j=i+1; j<n; j++){
			if (a[i]>a[j]){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}
int main(){
	int n;
	do{
		cout<<"nhap n: "; cin>>n;
	} while(n<=3 || n>=20);
	int *a= new int[n];
	int k;
	cout<<"nhap vi tri k: ";
	cin>>k;
	int x;
	cout<<"nhap x: "; cin>>x;
	nhap_mang(a,n);
	chen_so(a,n,k,x);
	xuat_mang(a,n);
	int m;
	cout<<"nhap m: "; cin>>m;
	xoa_so(a,n,m);
	xuat_mang(a,n);
	cout<<endl;
	sap_xep(a,n);
	xuat_mang(a,n);
	return 0;
}
