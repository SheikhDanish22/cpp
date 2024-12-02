// ~ with class
// it is used to dealocates the memory of ocupied object.


#include<iostream>
using namespace std;
class Top{
	int x=10;
	public:Top()
	{
		
		cout<<x<<"\n";
	}
	~Top()
	{
		cout<<"Relese memory";
	}
};
int main(){
	Top t;
}
