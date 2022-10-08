#include<iostream>
using namespace std;
class A
{
public:
int x,y;
void getdata()
{
cout<<"enter the value of x and y\n";
cin>>x>>y;
}
};
class B :public A
{
public:
void getproduct()
{
cout<<"\nproduct="<<x*y<<endl;
}
};
class C : public A
{
public:
void getsum()
{
cout<<"\nsum="<<x+y;
}
};
int main()
{
B obj1;
C obj2;
obj1.getdata();
obj1.getproduct();
obj2.getdata();
obj2.getsum();
return 0;
}

