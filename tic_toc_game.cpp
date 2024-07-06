#include <iostream>
#include <string>
using namespace std;

bool chech_winner(char v[9])
{
    int winpat[8][3] =
        {
            0,1,2, 
            0,3,6,
            6,7,8,
            2,5,8,
            1,4,7,
            3,4,5,
            0,4,8,
            2,4,6,
        };
    for (int x = 0; x < 8; x++)
    {

        int a = winpat[x][0];
        int b = winpat[x][1];
        int c = winpat[x][2];
        if (v[a] != ' ' && v[b] != ' ' && v[c] != ' ')
        {
            if ((v[a] == v[b]) && (v[b] == v[c]) && (v[a] == v[c]))
            {   
                return 1;
            }
        }
    }
    return 0;
}

bool ans()
{
    cout << "The game is start: " << endl;
    bool b = true;
    int i;
    char v[9];
    int q;
    cout<<"See the index for the reference "<<endl;
    for (q = 0; q < 9; q++)
    {   
        v[q] = ' ';
        cout << q;
        if (q == 2 || q == 5 || q == 8)
            cout << endl;
    }

    int count = 0, count2 = 0;
    for (int r = 0; r < 9; r++)
    {    if (count % 2 == 0)
          cout<<"It's your turn X"<<endl;
                
         else
          cout << "It's your turn O"<<endl;
        
            
        cin >> i;
        if (i >= 0 && i < 9 && v[i] == ' ')
        {
            if (b)
            {
                v[i] = 'X';
                b = false;
            }
            else
            {
                v[i] = 'O';
                b = true;
            }
            for (int n = 0; n < 9; n++)
            {
                cout << v[n] << " ";
                if (n == 2 || n == 5 || n == 8)
                    cout << endl;
            }
            count++;
        }
        else
        {
            cout << "Enter a valid index" << endl;
            r--;
        }
        bool t = chech_winner(v);
        if (t == true)
        {
            if (count % 2 == 0)
            {
                cout << "congraturation! The winner is O" << endl << endl;
                return 1;
                count2++;
            }
            else
            {
                cout << "congraturation! The winner is X" << endl << endl;
                count2++;
                return 1;
            }
        }
        else
        {
            if (count != 9)
                cout << "The game is ongoing " << endl;
            else
            {
                cout << "The game is draw" << endl << endl;
                return 1;
            }
        }
    }
}

int main()
{
    string s;
    int x = 1;
    ans();
    while (x != 0)
    {
        cout << "Want to play more rounds" << endl << endl;
        cout << "YES or NO " << endl;
        cin >> s;
        if (s[0] == 'y' or s[0] == 'Y')
            ans();
        else
        {   cout<<"Thank you for playing my game! Have a great day";
            x = 0;
        }
    }

    return 0;
}