#include <iostream>
using namespace std;
int main()
{
    char s;
    int a, b;
    cin >> a >> s >> b;
    switch (s)
    {
    case '+':
        cout << a + b;
        break;
    case '-':
        cout << a - b;
        break;
    
    case '*':
        cout << a * b;
        break;
    case '/':
        cout << a/b;
        break;
    }
    return 0;
}