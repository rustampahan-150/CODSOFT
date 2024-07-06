#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(time(0));
    int ran = rand() % 100;
    cout << ran << endl;
    int n;
    cout << "Guess a number between 0 to 99" << endl;
    do
    {
        cin >> n;
        if (ran > n)
            cout << "The guessed number is too small" << endl;
        else if (ran < n)
            cout << "The guessed number is too large" << endl;
        else
            cout << " congratulation! you guessed the correct number " << endl;

    } while (n != ran);
    return 0;
}