#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define fi first
#define se second
#define P pair<int,int>
#define mp(a,b) make_pair(a,b)
#define pb(a) push_back(a)


int main(){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int sum=0,minx=10;

    for(int i=0;i<5;i++){
        int a; cin>>a;
        sum+=(a+9)/10*10;
        minx=min(minx,(a%10 ? a%10:10));
    }

    cout<<(minx==10 ? sum:sum-10+minx)<<"\n";

    return 0;
}