#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
ios::sync_with_stdio(false);
cin.tie(NULL);
int x,y;
cin >> x >> y;
if((y-2*x)%2 == 0 && x >= (y-2*x)/2)
cout<<"Yes\n";
else
cout<<"No\n";
}
