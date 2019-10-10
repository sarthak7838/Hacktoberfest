#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
	ios_base::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll prices[n+1];
		for(ll i=0;i<n;i++){
			cin>>prices[i];
			prices[i]/=100;
		}
		sort(prices,prices+n,greater<int>());
		ll x,a,y,b;
		ll k;
		cin>>x>>a>>y>>b>>k;
		if(x<y){
			swap(x,y);
			swap(a,b);
		}
		ll lcm=a*b/__gcd(a,b);
		ll sum=0,u1=0,u2=0,u3=0;	
		ll lo=0,hi=n+1;
		while(hi-lo>1)
		{
			ll len=(lo+hi)/2;
			sum=0,u1=0,u2=0,u3=0;

			for(ll i=1;i<=len;i++){
				if(i%a==0&&i%b==0)u1++;
				else if(i%a==0)u2++;
				else if(i%b==0)u3++;
			}

			for(ll i=0;i<u1;i++){
				sum+=prices[i]*(x+y);
			}
			for(ll i=0;i<u2;i++){
				sum+=prices[i+u1]*x;
			}
			for(ll i=0;i<u3;i++){
				sum+=prices[i+ u1+ u2]*y;
			}
			//cout<<"Sum: "<< sum<<" Hi: "<< hi<<endl;
			if(sum>=k)
				hi=len;
			else
				lo=len;

		}		
		if(hi>n)hi=-1;
		cout<<hi<<"\n";
	}
	return 0;
}