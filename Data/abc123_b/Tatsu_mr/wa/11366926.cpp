#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<(n); i++)
#define pb push_back
#define all(v) v.begin(),v.end()
#define fi first
#define se second
#define bigger (char)toupper
#define smaller (char)tolower
using namespace std;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<vi> vii;
typedef long long ll;
typedef unsigned long long ull;

int main() {
    int A,B,C,D,E;
    cin>>A>>B>>C>>D>>E;
    vi v= {A,B,C,D,E};
    rep(i,5) v.at(i)%=10;
    sort(all(v));
    int a;
    rep(i,5) {
        if(v.at(i)!=0) {
            a=v.at(i);
            break;
        }
    }
    if(A%10!=0) A=(A/10+1)*10;
    if(B%10!=0) B=(B/10+1)*10;
    if(C%10!=0) C=(C/10+1)*10;
    if(D%10!=0) D=(D/10+1)*10;
    if(E%10!=0) E=(E/10+1)*10;
    int counter=A+B+C+D+E;
    cout<<counter-10+a<<endl;
}