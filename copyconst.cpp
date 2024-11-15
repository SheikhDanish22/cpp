// thid (self refrenc )
// obj2(obj1)

/*#include<iostream>
using namespace std;
 class Game{
 	private:
 		string category;
 		string status;
 		int *id;
 		
 		public:
 			Game(string category,string status,int id){
 				this->category=category;
 				this->status=status;
 				this->id=new int;
 				*(this->id)=id;
			 }
			 
			 Game(const Game &obj){
			 	this->category=obj.category;
			 	this->status=obj.status;
			 	//this->id=obj.id;
			 	*(this->id)=*obj.id;
			 }
			 
			 void change_id(int identity){
			 	*id=identity;
			 }
			 void display(){
			 	cout<<"obj id:"<<*id<<endl;
			 	cout<<"category:"<<category<<"status:"<<status<<endl;
			 }
 };
 
 int main(){
 	Game obj1("Team-mate","killed",101);
 	Game obj2(obj1);
 	obj1.display();
 	obj2.display();
 	obj2.change_id(102);
 	obj1.display();
 	obj2.display();
 }*/
 
 
 
 
 #include<iostream>
 using namespace std;
 class School{
 	private:
 		int *roll;
 		string school_name;
 		
 		
 		
 		
 		
 		
 		
 	public:
	 school(int r,string sch){
	 	school_name=sch;
	 	roll=new int;
	 	*roll=r;
	 }	
 		
 		
 		school(const school &s1){
 			school_name s1.school_name;
 			roll =s1.roll;
		 }
		 
		 
		 void change_roll(int d){
		 	*roll=d;
		 }
		 
		 void display(){
		 	cout<<"roll"<<roll<<"school"<<school_name<<endl;
		 }
 };
 
 
 
 int main(){
 	school s1(101,"kvs");
 	s1.display();
 	school s2(s1);
 	s2.display();
 	
 	s2.change_roll(102);
 	s1.display();
 	s2.display();
 }
