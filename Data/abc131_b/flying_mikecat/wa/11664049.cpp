#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
int n,l;
cin >> n >> l;
int mn=1e9;
int sum=0;
for(int i=0; i<n; i++){
if(mn>l+i+2)mn=l+i+2;
sum+=l+i+2;
}
cout << sum - mn << endl;
}
