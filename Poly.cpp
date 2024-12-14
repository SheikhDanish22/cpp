// Polymorphism

//#include<iostream>
//using namespace std;
//class RBI
//{
//	public:virtual void msg()
//	{
//		cout<<"\nRBI class\n";
//	}
//};
//class SBI:public RBI
//{
//	public:void msg()
//	{
//		cout<<"\nSBI class\n";
//	}
//};
//class PNB:public RBI
//{
//	public:void msg()
//	{
//		cout<<"\nPNB class\n";
//	}
//};
//int main()
//{
//	RBI *obj;
//	RBI r;
//	obj=&r;
//	obj->msg();
//	SBI s;
//	PNB p;
//	obj=&s;
//	obj->msg();
//}


// pure vartual function
// is iniislize by 0 , a class which contan a pure vartual function is called
// abstract class.and we have to override the pure vartual function in each child 
// class.otherwise it will not allow to alocate the memory object of a child class
#include<iostream>
using namespace std;
class RBI{
	public:
		virtual void helpdesk()=0;
		void fun(){
			cout<<"/n";
		}
};

class SBI:public RBI{
	public:
		void loan(){
			cout<<"\n Interest rate 9%";
		}
		void helpdesk(){
			cout<<"\n May i help you";
		}
};

class Axis:public RBI{
	public:
		void loan(){
			cout<<"\n Interest rate 12%";
		}
		void helpdesk(){
			cout<<"\n May i help you";
		}
};
int main(){
		RBI *r;
		SBI s;
		r=&s;
		r->helpdesk();
		Axis a;
		r=&a;
		r->helpdesk();

return 0;
}
