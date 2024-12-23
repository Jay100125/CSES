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
        n--;
        int sum = 0;

        while(n--)
        {
            int x;
            cin>>x;
            sum += x;
        }
        if(sum < 0)
        {
            cout<<abs(sum)<<endl;
        }
        else
            cout<<-1*sum<<endl;
    }
    return 0;
}