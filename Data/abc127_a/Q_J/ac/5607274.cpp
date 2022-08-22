#include<bits/stdc++.h>
using namespace std;
int a,b;
int main() {
cin>>a>>b;
if(a>=13)cout<<b<<endl;
else if(a>=6&&a<=12)cout<<b/2<<endl;
else cout<<0<<endl;
return 0;
}
