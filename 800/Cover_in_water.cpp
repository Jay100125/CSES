#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;

        string s;
        cin>> s;
        int ans = 0;
        for(int i = 0; i < n - 2; i++)
        {
            if(s.substr(i,3) == "...")
            {
                ans = 2;
                break;
            }
        }
        if(ans == 0)
        {
            for(int i = 0; i < n; i++)
            {
                if(s[i] == '.')
                    ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}