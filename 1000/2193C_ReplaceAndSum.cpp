#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define f(i,n)for(int i=0;i<n;i++)
#define iv(v,n) \
vector<long long>v(n);\
f(i,n)cin>>v[i];
#define pb push_back
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define ll long long
#define ff first
#define ss second
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
   int n,q;
   cin>>n>>q;
   ll ans=0;
   vector<ll>a(n),b(n);
   for(int i=0;i<n;i++)cin>>a[i];
   for(int i=0;i<n;i++)cin>>b[i];
     vector<ll> c(n),d(n);
        c[n-1] = b[n-1];
        for(int i=n-2;i>=0;i--){
            c[i] = max(b[i], c[i+1]);
        }

         d[n-1] = a[n-1];
        for(int i=n-2;i>=0;i--){
            d[i] = max(a[i], d[i+1]);
        }
        vector<ll> maxVal(n);
        for (int i = 0; i < n; i++) {
            maxVal[i] = max(a[i], max(d[i], c[i]));
        }
        vector<ll> prefixSum(n);
        prefixSum[0] = maxVal[0];
        for (int i = 1; i < n; i++) {
            prefixSum[i] = prefixSum[i - 1] + maxVal[i];
        }
        while (q--) {
            int l, r;
            cin >> l >> r;
            l--; r--; 

            ll sum;
            if (l == 0) {
                sum = prefixSum[r];
            } else {
                sum = prefixSum[r] - prefixSum[l - 1];
            }

            cout << sum << ' ';
        }
        cout << endl;
    }
}