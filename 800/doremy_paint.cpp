#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n, 0);
        map<int, int> mpp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mpp[v[i]]++;
        }

        if (mpp.size() >= 3)
            puts("No");
        else
        {
            if (std::abs(mpp.begin()->second - mpp.rbegin()->second) <= 1)
            {
                puts("Yes");
            }
            else
            {
                puts("No");
            }
        }
    }
    return 0;
}