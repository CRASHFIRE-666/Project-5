#include <iostream>
using namespace std;
int main()
{
    int x, a, b;
    
    cin >> x;
    a = x % 10 * 10;
    b = x / 10;
    
    if (a == 0)
    {
        cout << 0 << a + b << endl;
    }
    else
    {
        cout << a + b << endl;
    }
   
    return 0;
}
