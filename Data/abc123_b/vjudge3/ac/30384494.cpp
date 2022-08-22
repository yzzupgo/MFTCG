#include <iostream>
#include <algorithm>
using namespace std;
const int N=1000001;
int q[N];
bool cmp(int a,int b)
{
    if(a%10==0) return a;
    if(b%10==0) return b;
    return a%10>b%10;
}
void solve()
{
    int ans=0;
    for(int i=1;i<=5;i++) scanf("%d",&q[i]);
    sort(q+1,q+1+5,cmp);
    //  for(int i=1;i<=5;i++) cout<<q[i]<<' ';
    cout<<'\n';
    for(int i=1;i<=4;i++)
    {
        ans+=q[i];
        while(ans%10!=0) ans++;
    }
    cout<<ans+q[5]<<'\n';

}

int main()
{
    solve();
}