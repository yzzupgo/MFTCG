#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define INF 1000000
int main(){
int x,y;
cin >> x >> y;
for(int i=0;i<=x;i++){
for(int j=0;j<=x;j++){
if(2*i + 4*j == y){
cout << "Yes" << endl;
return 0;
}
}
}
cout << "No" << endl;
}
