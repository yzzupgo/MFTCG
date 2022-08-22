#include <bits/stdc++.h>
using namespace std;
int main() {
int a,b;
cin>>a>>b;
int z=a+b;
if (z>a-b)
z=a-b;
if (z>a*b)
z=a*b;
cout<<z<<endl;
}
