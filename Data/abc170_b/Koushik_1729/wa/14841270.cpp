#include<bits/stdc++.h>
using namespace std;
typedef long long int lng;
#define vint vector<int>
#define vtwod vector<vector<int>>
#define vlng vector<long long int>
#define vstr vector<string>
#define vvint vector<int,int>
#define pint pair<int,int>
#define lint list<int>
#define qint queue<int>
#define dqint deque<int>
#define pq priority_queue<int>
#define rpq priority_queue<int,vector<int>,greater<int>>
#define fl forward_list<int>
#define st stack<int>
#define sint set<int>
#define msint multiset<int>
#define pb push_back
#define pf push_front
#define mp make_pair
#define F first
#define S second
#define ub upper_bound
#define lb lower_bound
#define binsear binary_search
#define popf pop_front
#define popb pop_back
#define empb emplace_back
#define empf emplace_front
#define emp emplace
#define emt empty
#define ins insert
#define insaft insert_after
#define emplaft emplace_after
#define ersaft erase_after
#define swp swap
#define splicaft splice_after
int min3(int a,int b,int c)
{
return min(min(a,b),c);
}
int max3(int a,int b,int c)
{
return max(max(a,b),c);
}
void gcd(int a,int b)
{
cout<<__gcd(a,b)<<endl;
}
void doit()
{
lng x=0,y=0;
cin>>x>>y;
if(y>=2*x && y<=4*x && y%2==0)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(NULL);
doit();
return 0;
}
