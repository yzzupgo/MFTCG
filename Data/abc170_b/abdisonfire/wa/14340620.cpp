#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<array>
#include<string>
#include<numeric>
#include<set>
#include<unordered_map>
typedef long long ll;
using namespace std;
int main()
{
int x,y;
cin>>x>>y;
if(x*2==y) cout<<"Yes\n";
else if(x*2==(y-2)) cout<<"Yes\n";
else if(x*4==y) cout<<"Yes\n";
else cout<<"No\n";
return 0;
}
