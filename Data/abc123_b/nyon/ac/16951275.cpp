#include<bits/stdc++.h>
using namespace std;

#define rep(i,n)  for(int i=0;i<n;++i)
#define sc1(a)  scanf("%d",&a)


int main(){
    int a,m=10,ans=0;
    rep(i,5) {
        sc1(a);
        int c=a%10;
        ans+=(a+(c>0?10-c:0));
        if (c!=0) m=min(m,c);
    }
    printf("%d\n",ans+(m==0?0:m-10));
    return 0;
}
