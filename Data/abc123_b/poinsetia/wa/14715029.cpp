#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,x) for(int i=0;i<x;i++)
#define put(ans)    cout << ans << endl;
#define reverse(s) reverse(s.begin(),s.end())

int main(){
    int ans(0),small_time(0),first(10);

    rep(i,5){
        int x;  cin >> x;
        string s = to_string(x);
        if(s[s.size()-1]-'0'!=0&&s[s.size()-1]-'0'<first){
            first = s[s.size()-1]-'0';
            small_time = x;
        }

        if(s[s.size()-1]-'0'==0){
            ans += x;
        }else{
            x /= 10;
            x++;
            x *= 10;
            ans += x;
        }
    }

    int dummy_x = small_time;
    dummy_x /=10;
    dummy_x++;
    dummy_x *= 10;
    ans -=  abs(small_time-dummy_x);

    cout << ans << endl;

    return 0;
}