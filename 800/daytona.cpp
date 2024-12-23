#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;

        vector<int> v(n,0);
        unordered_map<int,int> mpp;

        for(int i = 0; i < n; i++)
        {
            cin>>v[i];
            mpp[v[i]]++;
        }

        if(mpp.find(k) != mpp.end())
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}