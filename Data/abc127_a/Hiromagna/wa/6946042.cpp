#include <bits/stdc++.h>
using namespace std;
int main() {
int a,b,ans;
cin >>a,b;
if(a>12){
ans=b;
}
else if(a>=6&&a<=12){
ans=b/2;
}
else{
ans=0;
}
cout<<ans<<endl;
}
