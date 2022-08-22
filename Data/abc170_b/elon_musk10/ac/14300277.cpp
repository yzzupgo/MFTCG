#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int x,y;
cin>>x>>y;
int t=y-2*x;
if((t>=0) && (t%2==0) && (t/2>=0) && (t/2<=x))
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
return 0;
}
