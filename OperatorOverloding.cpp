// Operator Overloading
// operator overloading is used to re-difine the nature of operator for non-primitive data type
// There two types of operator overloading.
//1--- unary 2--- binary
//Note--- it is use to solve the complex data type.


/*#include<iostream>
using namespace std;
class Top
{
	int x;
	public:Top(int a)
	{                       // non-primitive data type error
		x=a
	}
};
int main()
{
	Top t1(3);
	Top t2(6);
	cout<<t1+t2;  // error
	
}*/
//}








#include<iostream>
using namespace std;
class top
{
	int a;
	public:top(int x)
	{
		a=x;
	}
	void operator ++()
	{
	
		cout<<a<<"\n";
	}
};
int main(){
	top p(20);
	++p;
}
