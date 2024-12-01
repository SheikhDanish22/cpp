
/*#include<iostream>
using namespace std;
int main(){
	int marks[8]={37,44,5,67,87,36,23,39};
	int n=8;
	for(int i=0;i<n;i++){
		cout<<marks[i]<<" ";
	}
    

   for(int i=0;i<n;i++){
    	if(marks[i]<40){
    		cout<<"failed student index:"<<i<<" " <<"marks"<<marks[i]<<endl;
		}
	}
	for( int i=0;i<n;i++){
		if(marks[i]>=35 && marks[i]<40){
			cout<<"grace given to index"<<i<<"student :"<<40-marks[i]<<endl;
			marks[i]=40;
		}
	}
	
	
	   for(int i=0;i<n;i++){
	   	cout<<marks[i]<<" ";
	   }
}


//array lavel-2    1 questions//
/*#include<iostream>
using namespace std;
int main(){
	int n,temp,i=0;
	cout<<"enter limit:";
	cin>>n;
	int arr[n];
	while(i<n){
		cout<<"enter number:";
		cin>>temp;
		if(temp%2==0){
			arr[i]=temp;
			i++;
		}
	}
		for(int i=0;i<n;i++){
			cout<<arr[i]<<" ";
		}
	}
   
   
   
//{0,1,0,3,12}={1,3,12,0,0}

\*#include<iostream>
using namespace std;
int main(){
	int arr[]={0,1,0,3,12};// two pointer array
	//int size=sizeof(arr)/sizeof(arr[0]);
	for (int i=0;i<5;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
     int j=0;
	 for(int i=0;i<5;i++){
	 	if(arr[i]!=0){
	 		arr[j]=arr[i];
	 		j++;
		 }
	 }	
	while(j<5){
		arr[j]=0;
		j++;
	}
	
	for(int i=0;i<5;i++){
		cout<<arr[i]<<" ";
	}
}*/

#include<iostream>
using namespace std;
int swap(int a,int b){
	cout<<a<<" "<<b<<endl;
	int temp=a;
	 a=b;
     b=temp;
	 cout<<a<<" "<<b;	
}
int main(){
	
	int c,d;
	cout<<"enter your number:";
	cin>>c>>d;
	swap(c,d);
	cout<<"in main-->"<<c<<" "<<d<<endl;	
	
}







