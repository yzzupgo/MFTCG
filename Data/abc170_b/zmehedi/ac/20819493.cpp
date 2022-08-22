#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main(){
int x,y;
cin>>x>>y;
if(y % 2 == 0 && y >= 2*x && y <= 4*x){
cout<<"Yes"<<endl;
}
else{
cout<<"No"<<endl;
}
return 0;
}
