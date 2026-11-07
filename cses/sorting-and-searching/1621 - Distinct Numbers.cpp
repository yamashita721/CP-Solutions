#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    set<ll> m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        m.insert(x);
    }
    ll size = m.size();
    cout << size << endl;

    return 0;
}