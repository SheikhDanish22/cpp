// Copy Constructor ----  

//#include<iostream>
//using namespace std;
//// Shallow copy--- ak hi adress ko share karta hai , bana rehta hai(in built)
//// deep copy.--- Extra memory or data safe rehta hai isme pointer ka use hota hai.
//class Top
//{
//	int n;
//	public:Top(int a)
//	{
//		n=a;
//	}
//	void Show()
//	{
//		cout<<"Account no="<<n<<"\n";
//	}
//};
//int main(){
//	Top t1(202021);
//	Top t2(t1);//Shallow copy
//	t1.Show();
//	t2.Show();
//}
//
//// shallow copy=== by defaukt class having a shallow copy structure we need not creat it.
//// it share the address the exit new one. object as a parameter (shallow copy)
// classname objectname2 (objectname1)




// Deep Copy
#include<iostream>
using namespace std;
class Top
{
	char *x;
	public:Top(char *n)
	{
		x=new char[20];
		strcpy(x,n);
	}
	void concat(char *s)
	{
		strcat(x,s);
	}
}
