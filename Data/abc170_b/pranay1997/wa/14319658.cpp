#include <bits/stdc++.h>
using namespace std;
int main() {
int x,y;
cin>>x>>y;
double t= (y-2*x)/2.0;
double c= (4*x-y)/2.0;
if(t>=0.0&&c>=0.0)
cout<<"Yes";
else
cout<<"No";
return 0;
}
