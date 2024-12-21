//////#include<iostream>
//////using namespace std;
//////class Emp{
//////	int id;
//////	string name;
//////	float bs;
//////	float ns;
//////	public:void Insert_data(){
//////		cout<<"Enter Id=";
//////		cin>>id;
//////		cout<<"Enter Name=";
//////		cin>>name;
//////		cout<<"Enter salary=";
//////		cin>>bs;
//////	}
//////	void Calculate(){
//////		float da=0.52*bs;
//////		float hra=0.32*bs;
//////		ns=bs+da+hra;
//////	}
//////	void net_salary(){
//////		cout<<"Net salary is="<<ns;
//////	}
//////};
//////int main(){
//////	
//////Emp e;
//////e.Insert_data();
//////e.Calculate();
//////e.net_salary();
//////}
////
////
////
////#include <iostream>
////using namespace std;
////
////class MyClass {
////private:
////    int top1, top2; // Private data members
////
////public:
////    // Constructor to initialize the private data members
////    MyClass(int t1, int t2) : top1(t1), top2(t2) {}
////
////    // Friend function declaration to access private data members
////    friend int findMax(MyClass obj);
////};
////
////// Friend function definition
////int findMax(MyClass obj) {
////    // Accessing private members of the class
////    return (obj.top1 > obj.top2) ? obj.top1 : obj.top2;
////}
////
////int main() {
////    // Creating an object of MyClass
////    MyClass obj(10, 20);
////
////    // Calling the friend function to find the max value
////    int maxVal = findMax(obj);
////
////    // Output the result
////    cout << "The maximum value is: " << maxVal << endl;
////
////    return 0;
////}
//  
////#include<iostream>
////using namespace std;
//// class bank{
////  	static int obj,count;
////  	   
////  	public:bank(){
////  		obj++;
////  		count++;
////  		cout<<"total object="<<obj<<"\n";
////  		cout<<"total number of count object="<<count<<"\n";
////	  }
////
////  };
////  
////  int bank::obj=0;
////  int bank::count=0;
////  int main(){
////  	bank obj1;
////  	bank obj2;
////  	bank obj3;
////  	
////  }
//
//
///// obj++
// #include<iostream>
// using namespace std;
//		class Top{
//    int a,b;
//public:
//    Top(int kg,int gram){
//        a=kg;
//        b=gram;
//    }
//    Top operator +(Top obj){
//        Top t(obj);
//        t.a=a+obj.a;
//        t.b=b+obj.b;
//        cout<<"Total kilogram = "<<t.a<<" "<<" Total gram = "<<t. b;
//        return t;
//    }
//};
//
//int main(){
//    Top t1(20,10);
//    Top t2(90,30);
//    t1+t2;
//}


//#include<iostream>
//using namespace std;
//class student{
//  	int rollno;
//  	char name[30];
//  	char grade[3];
//  	public:
//  		void getdata();
//  		void putdata();
//  };
//  void student::getdata(){
//  	cout<<"enter rollno:";
//  	cin>>rollno;
//  	cout<<"enter name:";
//  	cin>>name;
//  	cout<<"enter grade:";
//  	cin>>grade;
//  }
//  void student::putdata(){
//  	cout<<rollno<<" ";
//  	cout<<name<<" ";
//  	cout<<grade<<" ";
//  	cout<<endl;
//  }
//  int main(){
//  	student s[3];
//  	int i;
//  	for( i=0; i<3; i++){
//  		s[i].getdata();
//	  }
//	  cout<<"student's Data--"<<endl;
//	   for(i=0; i<3; i++){
//	   	s[i].putdata();
//	   }
//  	
//  }




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
