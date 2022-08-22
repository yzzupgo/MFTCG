#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#include <utility>
#include <climits>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
int INF=1<<29;
int main(){
ios::sync_with_stdio(false);
cin.tie(0);
int a,b;
cin>>a>>b;
if(a>=13){
cout<<b<<endl;
}else if(a<=12 && a>=6){
cout<<b/2<<endl;
}else{
cout<<0<<endl;
}
return 0;
}
