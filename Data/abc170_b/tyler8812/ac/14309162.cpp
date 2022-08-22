#include <bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(false);
cin.tie(0);
double a, b;
cin>>a>>b;
double a1, a2;
a1 = (b - 2 * a) / 2.0;
a2 = a - a1;
if(a1 >= 0 && a2 >= 0 && a1 == int(a1) && a2 == int(a2)){
cout<<"Yes"<<endl;
}else{
cout<<"No"<<endl;
}
return 0;
}
