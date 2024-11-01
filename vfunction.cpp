//////////// function
////////// reusabilty,memory saving,time saving
//////////function-----
//////////1) predefined - string.h,math.h
//////////2) userdefined
////////
////////
//////////,#include<iostream> // c++ ki class library file we can write oney file without .h
//////////using namespace std;
////////////#include<math.h>// c ki header file
//////////int main(){
//////////	int a;
//////////	cout<<"enter number:\n";
//////////	cin>>a;
//////////	cout<<"ans="<<sqrt(a);
//////////	cout<<"\n";
//////////	cout<<"power-:"<<pow(3,2);
//////////}
////////
//////////#include<iostream>
//////////using namespace std;
//////////int main(){
//////////	char c[10]={"welcomesz"};
//////////	
//////////	cout<<c;
//////////}
////////
////////
////////#include<iostream>
////////using namespace std;
////////#include<string.h>
////////int main(){
////////	char c[10];
////////	char v[10];
////////	cout<<"enter pwd\n";
////////	cin>>c;
////////	cout<<"re-enter pwd"<<endl;
////////	cin>>v;
////////	if(strcmp(c,v)==0){
////////		cout<<"pwd match";
////////	}
////////	else{
////////		cout<<"pwd not matched";
////////	}
////////	cout<<"name="<<c<<"\n";
////////	cout<<"reverse="<<strrev(c)<<"\n";
////////	cout<<"lenght="<<strlen(c)<<"\n";
////////	cout<<"upper letter="<<strupr(c)<<"\n";
////////	cout<<"small letter="<<strlwr(c)<<"\n;";
////////	cout<<"marge="<<strcat(c,v)<<"\n";
////////	strcpy(c,v);
////////	cout<<"name="<<c<<"\n";
////////	cout<<"surname="<<v<<"\n";
////////}
//////
//////
////////
////////    user define function
//////// 1) function dose not return value.(non-return function)(void)
////////     without parameter
////////	 with parameter
//////// 2) function return value (return function)
////////     without parameter
////////	 with parameter
//////
//////
////////#include<iostream>
////////using namespace std;
//////////user define function:
////////void show(){
////////	cout<<"welcome";
////////}
////////int main(){
////////	show();
////////}
//////
////////#include<iostream>
////////using namespace std;
////////void show(int a,int b) //formal parameter            value
////////{                                                  //  |
////////	cout<<a+b;
////////}
////////int main(){
////////	show(5,10);// actual parameter(argument)          call by
////////}
//////// 
////////// implicit calling - nahi bulana padta (constructor best example)
////////// explicit calling - bulana padta hai 
////////
////////
////////
////////     	default parameter b=0,1,2,..... 
////////#include<iostream>
////////using namespace std;
////////void show(int a,int b=1) //formal parameter            value
////////{                                                  //  |
////////	cout<<a+b;
////////}
////////int main(){
////////	show(5);// actual parameter(argument)          call by
////////}
////// 
//////// implicit calling - nahi bulana padta (constructor best example)
//////// explicit calling - bulana padta hai 
//////
//////
////////,1,2,..... 
////////#include<iostream>
////////using namespace std;
////////void show(int a=5,int b=1,int c=7) //formal parameter            value
////////{                      // default argument                        //  |
////////	cout<<a+b+c;
////////}
////////int main(){
////////	show();// actual parameter(argument)                         call by
////////}
//////
////////// wap to program square
////////#include<iostream>
////////using namespace std;
////////void sq(int a){
////////
////////     cout<<"ans="<<a*a;	
////////}
////////int main(){
////////	sq(5);
////////}
//////     	 
//////     	 
//////     	 
////////#include<iostream>
////////using namespace std;
////////int f=1;
////////void fac(int n){
////////
////////	for(n; n>0;n--){
////////		f=f*n;
////////	}
////////	
////////} 
////////void display(){
////////	cout<<"factorial="<<f;
////////} 
////////
////////int main(){
////////	int a;
////////	cout<<"enter your number=";
////////	cin>>a;
////////	fac(a);
////////	display();
////////}   	 
//////
//////
//////// wap to program to find out the greatest number between to
//////// swaping using function
//////// wap to to find out the sqare root of any number
//////
//////
//////#include<iostream>
//////using namespace std;
//////int dealer(int petrol)
//////{
//////return 80*petrol;	
//////}
//////int main(){
//////	int cdemand;
//////	cout<<"how much petrol\n";
//////	cin>>cdemand;
//////	cout<<"customer bill="<<dealer(cdemand)+(cdemand*7);
//////}
////
////
////
////#include<iostream>
////using namespace std;
////void swp(int &a, int &b)// call by refrens
////{
////	a=a+b;
////	b=a-b;
////	a=a-b;
////	cout<<"value of a="<<a<<"\n";
////	cout<<"value of b="<<b<<"\n";
////}
////int main()
////{
////	int x,y;
////	cout<<"enter 2 no\n";
////	cin>>x>>y;
////	swp(x,y);// call by value
////	cout<<"Call by refrens \n";
////	cout<<x<<"\n";
////	cout<<y;
////}
//
////#include<iostream>
////using namespace std;
////void arr(int a[],int s){
////	for(int i=0;i<s;i++){
////		a[i]=a[i]+10;
////		cout<<a[i]<<"\t";
////	}
////}
////int main(){
////	int x[]={2,1,3,4,5};
////	int s=sizeof(x)/sizeof(x[0]);
////	arr(x,s);
////	cout<<"\n";
////	for(int i=0;i<s;i++){
////		cout<<x[i]<<"\t";
////	}
////}
////
//
//#include<iostream>
//using namespace std;
//void arr(int a[],int s){
//	for(int i=0;i<s;i++){
//		a[i]=a[i]+10;
//		cout<<a[i]<<"\t";
//	}
//}
//int main(){
//	int x[]={2,1,3,4,5};
//	int s=sizeof(x)/sizeof(x[0]);
//	arr(x,s);
//	cout<<"\n";
//	for(int i=0;i<s;i++){
//		cout<<x[i]<<"\t";
//	}
//}



// function pointer

#include<iostream>
using namespace std;
int Axix(int cardno,int pwd)
{

if(cardno=101 & pwd=1234){


	return 10000;
}
}
int Sbi(int cadno,int pwd){
	return 20000;
}
int main(){
	int (*card)(int ,int);
	card=Sbi;
	int balace=card(3,4);
	cout<<"sbi balance="<<balace;
	card=Axix;

	int balace=card(5,6);
	cout<<"Axix balance="<<balace;
}

