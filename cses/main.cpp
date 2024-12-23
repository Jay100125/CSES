#include <bits/stdc++.h>
using namespace std;

void solve(int n, int a, int c, int b)
{
    if (n == 0)
    {
        return;
    }
    solve(n - 1, a, b, c);
    cout << a << " " << c << endl;
    solve(n - 1, b, c, a);
}
int main()
{
    int n;
    cin >> n;

    cout << pow(2, n) - 1<<endl;

    solve(n, 1, 3, 2);
    return 0;
}