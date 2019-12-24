#include <iostream>
using namespace std;
int main()
{
    int x, a, b, c;
    
    cin >> x;
    a = x / 100;
    b = x / 10 % 10 * 100;
    c = x % 10 * 10;
    if (b == 0)
    {
        cout << 0 << a + b + c << endl;
    }
    else
    {
        cout << a + b + c<< endl;
    }
   
    return 0;
}
