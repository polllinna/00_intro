#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    
    c = (a + b) * (a + b) + (a - b) * (a - b) - 3*a*b;
    cout << "c = " << c;
    return 0;
}
