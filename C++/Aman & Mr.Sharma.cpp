#include<iostream>
using namespace std;
int main ()
{
 long int n,x,count=0;
 double q,z;
 int am[100000],r[1000000];
	
	cin>>n;
	for (int i=0;i<n;i++)
{	cin>>r[i];
	cin>>am[i];
	
    z=44*r[i];
    q=z/7;
    x=100*am[i];
    if (x>=q)
    count=count+1;
}
cout<<count;
cout<<"happy hacking";
    
	return 0;}
