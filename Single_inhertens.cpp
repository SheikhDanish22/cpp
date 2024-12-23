//Inheritance
// 1) Single level-- do class hoti hai single class ,child class (bottom se top)
// memory pehle perent ko dega then child will be.child ka object banega or parent ko 
// call lar sakte hai.(in a singlae inheritence there are be two class the first 
// calss called perent calss and the second class which inherits the property
// of perent class is called child class.and we create the object of child class
// and with the help of it we can access the data member and member functon of 
// both class
//     class parent class
//     {
//     	.....
//	 };
//	 class child class :public class
//	 {
//	 	....
//	 },
//	 int main(){
//	 	child obj
//	 }
////2)Multi Level
//3)Multipal
//4)Hierarchcal
//5)Hybrid


#include<iostream>
using namespace std; 
class RBI{
	public:RBI()
{
	cout<<"\n RBI Memory";
}
~RBI()
{
	cout<<"\n RBI Dealocat \n";
}
	public:void server()
	{
		cout<<"\n RBI \n";
	}
	};
	class SBI:public RBI{
		public:SBI(){
			cout<<"\n Sbi Memory \n";
		}
		~SBI()
{
	cout<<"\n SBI Dealocat \n";
}
		public :void client()
		{
			cout<<"\n SBI \n";
		}
	};
	
	int main(){
		SBI obj2;
		obj2.client();
		obj2.server();
	}
	
	
