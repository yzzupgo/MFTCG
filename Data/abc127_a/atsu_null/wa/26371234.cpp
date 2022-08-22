#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <tuple>
#include <cstdint>
#include <cstdio>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <deque>
#include <unordered_map>
#include <unordered_set>
#include <bitset>
#include <cctype>
using namespace std;
#define fir first
#define sec second
#define ll long long
#define ld long double
#define Spn << " " <<
#define rep(i,a,b) for(int i=a ; i<b ;i++)
#define drep(i,a,b) for(int i=a ; i<b ; i--)
#define all(a) (a).begin(),(a).end()
#define allr(a) (a).rbegin(),(a).rend()
void ans1(bool x){if(x) cout<<"Yes"<<endl;else cout<<"No"<<endl;}
void ans2(bool x){if(x) cout<<"YES"<<endl;else cout<<"NO"<<endl;}
void ans3(bool x){if(x) cout<<"Yay!"<<endl;else cout<<":("<<endl;}
template<typename T>
void debug(const T a){
cout << a << endl;
};
template<typename T>
void debug(const T &v,int n){
for(int i=0 ; i<n ; i++)
cout << " " << v.at(i);
cout<<endl;
};
int main(){
int a=0, b=100;
if(13 <= a) debug(b);
else if(6 <= a && a <= 12) debug(b/2);
else debug(0);
return 0;
}
