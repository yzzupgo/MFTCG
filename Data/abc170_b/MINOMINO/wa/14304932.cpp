#include <bits/stdc++.h>
using namespace std;
#define INF 1e18
typedef long long ll;
typedef pair<int, int> P;
int main(){
int a,b;
cin>>a>>b;
for(int i=1;i<=a;i++){
int t=i*2;
int c=b-t;
if(c%4==0 && c/4+i==a){
cout<<"Yes"<<endl;
return 0;
}
}
cout<<"No"<<endl;
return 0;
}
