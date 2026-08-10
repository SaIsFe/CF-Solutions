#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define  yes cout<<"YES\n"
#define no cout<<"NO\n"
const int MOD = 1e9+7;
#define pb push_back
bool prime(int n) {
    for (int i = 2; i*i <= n; i++) { // check divisibility up  i=2 to sqrt(n)
        if (n % i == 0) return false;
    }
    return n > 1;
}
int main() {
    optimize();
   // vector<int> p = sieve(n);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    if(prime(n+1))yes;
    else no;
}
}