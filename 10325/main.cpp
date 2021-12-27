#include <bits/stdc++.h>
using namespace std;

// Time complexity: O(nm), since m <= 15 -> O(nm) = O(n)
// Space complexity: O(m), since m <= 15 -> O(m) = O(1)
int main() {
    int n, m;
    while (scanf("%d %d", &n, &m) != EOF) {
        vector<int> nums;
        while (m--) {
            int num;
            cin >> num;
            nums.push_back(num);
        }
        int count = 0;
        for (int i = 1; i <= n; i++) {
            bool isDivisible = false;
            for (auto& num : nums) {
                if (i % num == 0) {
                    isDivisible = true;
                    break;  // optional speed-up
                }
            }
            if (!isDivisible) {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
