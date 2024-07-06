#include <iostream>
using namespace std;
int main()
{
    char op;
    int n, a, b;
    cout << "Enter the two numbers:" << endl;
    cin >> a >> b;
    cout << "Enter the operator:" << endl;
    cin >> op;
    switch (op)
    {
    case '+':
        n = a + b;
        cout << "The addition is " << n << endl;
        break;
    case '-':
        n = a - b;
        cout << "The substraction is " << n << endl;
        break;
    case '*':
        n = a * b;
        cout << "The multiplication is " << n << endl;
        break;
    case '/':
        n = a / b;
        cout << "The division is " << n << endl;
        break;
    case '%':
        n = a % b;
        cout << "The modolus is " << n << endl;
        break;
    default:
        cout << "Incorrect operator";
        break;
    }
    return 0;
}