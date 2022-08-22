#include <bits/stdc++.h>
using namespace std;
int main() {
int x,y;
cin>>x>>y;
if((y-2*x < 0) || (double)((y-2*x)/2) != (y-2*x)/2) cout<<"No";
else cout<<"Yes"<<endl;
}
