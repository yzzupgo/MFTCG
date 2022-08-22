#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<stack>
#include<list>
#include<queue>
#include<deque>
#include<algorithm>
#include<numeric>
#include<utility>
#include<complex>
#include<functional>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> p;
const int INF = (1 << 28);
int a[5];

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    for(int i=0;i<5;i++) cin>>a[i];
    int ans=0;
    int temp=11;
    for(int i=0;i<5;i++){
        if(a[i]%10<temp) temp=i;
    }
    int temp1=a[temp];
    a[temp]=a[4];
    a[4]=temp1;
    for(int i=0;i<5;i++){
        ans+=a[i];
        if(i==4) break;
        if(ans%10!=0){
            ans=ans+10-ans%10;
        }
    }
    cout << ans<< "\n";
}