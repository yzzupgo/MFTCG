    #include <bits/stdc++.h>
            
    typedef long long ll;
    using namespace std;
            
    #define F first
    #define S second
    #define sqr(x) x*x
    #define pb push_back
    #define mp make_pair
    #define sz(x) ((int) (x).size())
    #define all(x) (x).begin(), (x).end()
    #define allr(x) (x).rbegin(), (x).rend()
    #define repit(i, n) for(auto it = n.begin(); it != n.end(); ++it)
        
    const ll mod=1000000007;
    ll powmod(ll a,ll b) {ll res=1;a%=mod; assert(b>=0);for(;b;b>>=1){if(b&1)res=res*a%mod;a=a*a%mod;}return res;}
    ll gcd(ll a,ll b){if(b==0)return a;else return gcd(b,a%b);}
    int lcm(int a,int b){return abs(a*b)/gcd(a,b);}

    bool comp(pair<int,int> a, pair <int, int> b){
        return a.S < b.S;
    }

    int sum;
    vector <int> v;
    vector<int> v1;
    int main(){ios_base::sync_with_stdio(0);cin.tie(0);
        for(int i = 0; i < 5; ++i){
            int x;
            cin >> x;
            v.pb((((x + 9) / 10 ) * 10) - x);
            v1.pb( ( (x + 9) / 10 ) * 10);
        }
        sort(all(v));
        reverse(all(v));
        int sum  = 0;
        for(int i =0; i < v1.size(); ++i){
            sum += v1[i];
        }
        cout << sum - v[0];

    }