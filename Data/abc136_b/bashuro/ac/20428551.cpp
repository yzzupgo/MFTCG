#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define PI 3.14159265359
int main(){
int n;cin >> n;
int ans=-1;
for(int i=0;i<n+1;i++){
if(to_string(i).size()%2==1)
ans++;
}
cout << ans << endl;
}
