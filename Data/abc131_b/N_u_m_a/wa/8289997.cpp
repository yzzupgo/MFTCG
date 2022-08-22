#include<bits/stdc++.h>
using namespace std;
int main(){
int n;cin>>n;
int L; cin >> L;
vector<int> a(n);
int def=0;
for(int i=0;i<n;i++){
a[i] = L+i;
def+=a[i];
}
int ans = abs(a[0]);
int diff=0;
for(int i=1;i<n;i++){
if(ans>abs(a[i])){
ans=abs(a[i]);
diff=a[i];
}
}
cout << def-diff << endl;
return 0;
}
