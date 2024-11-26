#include<iostream>
using namespace std;
class Bank{

	public:	
	//	string name_of_the_depositor;
	//	int account_number;
	//	string type_of_acc;
		int balance;
		int password;
		int dep;
	
	    
	//	Bank(string name,int ac,string type,int bal,int pw){
        	Bank(int bal ,int pw ,int dp){
	
	
		//	 name_of_the_depositor=name;
		//	account_number=ac;
		//	type_of_acc=type;
			balance=bal;
			password=pw;
			dep=dp;
		}
			
		void inital_value(){
			cout<<"Balance:"<<balance<<endl;
		}	
		void display(){
			cout<<balance;
		}
		
		void Match_pass_deposite( ){
			
			balance=balance + dep;
			cout<<balance;
		}
		
		void display1(){
			cout<<"Enter your password:"<<password;
			cout<<"currnet balance:"<<balance;
			
		}
			
			
};



int main(){
	Bank obj(12000,"ab",3000);
	obj.inital_value();
	obj.display();
	obj.Match_pass_deposite();
	obj.display1();
}
