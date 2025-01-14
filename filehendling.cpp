//wap a program to read a file abc.txt 


/*opening mode
ofstream object --> (mode=flag)
ios::  --> output mode (write mode)
ios :: --> new data overwrite previous data
ios :: (append) --> preserve previous data, u can add ur 
content after previous content. 

#include<iostream>
#include<fstream>
using namespace std;
int main(){
	          ofstream output;
	output.open("abc.txt",ios::out|ios::app);
	output<<"aaaaaa\n";
	output<<"cccc";
	output.close();
}


#include<iostream>
#include<fstream>
using namespace std;
int main(){
	
	ofstream out;
	string name,address;
	string choice;
	out.open("abc.txt",ios::out|ios::trunc);
	out<<setw(20)<<"NAME"<<setw(20)<<"ADDRESS\n";
	while(1){
		cout<<"Enter your name and Address:";
		cin>>name>>address;
		out<<setw(20)<<name<<setw(20)<<address<<"\n";
		cout<<"type 'exit' for exit , otherwise any cha:";
		cin>>choice;
		if(choice=="exit")
		break;
		
	}
	cout<<"record inserted";
	out.close();

}*/



ifstream input;
string data;
input.open("abc.txt");
while(!input.eof()){
	getline(input,data);
	cout<<data<<endl;
}




