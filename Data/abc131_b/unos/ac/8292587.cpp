#include <bits/stdc++.h>
using namespace std;
int main(){
int n,l; cin >> n >> l;
if(l<1-n){
cout << (l-1)*n+n*(n+1)/2-(l+n-1)<< endl;
}
else if(l>0){
cout << (l-1)*n+n*(n+1)/2-l<< endl;
}
else{
cout << (l-1)*n+n*(n+1)/2 << endl;
}
}
