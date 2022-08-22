#include "bits/stdc++.h"
#define rep(i,n) for (int i=0; i<(n); ++i)
using namespace std;
using ll =long long;
using P =pair<int,int>;
int main(){
int x,y;
cin >> x >> y;
if(y-2*x<0 or y-2*x%2==1){
cout << "No" << endl;
}
else {
if(4*x-y<0 or 4*x-y%2==1){
cout << "No" << endl;
}
else{
cout << "Yes" << endl;
}
}
return 0;
}
