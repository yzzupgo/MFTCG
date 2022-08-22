#include <bits/stdc++.h>
#include <string>
#include <cmath>
using namespace std;
int main() {
int x , y,ans =0;
cin >> x >> y;
ans=y-2*x;
if(ans%2==0&&y<=4*x){
cout<<"Yes"<<endl;
return 0;
}else{
cout<<"No"<<endl;
return 0;
}
}
