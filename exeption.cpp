

/*   Runtime Error
#include<iostream>
using namespace std;

int main(){
	int a=200;
	while(1){
		a=a*200;
		cout<<a;
	}
}


#include<iostream>
using namespace std;
int main(){
	
	int num,dino;
	try{
		
		cout<<"Enter numbers:";
		cin>>num;
			
		cout<<"Enter dino:";
		cin>>dino;
		if(dino==0){
			throw dino;
		}
		cout<<"Division"<<num/(double)dino<<endl;
		
	}
	catch(int args){
		cout<<"you enterd dino"<<args<<endl;
		cout<<"dino cant be zero";
	}
}*/

//wap to demonstrate E.H. create a array of size n (user-defined)
//and after that if user want to take access of a Element which is out of
//index throw Execptioption otherwise display valid element at proper index.

#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter your array size=";
	cin>>n;
	
		int arr[n];
		for(int i=0;i<n;i++){
			cout<<"enter index "<<i<<endl;
		}
		
		try{
			
			
			
			
		}
}

