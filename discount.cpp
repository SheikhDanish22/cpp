#include<iostream>
using namespace std;
int main(){
	/*int unit,total;
	char choice;
	cout<<"Enter unit:";
	cin>>unit;
	total=unit*100;
	if(total>1000){
		double dis=total*10.0/100;
		cout<<"discount:"<<dis<<endl;
		cout<<"paid:"<<total-dis;
	}
	else{
		cout<<"no discount";
		cout<<total;
	}
	
int a,b,c;
cout<<"enter 2 num:";
cin>>a>>b;
c=b;
b=a;
a=c;	
	cout<<a<<" "<<b;
}*/

int n,n1=0,n2=1,n3;
cout<<"enter rang:";
cin>>n;
cout<<n1<<" "<<n2<<" ";
for(int i=1;i<=n-2;i++){
	n3=n1+n2;
	if(n3%5!=0)

	cout<<n3<<" ";
	n1=n2;
	n2=n3;
}
}
