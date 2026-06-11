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
   int n,x,y,z;
   cin>>n>>x>>y>>z;
   int costnoai=(n+(x+y)-1)/(x+y);// formula:(a/b)=(a+b-1)/b
   int costai;
   if(z*x>=n)costai=(n+x-1)/x;
   else{
    int rem=n-z*x;
    costai=z+(rem+(x+10*y)-1)/(x+10*y);
   }
   cout<<min(costai,costnoai)<<endl;
    }
}