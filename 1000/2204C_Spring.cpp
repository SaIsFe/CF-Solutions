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
ll lcm(ll a,ll b){
    return ((a*b)/__gcd(a,b));
}
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
   ll a,b,c,m;
   cin>>a>>b>>c>>m;
ll ABC=m/lcm(a,lcm(b,c)); // tree people get
ll AB=m/lcm(a,b)-ABC; // two people get
ll AC=m/lcm(a,c)-ABC;
ll BC=m/lcm(b,c)-ABC;
ll only_a=m/a-AB-AC-ABC;
ll only_b=m/b-AB-BC-ABC;
ll only_c=m/c-AC-BC-ABC;
cout<<only_a*6+AB*3+AC*3+ABC*2<<' ';
cout<<only_b*6+AB*3+BC*3+ABC*2<<' ';
cout<<only_c*6+AC*3+BC*3+ABC*2<<' ';
cout<<endl;  
}
    }