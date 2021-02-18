#include<iostream>
using namespace std;
void nhapn( int a[], int &n)
{
	do
	{
		cout<<"-Nhap n: ";
		cin>>n;
		if(n<0||n>100)
			cout<<"Nhap sai! Nhap lai";
	}while(n<0||n>100);
}
void nhapxuat(int a[],int n)
{
	cout<<"-Nhap mang: "<<endl;
	for(int i =0;i<n;i++){
		cout<<"a["<<i<<"]=" ;
		cin>>a[i];
	}
	cout<<"-Xuat mang: ";
	for(int i =0;i<n;i++){
		cout<<a[i];
		if(i<n-1)
			cout<<", ";
	}
}
void tim (int a[],int n)
{
	int gtpt, dem=0;
	cout<<"Nhap gia tri phan tu muon tim: ";
	cin>>gtpt;
	for( int i=0; i<n;i++){
		if(a[i]==gtpt){
			dem++;
			cout<<"GT phan tu cua "<<gtpt<< " nam trong mang "<<"a["<<i<<"] ";
		}
	} 
	if(dem==0)
		cout<<"Khong tim duoc gia tri cua "<<gtpt<<endl;
	else
		cout<<"GT phan tu cua "<<gtpt<< "xuat hien "<<dem <<" lan";
}
void hv(int &a,int &b)
{
	int tam;
	tam=a;
	a=b;
	b=tam;
}
void sx(int a[],int n)
{
	cout<<"Mang ban dau: ";
	for(int i=0; i<n;i++){
		cout<<a[i];
		if(i<n-1)
			cout<<", ";
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j])
				hv(a[i],a[j]);
		}
	}
	cout<<"Mang da sap xep theo thu tu tang dan la: ";
	for(int i=0; i<n;i++){
		cout<<a[i];
		if(i<n-1)
			cout<<", ";
	}
}
int main()
{
	const int max=100;
	int a[max],n;
	cout<<"\na) Nhap kich thuoc"<< endl; 
	nhapn(a,n);
	cout<<"\nb) Nhap mang"<<endl;; 
	nhapxuat(a,n);
	cout<<"\nc) Tim phan tu"<<endl; 
	tim(a,n);
	cout<<"\nd) Sx phan tu"<<endl; 
	sx(a,n);
	system("pause");
	return 0;
}
