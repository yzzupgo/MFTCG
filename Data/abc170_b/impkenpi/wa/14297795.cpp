#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);++i)
using namespace std;
int main(){
int x,y;
cin >> x >> y;
rep(i,x){
if( (2*i) == (y-2*x)){
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
return 0;
}
