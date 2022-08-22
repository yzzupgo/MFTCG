#include <bits/stdc++.h>
using namespace std;
int main(){
int N;
int ans=0;
cin >> N;
for(int i=1; i<N+1; i++){
if(i<=1 && i<=9) ans++;
else if(i<=100 && i<=999) ans++;
else if(i<=10000 && i<=99999) ans++;
}
cout << ans << endl;
}
