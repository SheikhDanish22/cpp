// this is example of defaukt constructor.
// default constructor doesnt have parameter.

//#include<iostream>
//using namespace std;
//class Student
//{
//	int a;
//	public:Student(){  // implicit calling //default constructor
//	a=10;	
//		cout<<"Constructor implicit";
//	}
//};
//int main(){
//	Student s;  //autometically call implicit call
//}


//parametrized constroctor
// parametrized constroctor having parameter.
//#include<iostream>
//using namespace std;
//class Login
//{
//	int code=1001;
//	int pwd=2001;
//	public:Login(int c,int p){
//		if(c==code && p==pwd){
//			cout<<"Welcome\n";
//		}
//		else
//		{
//			cout<<"Incorrect pwd\n";
//		}
//	}
//};
//int main(){
//	int code,pwd;
//	cout<<"Enter code\n";
//	cin>>code;
//	cout<<"Enter pwd\n";
//	cin>>pwd;
//	Login l(code,pwd);
//
//	
//}

// constructor overloading.--- if a class having more then one constructor

#include<iostream>
using namespace std;
class Login
{
	int code=1001;
	int pwd=2001;
	public:Login()
	{
		cout<<"Welcome\n";
	}
	public:Login(int c,int p){
		if(c==code && p==pwd){
			cout<<"Welcome\n";
		}
		else
		{
			cout<<"Incorrect pwd\n";
		}
	}
};
int main(){
	int code,pwd;
	cout<<"Enter code\n";
	cin>>code;
	cout<<"Enter pwd\n";
	cin>>pwd;
	Login j;
	Login l(code,pwd);

	
}

