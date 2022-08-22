#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define repb(i,a,b) for(int i=a;i>=b;i--)
#define repv(arr) for(auto it=arr[i].begin();it!=arr[i].end();it++)
#define vi vector<int>
#define vb vector<bool>
#define vs vector<string>
#define vl vector<long long int>
#define sortA(arr) sort(arr.begin(),arr.end())
#define search(arr,c) binary_search(arr.begin(),arr.end(),c)
#define pb push_back
#define ll long long
#define LCM(a,b) boost::math::lcm(a,b)
#define cl_bf cin.ignore(numeric_limits<streamsize>::max(), '\n');
int main(){
ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int x,y;
cin>>x>>y;
int flag=0;
rep(i,0,x+1){
if(i*2+(x-i)*4==y)
{cout<<"Yes"<<endl;
flag=1;
break;
}
}
if(flag==0){
cout<<"No"<<endl;
}
}
