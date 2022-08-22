#include<bits/stdc++.h>
#define dbug printf("I am here\n");
#define Fast ios_base::sync_with_stdio(false); cin.tie(0);
#define vs           v.size()
#define sot(v)       sort(v.begin(),v.end())
#define rev(v)       reverse(v.begin(),v.end())
#define yes          cout<<"Yes"<<endl
#define no           cout<<"No"<<endl
#define ii           pair<int, int>
#define int          long long
#define ull          unsigned long long
#define pb           push_back
#define mpp          make_pair
#define Okay         0
#define pi           3.14159

const int inf = 1e5+100;
const int cont = 1e18;
const int mod = 1e9+7;
using namespace std;

void solve(){
    int ar[5];
    int fans = 0;
    int that  = 0;
    for(int i=0;i<5; i++){
        cin>>ar[i];
        if(ar[i]%10 != 0 and 10-(ar[i]%10) > that){
                that = 10-(ar[i]%10);
                fans  = ar[i];
        }
    }
    int sum = 0;
    bool f = 0;
    for(int i =0 ;i<5; i++){
        if(ar[i] == fans and !f){
            f = 1;
            continue;
        }
        sum+= ((ar[i]+9)/10)*10;
    }
    cout<<sum+fans<<endl;
}

int32_t main() {
    Fast;
    int tst;
    solve();
    return Okay;
}
