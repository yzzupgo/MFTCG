#include <bits/stdc++.h>
	#include <cstdio>
	#include <cstring>
	#include <cmath>
	#include <cstring>
	#include <chrono>
	#include <complex>
	#define endl "\n"
	#define ll long long int
	#define vi vector<int>
	#define vll vector<ll>
	#define vvi vector < vi >
	#define pii pair<int,int>
	#define pll pair<long long, long long>
	#define mod 1000000007
	#define inf 1000000000000000001;
	#define all(c) c.begin(),c.end()
	#define mp(x,y) make_pair(x,y)
	#define mem(a,val) memset(a,val,sizeof(a))
	#define eb emplace_back
	#define f first
	#define s second
	
	using namespace std;
	int main()
	{
		// cin.ignore(); must be there when using getline(cin, s)
		int sum,temp,m=11;
		for (int i = 0; i < 5; ++i)
		{
			cin>>temp;
			if(temp%10!=0)
				m=min(m,temp%10);
			sum+=(int)ceil(temp/10.0);
		}
		cout<<(sum-1)*10+(m==11?10:m);
	}