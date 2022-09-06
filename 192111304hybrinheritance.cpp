#include<iostream>
using namespace std;
class vehicle
{
public:
vehicle()
{
cout<<"this is vehicle\n";
}
};
class car:public vehicle
{
public:
car()
{
cout<<"this is a car\n";
}
};
class racing
{
public:
racing()
{
cout<<"this is for racing\n";
}
};
class audi:public car,public racing
{
public:
audi()
{
cout<<"audi is a racing car\n";
}
};
int main(){
audi A;
return 0;
}
