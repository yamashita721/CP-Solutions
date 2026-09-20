#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int m;
    cin >> m;

    vector<int> p(m);
    for(int i = 0; i < m; i++) {
        cin >> p[i];
    }

    sort(v.begin(), v.end());
    sort(p.begin(), p.end());

    int i = 0, j = 0;
    int count = 0;

    while(i < n && j < m) {

        if(abs(v[i] - p[j]) <= 1) {
            count++;
            i++;
            j++;
        }
        else if(v[i] < p[j]) {
            i++;
        }
        else {
            j++;
        }
    }

    cout << count << endl;

    return 0;
}