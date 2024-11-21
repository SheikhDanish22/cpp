////OOPs 
//
////class---collection of a data member and member function.
//        // class is a blueprint of on object.
//        // class is user difine data type non-primitive data type.
//
//
//
////Object---- Instance of a class is called an object.
//         //    it is a real world entity  which ocupice space  
//         
//         #include<iostream>
//         using namespace std;
//         class Cybrom 
//         {
//         	
//         	
//		 };
//		 int main()
//		 {
//		 
//		 cout<<sizeof(Cybrom);	
//		 	
//		 }


//1. function declare & define inside a class. 
//2. we can use functin in side the calls two way.

//
//#include<iostream>
//using namespace std;
//class Cybrom
//{
//	int a,b;
//	public:void sum(int x,int y);
//	int cube(int a);
//	
//};
//
// void Cybrom::sum(int x,int y)
//{
//	cout<<x+y<<"\n";
//}
//int Cybrom::cube(int a){
//	cout<<a*a*a<<"\n";
//}
//int main(){
//	Cybrom c;
//	c.sum(4,6);
//	c.cube(5);
//}


//function overloading in a class
//    if a class having more then one function with defrent parameter but function name
//    are same is called funstion overloading.


//#include<iostream>
//using namespace std;
//class Cybrom         // function overloading
//{
//	public:
//		void sum(int a,int b,int c);
//	};
//		void Cybrom::sum(int a,int b,int c)
//		{
//			cout<<a+b+c<<"\n";
//		}
//
//int main(){
//	Cybrom c;
//	c.sum(5,6,7);
//}

// static function banane se object ki jarurat nahi padti
 //   static function is an attribute of a class. and it canbe exix with an without using 
 // of an object. 
//#include<iostream>
//using namespace std;
//class Cybrom         // static function
//{
//	public:
//		void sum(int a,int b,int c);
//	};
//		void static::sum(int a,int b,int c)
//		{
//			cout<<a+b+c<<"\n";
//		}
//
//int main(){
//	Cybrom::sum(6,7,8);
//}




//#include<iostream>
//using namespace std;
//class top  /// single classs
//{
//	int a,b;
//	public:sum(int x,int b)
//	{
//		cout<<x*b;
//	}
//	mul(int c,int y)
//	{
//		cout<<c*y;
//	}
//};
//int main(){
//	top t;
//	cout<<sizeof(t);
//	
//}




/// types of classes----
// there are many types of classes
//1) single class-- if a progrsm having only one class its called single class
//2)anonimos class--- a class which dose nt having its own name is called anonimus calss
// note--in anonimus calss we have to create and object while creating it.
//3)multiple class
//4)composite class


#include<iostream>
using namespace std;
class 
{
	int a,b;
	public:sum(int x,int b)
	{
		cout<<x+b;
	}
	mul(int c,int y)
	{
		cout<<c*y;
	}
} obj;  //anonymous class
int main(){
	
	obj.sum(10,23);
	cout<<"\n";
	obj.mul(10,23);
	
}

