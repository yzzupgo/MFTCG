#include <bits/stdc++.h>
using namespace std;
int main() {
int N, L;
cin>>N>>L;
int total = N * (L - 1);
for(int i=1; i<N+1; i++) {
total = total + i;
}
if(L<=0 && L+N-1>=0) {
cout<<total<<endl;
} else if(L>0 && L+N-1>0) {
cout<<total-L<<endl;
} else if(L<0 && L+N-1<0) {
cout<<total-(L+N-1)<<endl;
}
return 0;
}
