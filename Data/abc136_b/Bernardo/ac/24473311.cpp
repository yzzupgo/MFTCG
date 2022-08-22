#include <bits/stdc++.h>
using namespace std;
int main(){
int N;
int ans=0;
cin >> N;
for(int i=1; i<N+1; i++){
if(1<=i && i<=9) ans++;
else if(100<=i && i<=999) ans++;
else if(10000<=i && i<=99999) ans++;
}
cout << ans << endl;
}
