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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        vector<int> first;
        first.push_back(v[0]);
        vector<int> second;
        for (int i = 1; i < n; i++)
        {
            if (first[first.size() - 1] < v[i])
            {
                first.push_back(v[i]);
            }
            else
            {
                second.push_back(v[i]);
            }
        }
        int ans = first.size();
        sort(second.begin(), second.end(), greater<int>());
        int count = 0;
        if (!second.empty())
        {
            count++;
            first.push_back(second[0]);
            for (int i = 1; i < second.size(); i++)
            {
                if (second[i] < first.back())
                {
                    count++;
                }
                first.push_back(second[i]);
            }
        }
        cout << ans + count << "\n";
        for (auto x : first)
        {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}