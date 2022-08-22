#include<bits/stdc++.h>
using namespace std;
int main(){
int n,z;
cin >> n >> z;
int ans = z-2*n;
if(ans>0&&!(ans%2))cout << "Yes";
else cout << "No";
cout << endl;
}
