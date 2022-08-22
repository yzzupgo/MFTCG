#include<bits/stdc++.h>
using namespace std;
#define faster_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
#define bug(a)       cerr << #a << " : " << a << endl;
template<class T>void ExEuclid(T n, T m, T &a, T &b, T &gcd){if(m==0){gcd=n;a=1;b=0;return;}ExEuclid(m,n%m,a,b,gcd);T x=a;a=b;b=x-(n/m)*a;}
template<class T>T gcd(T n, T m){if(m==0){return n;}gcd(m,n%m);}
template<class T>T lcm(T n, T m){return (n*m)/gcd(n,m);}
template<class T>string to_string(T n){string s="";while(n)s+=((n%10)+'0'),n/=10;reverse(s.begin(),s.end());return s;}
template<class T>ll to_int(T s){ll num=0,power=0;for(int i=s.size()-1; i>=0; i--)num+=(pow(10.0,power++)*(s[i]-'0'));return num;}
template<class T>bool is_mod(T n, T m){if(n%m==0)return true;return false;}
template<class T>bool is_upper(T s){for(int i=0; i<s.size(); i++)if(s[i]>90 || s[i]<65)return false;return true;}
template<class T>bool is_lower(T s){for(int i=0; i<s.size(); i++)if(s[i]>122 || s[i]<97)return false;return true;}
template<class T>T mod(T n, T m){return ((n%m)+m)%m;}
template<class T>T Big_mod(T base, T power, T MOD){
    if(power==1)return base;
    if(power & 1)return ((base%MOD)*(Big_mod(base,power-1,MOD))%MOD)%MOD;
    else {T temp=(Big_mod(base,power>>1,MOD));return ((temp%MOD)*(temp%MOD))%MOD;}
}



int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    faster_io;
    int a[6];
    int ans=0,mn=11;
    for(int i=0; i<5; i++){
        cin>>a[i];
        if(a[i]%10)ans+=ceil(double(a[i])/10.0)*10;
        else ans+=a[i];
        if(a[i]%10)mn=min(mn,a[i]%10);
    }
    if(mn==11)mn=0;
    cout<<ans-10+mn<<endl;
    return 0;
}



