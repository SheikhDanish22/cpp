#include<iostream>
using namespace std;

class RBI {
	public:
		 virtual void interest_rate()=0; 
		 virtual void repo_rate()=0;   // pure virtual
		 
		 
		 void info(){
		 	cout<<"RBI regular all financial institution\n";
		 }
};

    class SBI:public RBI{
    	public:
    		void interest_rate(){
    			cout<<"SBI interest rate , 7% \n";
			}
			void repo_rate(){
    			cout<<"Repo rate , 7% \n";
    		}
	};
    
int main(){
	RBI *base_pointer;
	SBI sbiobj;
	base_pointer=&sbiobj;
	base_pointer->interest_rate();
	base_pointer->repo_rate();
	base_pointer->info();
}
