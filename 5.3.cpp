#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b;
    
    cin >> a >> b;
    
    if (a > b)
    {
        cout << a - b * (a / b) << endl;
    }
    else
    {
        cout << "НЕВЕРНОЕ ЗНАЧЕНИЕ" << endl;
    }
    
    return 0;
}
