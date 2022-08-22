#include <bits/stdc++.h>
using namespace std;
int main() {
int N,i,c=0;
cin >> N;
string s = to_string(N);
int l = s.size();
for(i=1; i<l; i++)
if(i%2!=0)
c+=pow(10,i)-pow(10,i-1);
if(l%2!=0)
c+=N%(int)pow(10,l-1)+1;
if(l==1)
c=N;
cout << c << endl;
}
