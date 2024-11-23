//data member
//#include<iostream>
//using namespace std;
//static int a; // static is  share of data (0)
//
// void show(){
// 	a++;
// 	cout<<a<<"\n";
// }
//int main(){
//	show();//1
//	show();//2   output
//	show();//3
//	
//}
//
//




//#include<iostream>
//using namespace std;
//class Cybrom
//{
//	static int a;
//	public:void show()
//	{
//		a++;
//		cout<<a<<"\n";
//	}
//};
//int Cybrom::a=20;
//int main(){
//	Cybrom c;
//	c.show();
//	c.show();
//	Cybrom g;
//	g.show();
//}


#include<iostream>
using namespace std;
class Cybrom
{
	static int a;
	public:static void show()
	{
		cout<<a<<"\n";
	}
};
int Cybrom::a=10;
int main(){
	Cybrom::show();
	
}
