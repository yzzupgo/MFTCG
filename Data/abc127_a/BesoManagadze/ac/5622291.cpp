#include <bits/stdc++.h>
#define int long long
using namespace std;
int a,b;
main(){
cin>>a>>b;
if(a>=13){
cout<<b;
return 0;
}
if(a>=6 && a<=12){
cout<<b/2;
return 0;
}
cout<<0;
return 0;
}
