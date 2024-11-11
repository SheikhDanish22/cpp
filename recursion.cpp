/*-------------(Recursion)--------------
Function Calling it Self Called Recursion 
There are Two Type of Recursion
1) Head Recursion
2)Tail Recursion
 using method - push and pop 
 stack --- open mouth 

*/
#include<iostream>
using namespace std;
int cybrom(int a)
{
 if(a<1)	
{
     return a;
}
cout<<a<<"\n";  //Head Recursion  5,4,3,2,1 fifo
cybrom(a-1);
//cout<<a<<"\n";  //Tail Recursion  1,2,3,4,5 lifo
}
int main()
{
	cybrom(5);
}
