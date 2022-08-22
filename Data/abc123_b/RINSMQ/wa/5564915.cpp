#include <bits/stdc++.h>
using namespace std;
pair<int,int>pi;
priority_queue<pair<int,int> >que;

int main() {
    //priority_queue<pair<int,int>, vector<pair<int,int> >, greater<pair<int,int> > >que;
    int ans=0;
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    int x = a%10;
    if(x==0) x=10;
    que.push(make_pair(x,a));
    x = b%10;
    if(x==0) x=10;
    que.push(make_pair(x,b));
    x = c%10;
    if(x==0) x=10;
    que.push(make_pair(x,c));
    x = d%10;
    if(x==0) x=10;
    que.push(make_pair(x,d));
    x = e%10;
    if(x==0) x=10;
    que.push(make_pair(x,e));
    int l=0;
    while(que.size()) {
        pair<int,int> p = que.top(); que.pop();
//        cout<<p.first<<"   "<<p.second<<endl;
        int y=p.second%10;
        l = 10-y;
        if(y)
            ans = ans+p.second+(10-y);
        else ans = ans+p.second;
    }
    cout<<ans-l<<endl;
    return 0;
}
