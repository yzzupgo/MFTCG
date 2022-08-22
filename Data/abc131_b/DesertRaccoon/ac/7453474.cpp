#include <bits/stdc++.h>
using namespace std;
int main() {
int N ,L; cin>>N>>L;
int ajiall=0;
for(int i=0; i<N; i++){
ajiall+=L+i;
}
int ans=abs(L);
for(int i=0; i<N; i++){
if(abs(ans)>abs(L+i)){
ans=L+i;
}
}
cout<<ajiall-ans<<endl;
}
