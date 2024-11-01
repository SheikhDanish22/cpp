////// there are 2 types of array
////// 1. Numeric Array: get data by number/indexing;
//////a)one dimen.
//////b)two diem.
//////c)multi dime.
////// 2.Associative Array: get data by key & value(pair) ;
////    
////	  
//////#include<iostream>
//////using namespace std;
//////int main(){
//////	int arr[5]={10,3,5,7,8};
//////	int len=sizeof(arr)/sizeof(arr[0]);
//////	cout<<len<<"\n";
//////	char ch[]="welcome";
//////	int len2=sizeof(ch)/sizeof(ch[0]);/// ch always time length 1 jada deta hai.
//////	cout<<len2<<"\n";
//////	}	 
////
////
////
////#include<iostream>
////using namespace std;
////int main(){
////	int cyb[5];
//////	int con=0;
////	cout<<"enter your number:\n";
////	for (int i=0;i<=4;i++){
////		cin>>cyb[i];
////	}
////	cout<<"\n data stored in array\n";
////	for(int i=0;i<=4;i++){
////		cout<<cyb[i]<<"\t";
////	}
////}
////minimum
////#include<iostream>
////using namespace std;
////int main(){
////	int cyb[5];
////	int min;
////	cout<<"enter number:\n";
////	for(int i=0;i<=4;i++){
////		cin>>cyb[i];
////	}
////		min=cyb[0];
////	for(int i=1;i<=4;i++){
////	
////	if(min>cyb[i]){
////		min=cyb[i];
////	}
////			}
////		
////		cout<<"Minval="<<min;
////	}
////	
////#include<iostream>
////using namespace std;
////int main(){
////	int cyb[5];
////	int max;
////	cout<<"enter number:\n";
////	for(int i=0;i<=4;i++){
////		cin>>cyb[i];
////	}
////		max=cyb[0];
////	for(int i=1;i<=4;i++){
////	
////	if(max<cyb[i]){
////		max=cyb[i];
////	}
////			}
////		
////		cout<<"Max="<<max;
////	}
////	
////
////
//
////deliverd 0 in the last of array 
////#include<iostream>
////using namespace std;
////int main(){
////	int arr[]={2,4,0,9,0,7};// two pointer array
////	//int size=sizeof(arr)/sizeof(arr[0]);
////	for (int i=0;i<6;i++){
////		cout<<arr[i]<<" ";
////	}
////	cout<<endl;
////     int j=0;
////	 for(int i=0;i<6;i++){
////	 	if(arr[i]!=0){
////	 		arr[j]=arr[i];
////	 		j++;
////		 }
////	 }	
////	while(j<6){
////		arr[j]=0;
////		j++;
////	}
////	
////	for(int i=0;i<6;i++){
////		cout<<arr[i]<<" ";
////	}
////}
//
//
//
////  uniqe number
//
//#include<iostream>
//using namespace std;
//int main(){
//	int arr[5],j;
//	cout<<"enter 5 number\n";
//	for (int i=0;i<5;i++){
//		cin>>arr[i];
//	}
//	cout<<"\nResult of uniqe value\n";
//	for(int i=0;i<5;i++){
//		for( j=0;j<i;j++){
//			if(arr[i]==arr[j])
//			{
//				break;
//			}
//		}
//		
//			if(i==j){
//				cout<<arr[j]<<"\t";
//			}
//		} 
//		
//	}
//
//

// missing number(1,2,4,5,6)

//#include<iostream>
//using namespace std;
//int main(){
//		int  arr[5];
//		cout<<"enter 5 number\n";
//		for(int i=0;i<5;i++){
//			cin>>arr[i];
//		}		
//	for(int i=0;i<5;i++){
//		
//			if(arr[i+1]-arr[i]>1){
//				
//				cout<<"missing="<<arr[i]+1;
//			break;		
//		}	
//	}
//}

//// squ.root
//#include<iostream>
//using namespace std;
//int main(){
//	int arr[]={2,81,64,8,121};
//	int s;                                  // 
//	s=sizeof(arr)/sizeof(arr[0]);
//	for(int i=0;i<s;i++){
//		
//		int n=arr[i];
//		for(int j=1;j<n/4;j++){
//			if(j*j==n){
//				cout<<n<<"\n";
//			}
//		}
//		
//	} 
//}
//	
//
//	


//// alternative value +
//#include<iostream>
//using namespace std;
//int main(){
//	
//	int a[5];
//   cout<<"enter your number=";
//   for(int i=0;i<5;i++){
//   	cin>>a[i];
//   }
//   int sum=0;
//	for(int j=0;j<5;j=j+2){
//	    sum=sum+a[j];
//		
//		}
//	//	cout<<count;
//	
//	cout<<"sum="<<sum;
//}
//		


// asending oreder (5,7,2,8,4)

//#include<iostream>
//using namespace std;
//
//	
//int main() {
//	
//	int arr[5]={5,7,2,8,4};
//	int s=sizeof(arr)/sizeof(arr[0]);
//	for(int i=0;i<s;i++){
//		cout<<arr[i]<<"\n";
//	}
//    int temp;
//    cout<<
//}
///// reverse
//
////#include<iostream>
////using namespace std;
////int main(){
////	int arr[5];
////	cout<<"enter number=";
////	for(int i=0;i<=4;i++){
////		cin>>arr[i];
////	}
////	for(int i=4;i>=0;i--){
////		cout<<arr[i]<<"\n";
////	}
////	
//}




//2-d array
//
//in a two dimension array we use to subscript[] where 1st [] belog to row and sec[] belong to column.
//mostley database uses table as two dim. array. in a two dim array we use to nested loop
//where 1st loop is dedicated for row and sec loop is dedicated for column it is also call
//metrix.
//  
//  
//  

//#include<iostream>
//using namespace std;
//int main(){
//	int arr[3][3],sum=0;
//	cout<<"enter data";
//	for(int i=0;i<3;i++){
//		for(int j=0;j<3;j++){
//			cin>>arr[i][j];
//			
//		}
//	}
//	
//	cout<<"\n data"<<"\n";
//		for(int i=0;i<3;i++){
//		for(int j=0;j<3;j++){
//		
//			sum=sum+arr[i][j];}
//		}
//		
//			
//		}
//		
//
// 


// important----------

#include<iostream>
using namespace std;
int main(){
//	int arr[3]={45,66,79};
//	cout<<arr[0]<<endl;//*arr;=======45
//	cout<<*(arr+1);
int r,c;
cout<<"Enter size of row\n";
cin>>r;
cout<<"Enter size of column\n";
cin>>c;
int **arr=new int*[r];
for(int i=0;i<r;i++){
	arr[i]=new int[c];
}
cout<<"Enter values\n";
for(int i=0;i<2;i++){
	for(int j=0;j<c;j++)
	{
		cin>>arr[i][j];
	}
}

cout<<"output\n";
cout<<"enter value\n";
for(int i=0;i<2;i++){
	for(int j=0;j<c;j++)
	{
		cout<<arr[i][j]<<"\t";
	}
	cout<<"\n";
}
}


