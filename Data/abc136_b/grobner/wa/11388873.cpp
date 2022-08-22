#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define INF 1e9
#define PI 3.14159265359
#define MOD 1000000007
#define ALL(v) v.begin(),v.end()
#define ALLR(v) b.rbegin(),v.rend()
typedef long long ll;
int getDigit(int num){
int digit = 0;
while(num!=0){
num/=10;
digit++;
}
return digit;
}
int main() {
int n;
cin >> n;
int count=0;
rep(i,n){
if(getDigit(i)%2==1){
count++;
}
}
cout << count << endl;
}
