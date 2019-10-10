#include<bits/stdc++.h>
using namespace std;
#define ll long long int
unordered_map<ll,ll> mp;
unordered_map<ll,ll> visited;
unordered_map<ll,ll> parent; 
int main()
{
	// int t;
	// cin>>t;
	// for(int tc=1;tc<=t;tc++)
	// {
	// 	cout<<"Case #"<<tc<<": ";
	// 	ll n;
	// 	cin>>n;
		
	// 	string s;
	// 	cin>>s;
	// 	ll x=1,y=1,currx,curry;
	// 	for(ll i=0;i<s.length();i++)
	// 	{
	// 		if(s[i]=='S')
	// 		{
	// 			currx=x+1;
	// 			curry=y;
	// 			mp[x*n+y]=currx*n+curry;
	// 			x=currx;
	// 			y=curry;
	// 		}
	// 		else if(s[i]=='E')
	// 		{
	// 			currx=x;
	// 			curry=y+1;
	// 			mp[x*n+y]=currx*n+curry;
	// 			x=currx;
	// 			y=curry;
	// 		}
	// 	}
	// 	queue< ll >q;
	// 	q.push(n+1);
	// 	visited[n+1]=1;
	// 	ll qx,qy;
	// 	while(!q.empty())
	// 	{
	// 		ll u=q.front();
	// 		qx=u/n;
	// 		qy=u%n;
	// 		if(qy==0)qy=n;
	// 		if(qy==n)qx-=1;
	// 		q.pop();
	// 		if(qx==n&&qy==n)break;
	// 		if((qx)<1||qx>n||(qy)<1||qy>n)continue;
	// 		if(qx+1<=n&&mp[qx*n+qy]!=((qx+1)*n+qy)&&visited[(qx+1)*n+qy]==0)
	// 		{
	// 			q.push((qx+1)*n+qy);
	// 			visited[(qx+1)*n+qy]=1;
	// 			parent[(qx+1)*n+qy]=qx*n+qy;
	// 		}
	// 		if(qy+1<=n&&mp[qx*n+qy]!=((qx)*n+(qy+1))&&visited[qx*n+qy+1]==0)
	// 		{
	// 			q.push(qx*n+qy+1);
	// 			visited[qx*n+(qy+1)]=1;
	// 			parent[qx*n+qy+1]=qx*n+qy;
	// 		}	

	// 	}
	// 	string s1="";
	// 	x=n,y=n;
	// 	parent[n+1]=-1;
	// 	while(parent[x*n+y]!=-1)
	// 	{
	// 		curry=parent[x*n+y]%(n);
	// 		if(curry==0)curry=n;
	// 		currx=parent[x*n+y]/n;
	// 		if(curry==n)currx-=1;
	// 		if(currx==x-1)s1+='S';
	// 		else if(curry=y-1)s1+='E';
	// 		x=currx;
	// 		y=curry;
	// 	}
	// 	reverse(s1.begin(),s1.end());
	// 	cout<<s1<<"\n";
	// 	mp.clear();
	// 	visited.clear();
	// 	parent.clear();
	// }
	cout<<__gcd(4819,1891);
	return 0;

}