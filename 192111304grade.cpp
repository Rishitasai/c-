#include<iostream>
using namespace std;
int main()
{
int m,c,p,b,total;
float avg;
cout<<"enter tha marks in maths:\n";
cin>>m;
cout<<"enter the marks in chemistry:\n";
cin>>c;
cout<<"enter the marks in physics:\n";
cin>>p;
cout<<"enter the marks in biology:\n";
cin>>b;
total=m+c+p+b;
avg=m+c+p+b/4;
if(avg>75)
cout<<"grade is distinction\n";
else if(avg>60 and avg<75)
cout<<"grade is first class\n";
else if(avg>50 and avg<60)
cout<<"grade is second class\n";
else if(avg>40 and avg<50)
cout<<"grade is third class\n";
else
cout<<"fail";
return 0;
}

