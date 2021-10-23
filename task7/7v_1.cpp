#include<iostream>
using namespace std;
void swap (int &a, int &b) 
 {
 int temp;
 temp = a;
 a = b;
 b = temp;
}
 int main( )
 {
 int p, q ;
 cout<<"enter the first : ";
 cin>>p;
 cout<<"enter thes second : ";
 cin>>q;
 cout<<"Before Swapping, Value of : \np = "<<p<<" q = "<<q;
 swap (p, q);
 cout<<"\n Outside Function After Swapping, Value of : \np = "<<p<<" q = "<<q<<"\n";

return 0 ;
 }
