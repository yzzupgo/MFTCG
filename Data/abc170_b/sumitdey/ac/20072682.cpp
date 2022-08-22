#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define vi vector<int>
#define vli vector<long long>
#define pb push_back
#define mp make_pair
#define vpi vector<pair<int,int> >
#define pi pair<int, int>
#define xx first
#define yy second
#define mod 1000000007LL
#define maxn 1000005
using namespace std;
int main()
{
int x,y;
cin>>x>>y;
if((x*4)>=y && y>=(x*2) && y%2==0)
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
}
