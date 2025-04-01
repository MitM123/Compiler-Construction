#include <bits/stdc++.h>
using namespace std;

int StringValidation(int symbols, int state, int Istate, int Astate, vector<vector<int>> v, string s)
{
    vector<int> str(s.length());
    for (int i = 0; i < s.length(); i++)
    {
        str[i] = s[i] - 'a';
    }

    int i = Istate;
    for (int j = 0; j < s.length(); j++)
    {
        i = v[i][str[j]];
    }
    if (i == Astate)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int symbols;
    cout << "Enter the Number of input symbols : ";
    cin >> symbols;

    int state;
    cout << "Enter the Number of state : ";
    cin >> state;

    int Istate;
    cout << "Enter the initial state : ";
    cin >> Istate;

    int Astate;
    cout << "Enter the Accepting state : ";
    cin >> Astate;

    vector<vector<int>> v(state, vector<int>(symbols));

    cout << "Transition Table" << endl;
    for (int i = 0; i < state; i++)
    {
        for (int j = 0; j < symbols; j++)
        {
            cout << "Enter the value for " << i + 1 << " " << j << " : ";
            cin >> v[i + 1][j];
        }
        cout << endl;
    }

    string s;
    cout << "Enter the String : ";
    cin >> s;

    int ans = StringValidation(symbols, state, Istate, Astate, v, s);
    cout << ans;

    return 0;
}