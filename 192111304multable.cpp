#include <iostream>
using namespace std;

int main()
{
    int n, range;

    cout << "Enter an integer: ";
    cin >> n;

    cout << "Enter range: ";
    cin >> range;
  if(n>0 && range>0)
{  
    for (int i = 1; i <= range; ++i) {
        cout << n << " * " << i << " = " << n * i << endl;
    }}
else if (n==0 || range==0)
cout<<"0";
    else
      cout<<"invalid";
    return 0;
}
