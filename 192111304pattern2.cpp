#include <iostream>
using namespace std;
void pypart(int n)
{
    int i = 1, j = 0;
    while (i <= n) {
        while (j <= i - 1) {
            cout << i << " ";
            j++;
        }
        j = 0;
        i++;
        cout << endl;
    }
}
int main()
{
    int n = 5;
    pypart(n);
    return 0;
}


