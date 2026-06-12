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
   ll a,b,x;
   cin>>a>>b>>x;
   if(a==b){
    cout<<0<<endl;
    continue;
   }
   if(x==1){
    cout<<abs(a-b)<<endl;
    continue;
   }
   ll ans=abs(a-b);
   ll vala=a,op1=0;
   while(true){
    ll valb=b,op2=0;
    while(true){
        if(valb<=vala){
            ans=min(ans,(op1+op2)+(vala-valb));
            break;
        }
        valb=valb/x;
        op2++;
    }
    if(vala==0)break;
    op1++;
    vala=vala/x;
   }
    ll B=b,opb=0;
    while(true){
        ll A=a,opa=0;
        while(true){
            if(A<=B){
                ans=min(ans,opa+opb+B-A);
                break;
            }
            opa++;
            A/=x;
        }
        if(B==0)break;
        B/=x;
        opb++;
    }
   cout<<ans<<endl;
    }
}