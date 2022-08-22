#include <bits/stdc++.h>
using namespace std;
int main() {
int n,m;
cin >> n >> m;
for(int i=0;i<n+1;i++){
if( (4*i)+(2*(n-i))==m ){
cout << "Yes" << endl;
break;
}
else if (i==n){
cout << "No" << endl;
}
}
}
