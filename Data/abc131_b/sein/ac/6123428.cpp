#include<bits/stdc++.h>
using namespace std;
int main(){
int n,l;
cin >> n >> l;
if (l>=0){
cout << ((l+n-1) + l+1) * (n-1) /2 << endl;
}
else if (l+n-1<=0){
cout << ((l+n-2) + l) * (n-1) / 2 << endl;
}
else{
cout << ((l+n-1) + l) * n /2 << endl;
}
}
