#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
int A,B;
cin >> A >> B;
int ans=0;
if(A>=13)ans=B;
else if(A<=12 && B>=6)ans=B/2;
cout << ans << endl;
}
