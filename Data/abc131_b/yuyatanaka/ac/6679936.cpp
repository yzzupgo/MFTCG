#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
int l;
int sum1 = 0;
int sum2 = 0;
cin >> n;
cin >> l;
for(int i=0;i<n;i++){
sum1 += l + i;
}
if(l >= 0){
cout << sum1-l << endl;
}
else if(l > -n && 0 >= l){
cout << sum1 << endl;
}
else if(-n >= l){
cout << sum1-(l+n-1) << endl;
}
return 0;
}
