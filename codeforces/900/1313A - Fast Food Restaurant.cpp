#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    // Read the available portions of dumplings, juice, and pancakes
    vector<int> a(3);
    cin >> a[0] >> a[1] >> a[2];

    // Sort in descending order to optimally distribute pairs
    sort(a.rbegin(), a.rend());

    int count = 0;

    // 1. Prioritize size 1 sets (consumes 1 item each)
    if (a[0] > 0) { a[0]--; count++; }
    if (a[1] > 0) { a[1]--; count++; }
    if (a[2] > 0) { a[2]--; count++; }

    // 2. Prioritize size 2 sets (consumes 2 items each)
    // We strictly follow the descending order matching to ensure we don't prematurely deplete a scarce dish
    if (a[0] > 0 && a[1] > 0) { a[0]--; a[1]--; count++; }
    if (a[0] > 0 && a[2] > 0) { a[0]--; a[2]--; count++; }
    if (a[1] > 0 && a[2] > 0) { a[1]--; a[2]--; count++; }

    // 3. Lastly, the size 3 set (consumes 3 items)
    if (a[0] > 0 && a[1] > 0 && a[2] > 0) { 
        a[0]--; a[1]--; a[2]--; 
        count++; 
    }

    cout << count << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}