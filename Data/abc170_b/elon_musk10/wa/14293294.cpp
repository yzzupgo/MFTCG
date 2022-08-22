#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int x,y;
cin>>x>>y;
int t=2*x-y;
if(t>=0 && t%2==0)
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
return 0;
}
