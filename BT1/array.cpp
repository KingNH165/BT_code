#include<iostream>
using namespace std;
const int max=100;
void nhapsonguyen (int a[], int &n)
{
	do
	{
		cout<<"\nNhap kich thuoc mang: ";
	    cin>>n;
		if(n<0||n>100)
			cout<<"Nhap sai! Nhap lai!"<<endl;
	}while(n<0||n>100);
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]= ";
		cin>>a[i];
	}
}
void tinhtb( int a[],int n)
{
	int tong=0;
	cout << "\nMang ban dau: ";
	for(int i =0; i<n;i++){
		cout<<a[i];

		if(i<n-1)
			cout<<", ";
	}
	for(int i=0; i<n; i++){
		tong+=a[i];
	}
	cout<<"\nTrung binh gia tri cua mang = "<<tong/n<<endl;
}
void HV(int &a, int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
void sxt(int a[],int n)
{
	cout << "\nMang ban dau: ";
	for(int i =0; i<n;i++){
		cout<<a[i];
		if(i<n-1)
			cout<<", ";
	}
	for(int i=0;i<n-1;i++)
		for (int j =i+1; j<n;j++)
			if (a[i]> a[j])
				HV(a[i],a[j]);
	cout<<"\nMang duoc sx tang dan la: ";
	for(int i=0;i<n;i++){
		cout<<a[i];
		if(i<n-1)
			cout<<", ";
	}
}
int main()
{
	const int max=100;
	int a[max],n;
	cout<<"- Ham nhap n:";
	nhapsonguyen(a,n);
	cout<<"\n- Ham tinh gia tri trung binh: "<<endl;
	tinhtb(a,n);
	cout<<"\n- Ham sap xep tang dan: "<<endl;
	sxt(a,n);
	system("pause");
	return 0;
}
//hello Hiếu Nguyễn