#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &v,int x)
{
    int maxi = 0;
    int n = v.size();
    maxi = max(maxi, v[0]);
    for(int i = 0; i < n-1; i++)
    {
        maxi = max(maxi, v[i+1]-v[i]);
    }

    maxi = max(maxi, 2*(abs(v[n-1] - x)));
    return maxi;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, x;
        cin>>n>>x;

        vector<int> v(n,0);

        for(int i = 0; i < n; i++)
        {
            cin>>v[i];
        }

        cout<<solve(v,x)<<endl;
    }
    return 0;
}