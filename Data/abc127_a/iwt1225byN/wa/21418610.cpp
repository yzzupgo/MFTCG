#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
ll a,b;
cin >>a >> b;
if(a>=13){
cout << b << endl;
}else if(a>6){
cout << b/2 << endl;
}else{
cout << 0 << endl;
}
}
