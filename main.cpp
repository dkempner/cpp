#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    int g = 0;
    long long c = 0;
    int m = 0;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {

        cin >> g;
        v.push_back(g);
    }

    for (int i = 1; i < n; i++)
    {
        if (v[i] < v[i - 1] || m)
        {
            c += abs(max(v[i - 1], m) - v[i]);
            m = max(m, v[i - 1]);
        }
    }
    cout << c;
}
