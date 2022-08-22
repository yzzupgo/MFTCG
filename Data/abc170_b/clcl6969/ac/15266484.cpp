#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef long long ll;
typedef pair<int,int> ii;
typedef tree<ii,null_type,less<ii>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;
int main() {
cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
int x,y; cin>>x>>y;
for (int a=0; a<=100; a++) {
for (int b=0; b<=100; b++)
if (a+b==x&&2*a+4*b==y) {
cout<<"Yes";
return 0;
}
}
cout<<"No"<<endl;
return 0;
}
