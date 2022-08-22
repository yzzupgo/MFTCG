#include <bits/stdc++.h>
using namespace std;
int main(){
int n,l,d;
cin >> n >> l;
if(l>=0){
cout << n*l+n*(n+1)/2-n-l << endl;
}
else if(l+n-1<=0){
cout << n*l+n*(n+1)/2-n-(l+n-1) << endl;
}
else{
for (int i=1; i<n;i++){
if(l+i-1<0&&l+i>=0){
if(abs(l+i-1)>abs(l+i)){
d=l+i;
break;
}
else{
d=l+i-1;
break;
}
}
}
cout << n*l+n*(n+1)/2-n-d << endl;
}
}
