#include <bits/stdc++.h>
using namespace std;
int main(){
int n,l,answer;
cin >> n >> l;
answer = n * l;
for(int i; i < n; i++){
answer += i;
}
if(l < 0 && l < -n)
answer -= (l + n -1);
if(l > 0)
answer -= l;
cout << answer << endl;
}
