#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin >> n;
int cnt = 0;
for (int i=1; i<n; i++){
int note = to_string(i).length();
if ( note%2!=0 ){
cnt++;
}
}
cout << cnt << endl;
}
