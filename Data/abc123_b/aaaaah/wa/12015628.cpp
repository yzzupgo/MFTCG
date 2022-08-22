#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;
using P = pair<int,int>;

int main() {
    vector<int> a(5),b(5);
    int mini=10,temp_i,time=0,index=0,count=0;
    rep(i,5) {
        cin>>a[i];
        b[i]=a[i]%10;
        if (b[i]%10!=0) {
            mini=min(mini,b[i]);
            if (mini==b[i]) temp_i=i;
        }
    }
    while(true) {
        if (time%10==0&&count!=4) {
            if (index!=temp_i) {
                time+=a[index];
                index++;
                count++;
                cout<<time<<endl;
            } else {
                index++;
            }
        } else if(time%10==0&&count==4) {
            break;
        } else {
            time++;
            continue;
        }
    }
    time+=a[temp_i];
    cout<<time<<endl;
}