///*-------------(Recursion)--------------
//Function Calling it Self Called Recursion 
//There are Two Type of Recursion
//1) Head Recursion
//2)Tail Recursion
// using method - push and pop 
// stack --- open mouth 
//
//*/
//#include<iostream>
//using namespace std;
//int cybrom(int a)
//{
// if(a<1)	
//{
//     return a;
//}
//cout<<a<<"\n";  //Head Recursion  5,4,3,2,1 fifo
//cybrom(a-1);
////cout<<a<<"\n";  //Tail Recursion  1,2,3,4,5 lifo
//}
//int main()
//{
//	cybrom(5);
//}

//wap to create a table of any number using for loop/using user define function/using 
// recursion



//#include<iostream>
//using namespace std;
//
//void table(int t,int i=1)
//{
//	if(i>10)        //with the help of recursion.
//	{
//		return;
//	}
//	cout<<t*i<<"\t";
//	table(t,i+1);
//}
//
//int main(){
//	int a;
//	cout<<"Enter your number=";
//	cin>>a;
//	table(a);
//}


//write a program factorial using recursion
//
//#include <iostream>
//using namespace std;
//
//int factorial(int n) {
//    if (n <= 1) {
//        return 1;
//    } else {
//        return n * factorial(n - 1);
//    }
//}
//
//int main() 
//    int n;
//    cout << "Enter number: ";
//    cin >> n;
//    cout << "Factorial of " << n << " = " << factorial(n) << endl;
//
//}



//#include<iostream>
//using namespace std;
//int fact(int a)
//{
//	if(a==1){
//		return 1;
//	}
//	return fact(a-1)*a;
//}
//int main(){
//	int n;
//	cout<<"Enter number";
//	cin>>n;
//	cout<<"Fact="<<fact(n);
//}


// febonacci seriess

//find the and tarm using recursion
//#include<iostream>
//using namespace std;
//int fact(int a)
//{
//	if(a<=1){
//		return 1;
//	}
//	return fact(a-1)+fact(a-2);
//}
//int main(){
//	int n;
//	cout<<"Enter number";
//	cin>>n;
//	cout<<"Fact="<<fact(n);
//}


#include<iostream>
using namespace std;
int pow(int b,int p){
	if(b==0){
		return 0;
	}
	if(p==0){
		return 1;
	}
	int ans=b*pow(b,p-1);
	return ans;
}
int main(){
	int b,p;
	cout<<"enter base value\n";
	cin>>b;
	cout<<"ans\n";
	cin>>p;
	pow(b,p);
}
