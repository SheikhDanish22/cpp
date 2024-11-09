/*#include<iostream>
using namespace std;
int main(){
	
	int marks[4][3]={{12,23,45},{67,89,89},9,78,67};//reprasent of row {}
	cout<<marks[1][1]<<endl;
	cout<<marks[2][1]<<endl;
	cout<<marks[3][2]<<endl;
	marks[1][1]=25;
	cout<<marks[1][1];
}*/
//int marks[4][3]={12,23,45},{67,89,89},9,78,67,45}error throw
// write a program 2-d array and display.

/*#include<iostream>
using namespace std;
int main(){
		int row,column;
	cout<<"Enter row and column:";
	cin>>row>>column;
	int marks[row][column];
	for (int i=0;i<row;i++){
		for(int j=0;j<column;j++){
			cout<<"enter data for index:"<<i<<":";
			cin>>marks[i][j];
		}
	}
	for(int i=0;i<row;i++){
		for( int j=0;j<column;j++){
			cout<<"marks at index"<<" "<<i<<" "<<j<<"="<<marks[i][j]<<endl;
		}
	}
}*/


 /* //ABC $ DEF $ .......
  #include<iostream>
  using namespace std;
  int main(){
  
int count=1;
for(char i='A';i<='Z';i++)
cout<<i;
if(count%3==0)
cout<<"$";
count++;
}
*/


/* 1	5   1
	2	6	9
	1	11	2       row wise sum
	
	#include<iostream>
	using namespace std;
	int main(){
		int arr[3][3]={1,5,1,2,6,9,1,11,2};
		int sum;
		for(int i=0;i<3;i++){
		int sum=0;
		for(int j=0;j<3;j++){
			cout<<arr[i][j]<<" ";
			sum=sum+arr[i][j];
		}
		cout<<"-----"<<sum<<endl;
	}
	}*/
	
 //susum of coulmn	
/*#include<iostream>
	using namespace std;
	int main(){
		int arr[3][3]={1,5,1,2,6,9,1,11,2};
		int sum;
		for(int i=0;i<3;i++){
		int sum=0;
		for(int j=0;j<3;j++){
			cout<<arr[j][i]<<" ";
			sum=sum+arr[j][i];
		}
		cout<<"-----"<<sum<<endl;
	}
}
*/

	
	
	/*#inlude<iostream>
	using namespace std;
	int main(){
		int arr[3][3]={1,5,1,2,6,9,1,11,2};
		for(i=0;i<3;i++){
			for()
		}
		
	}*/
	
		


// string 

/*#include<iostream>
using namespace std;
int main(){
	
	char name[6]={'d','a','n','i','s','h'};
	cout<<name<<endl;
	char name1[6]={'a','j','a','y','\0','d'};
	cout<<name1<<endl;
	char name2[6]="arjun";//update 1 chr.always time
	cout<<name2<<endl;
	string name3="arjun";
	cout<<name3;
}*/


/*#include<iostream>
using namespace std;
int main(){
	string name;
	cout<<"Enter your name";
	//cin>>name;
	getline(cin,name);
	cout<<name;
}
*/



/*#include<iostream>
using namespace std;
int main(){
	string fruit="pineapple",new_string="";
	int size=fruit.size();
	cout<<size<<endl;
	new_string=new_string+"now";
	cout<<new_string<<endl;
	new_string=new_string+"or never";
	cout<<new_string<<endl;
}
*/


/*#include<iostream>
using namespace std;
int main(){
	string fruit,reverse="";
	cout<<"Enter your string:";
	cin>>fruit;
	int size=fruit.size();
		for(int i=size-1;i>=0;i--){
			reverse=reverse+fruit[i];
		}
		
		if(fruit==reverse){
		
		cout<<"palindrome";
	}
		else{
		
		cout<<"not";
			}
			
		
			
}*/



/*#include<iostream>
using namespace std;
int main(){
	
	string str="apple is good";
	 int size=str.size();
	 for(int i=0;i<size;i++){
	 	if(str[i]=='p' || str[i]=='o'){
	 		str[i]='$';
		 }
}
cout<<str;
}*/


/// karna hai
/*#include<iostream>
using namespace std;
int main(){
	int arr[3][3]={1,2,3,4,5,6,7,8,9};
	int temp[3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			temp[j]=arr[i][j];
		}
		if(i==1)
		break;
	}
}*/

/* 1  1  2      5  5  1  
   5  6  7   +  2  4  6 
   1  2  5      7  1  3
#include<iostream>
using namespace std;
int main(){
	int arrA[3][3]={{1,1,2},{5,6,7},{1,2,5}};
	int arrB[3][3]={{5,5,1,},{2,4,6,},{7,1,3}};
	int arrc[3][3];
	for(int i=0;i<3;i++){
		for( int j=0;j<3;j++){
			arrc[i][j]=arrA[i][j]+arrB[i][j];
			cout<<arrc[i][j]<<" ";
		}
		cout<<endl;
	}
	
}*/

#include<iostream>
using namespace std;
int main(){

int arr[8]={34,56,23,34,4,34,56,9};
int new_arr[8]={arr[0]};
int i=1; 
bool found;
   for(int j=1;j<8;j++){
	found=false;
	for(int k=0;k<i;k++){
		if(arr[j]== new_arr[k]){
			found=true;
			break;
		}
	}	
	if(found==false){
		new_arr[i]=arr[j];
		i++;
	}
	
	for(int j=0;j<i;j++)
	{
		cout<<new_arr[j]<<" ";
	}
}
}






	
	
	 
	 

