#include<iostream>
using namespace std;
class Vehicle{
public:
void vehicle() {
cout<<"i am a vehicle\n";
}
};
class Fourwheeler:public Vehicle{
public:
void fourwheeler() {
cout<<"i have four wheels\n";
}
};
class Car:public Fourwheeler{
public:
void car() {
cout<<"i am a car\n";
}
};
int main() {
Car obj;
obj.car();
obj.fourwheeler();
obj.vehicle();
return 0;
}
