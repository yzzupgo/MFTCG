#include <bits/stdc++.h>
using namespace std;
int N,L;
int main() {
cin>>N>>L;
int taste=N*(L-1)+(1+N)*N/2-L;
cout<<taste<<endl;
return 0;
}
