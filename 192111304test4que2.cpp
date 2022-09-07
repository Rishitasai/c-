#include <iostream>  
using namespace std;  
class room  
{  
public:  
room()  
    {  
cout<< "This is a room\n";  
    }  
};  
class computer: public room  
{  
public:  
computer()  
    {  
cout<< "This is a computer\n";  
    }  
};  
class programming  
{  
public:  
programming()  
    {  
cout<< "programming is done\n";  
    }  
};  
class code: public computer, public programming  
{  
public:  
code()  
    {  
cout<< "code used in programming in a computer\n";  
    }  
  
};  
int main() { 
    code c;  
    return 0;  
}  

