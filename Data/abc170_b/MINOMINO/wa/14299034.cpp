#include <bits/stdc++.h>
using namespace std;
#define INF 1e18
typedef long long ll;
typedef pair<int, int> P;
int main(){
int a,b;
cin>>a>>b;
for(int i=0;i<=a;i++){
int t=i*2;
int c=b-t;
if(c%4==0){
cout<<"Yes"<<endl;
return 0;
}
}
cout<<"No"<<endl;
return 0;
}
