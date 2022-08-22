#include<bits/stdc++.h>
#define rep(i,n) for(int (i) = 0;(i) < (n);(i)++)
#define SORT(c) sort((c).begin(),(c).end())
#define INF 1000000007
using namespace std;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<char> VC;
typedef vector<bool> VB;
typedef long long ll;
int main(void){
int N,L;cin>>N>>L;
VI a(N);
VI b(N);
int min = 1000,num,sum = 0;
for(int i = 0;i < N;i++){
b[i] = L + i ;
if(b[i] >= 0)num = b[i];
else num = -b[i];
if(num <= min)min = num;
}
for(int t = 0;t < N;t++){
sum +=b[t];
}
cout<<sum - min;
}
