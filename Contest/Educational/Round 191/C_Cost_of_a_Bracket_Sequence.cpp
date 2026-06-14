#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int> pre(n + 1, 0), suf(n + 1, 0);
        for (int i = 0; i < n; i++) {
            pre[i + 1] = pre[i] + (s[i] == '(');
        }
        for (int i = n - 1; i >= 0; i--) {
            suf[i] = suf[i + 1] + (s[i] == ')');
        }
        int pos = 0;
        for (int i = 0; i <= n; i++) {
            if (pre[i] + suf[i] < pre[pos] + suf[pos]) {
                pos = i;
            }
        }
        string ans(n, '0');
        for (int i = 0; i < pos && k > 0; i++) {
            if (s[i] == '(') {
                ans[i] = '1';
                k--;
            }
        }

        for (int i = pos; i < n && k > 0; i++) {
            if (s[i] == ')') {
                ans[i] = '1';
                k--;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}