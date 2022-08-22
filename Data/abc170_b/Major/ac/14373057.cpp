#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x,y) cout << #x << "=" << x << "," << #y << "=" << y << endl
void shuru_krte_hai_bina_kisi_bakchodi_ke()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}
const ll mod = 1e9 + 7;
int main()
{
int x,y;
cin>>x>>y;
if(y>4*x || y%2 || y<2*x){
cout<<"No"<<"\n";
}else{
cout<<"Yes"<<"\n";
}
return 0;
}
