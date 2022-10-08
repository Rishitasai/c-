#include<iostream>
using namespace std;
int main()
{
int a;
cout<<"enter the age";
cin>>a;
if(a<18)
{
cout<<" not eligible for vote\n";
cout<<"you are allowed to vote after"<<18-a<<endl;
}
else
{
cout<<"eligible to vote";
}
}
