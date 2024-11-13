#include<iostream>
using namespace std;
int main(){
	int n;
	
	cout<<"enter your table:";
	cin>>n;
	 int table[n];
	 cout<<"enter your table:"<<endl;
	 cin>>table[n];
	 for(int i=1;i<=10;i++){
	 	cout<<table[n]<<" "<<"X"<<" "<<i<<"="<<table[n]*i<<endl;
	 }
}
