#include<bits/stdc++.h>
using namespace std;
#define ll int
set<ll> s; 
ll b[104];
int main()
{
   ll t;
    cin>>t;
    for(ll tc=1;tc<=t;tc++)
    {
        cout<<"Case #"<<tc<<": ";
        ll n,l,x,y,z;
        cin>>n>>l;
        ll k=1;
        cin>>x;
        for(ll i=1;i<l;i++)
        {
            cin>>y;
            b[k]=__gcd(x,y);
            if(i==1)
            {
                b[0]=x/b[1];
                s.insert(b[0]);
            }
            x=y;
            s.insert(b[k]);
            k++;
        }
        b[k]=x/b[k-1];
         s.insert(b[k]);
            k++;
        for(ll i=0;i<k;i++)
        {
            // cout<<b[i]<<" ";
                auto it=s.find(b[i]);
                ll diff=distance(s.begin(),it);
                cout<<(char)(diff+65);
            
        }
        cout<<"\n";
        // vector<int> v={3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101,103};
        // for(int i=1;i<v.size();i++)
        //  cout<<v[i]*v[i-1]<<" ";

        s.clear();
    }
    return 0;
}