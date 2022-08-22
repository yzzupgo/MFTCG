#include <bits/stdc++.h>
using namespace std;
int main () {
int X, Y;
cin>>X>>Y;
string a="No";
for (int i=0; i<X+1; i++){
if (4*i+2*(X-i)==Y)
a="Yes";
}
cout<<a<<endl;
}
