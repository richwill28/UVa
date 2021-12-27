#include <bits/stdc++.h>
using namespace std;

// Time complexity: O(1)
// Space complexity: O(1)
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        long long n;
        cin >> n;
        // Find the positive root of quadratic equation
        cout << (-1 + (long long) floor(sqrt(1.0 + 8.0 * n))) / 2 << endl;
    }
    return 0;
}
