#include<bits/stdc++.h>
using namespace std;
#define int long long
#define rep(x,y) for(int i=x;i<y;i++)
#define REP(x,y) for(int j=x;j<y;j++)
#define Rep(x,y) for(int k=x;k<y;k++)
#define str string
#define pb() push_back()
#define all(x) x.begin(),x.end()
#define elif else if
#define mod 100000007
#define vint vector<int>
#define vvint vector<vector<int>>
#define vc vector<char>
#define vvc vector<vector<char>>
#define vool vector<bool>
#define vtr vector<str>
#define vvtr vector<vector<str>>
#define qint queue<int>
#define qtr queue<string>
#define qc queue<char>
#define pint pair<int,int>
#define pic pair<int,char>
#define pci pair<char,int>
#define pis pair<int,str>
#define psi pair<str,int>
#define pcc pair<char,char>
#define pss pair<str,str>
#define mp make_pair
#define mint map<int,int>
#define mic map<int,char>
#define mci map<char,int>
#define mis map<int,str>
#define msi map<str,int>
signed main(){
int N,M,X,count=0,count2=mod,k=0;
double d,D;
int alph='A'-'a';
char op,Ch;
str S,T;
cin>>N>>M;
vint aji(N-1);
M-=1;
rep(0,N-1){aji[i]=M+=1;count+=aji[i];if(abs(aji[i])<count2)count2=abs(aji[i]);}
if(count<0)cout<<count+count2<<endl;
else cout<<count-count2<<endl;
}
