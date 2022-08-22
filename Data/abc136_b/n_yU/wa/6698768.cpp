#include <bits/stdc++.h>
using namespace std;
int main() {
int N,i,c=0;
cin >> N;
string s = to_string(N);
int l = s.size(), x=N%(int)pow(10,l-1);
if(l%2!=0)
c+=x+1;
N-=x; N/=10;
for(i=1; i<l; i++)
if(i%2!=0)
c+=9*(int)pow(10,i-1);
if(l==1)
c+=N;
cout << c << endl;
}
