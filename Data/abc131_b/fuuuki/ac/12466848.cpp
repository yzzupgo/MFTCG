#include <bits/stdc++.h>
using namespace std;
int N,L;
int main() {
cin>>N>>L;
int taste=N*(2*(L-1)+1+N)/2;
if (0<L) taste-=L;
else if (L+N-1<0) taste-=L+N-1;
cout<<taste<<endl;
return 0;
}
