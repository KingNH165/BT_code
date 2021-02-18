#include<iostream>
using namespace std;
bool ktnt(int n)
{
	bool kiemtra=true;
	if(n<2)
	{
		kiemtra= false;
	}
	else if(n>2)
	{
		if(n%2==0)
		{
			kiemtra=false;
		}
		else
		{
			for(int i=2;i<=n-1;i++)
			{
				if(n%i==0)
				{
				kiemtra=false;
				}
			}
		}
	}
	return kiemtra;
}
int ucln(int a, int b)
{
    int r;
    while (a%b!=0)
    {
        r = a%b;
        a = b;
        b = r;
    }
    return b;
}
int bcnn( int a, int b)
{
	int BCNN;
	BCNN=a*b/ucln(a,b);
	return BCNN;
}
int ucln3(int a, int b, int c)
{
	return ucln(ucln(a,b),c);
}
int main()
{
	int n, a, b,c;
	cout<<"a) KT so nguyen to: "<<endl;
	do
	{
		cout<<"Nhap n: ";
		cin>>n;
		if(n<0)
			cout<<"Nhap sai! Nhap lai!";
	}while(n<0);
	if(ktnt(n))
		cout<<n<< "la so nguyen to"<<endl;
	else 
		cout<<n<< "khong la so nguyen to"<<endl;
	cout<<"\nb) Tim UCLN: "<<endl;
	cout<<"Nhap 2 so a va b:";
	cin>>a>>b;
	cout<<"UCLN cua hai so "<<a<< ", "<<b<<" la: "<<ucln(a,b)<<endl;
	cout<<"\nc) Tim BCNN: "<<endl;
	cout<<"BCNN cua hai so "<<a<< ", "<<b<<" la: "<<bcnn(a,b)<<endl;
	cout<<"\nd) Tim UCLN: "<<endl;
	cout<<"Nhap 3 so a, b, c: ";
	cin>>a>>b>>c;
	cout<<"UCLN cua ba so "<<a<< ", "<<b<<", "<<c<<" la: "<<ucln3(a,b,c)<<endl;
	system("pause");
	return 0;
}