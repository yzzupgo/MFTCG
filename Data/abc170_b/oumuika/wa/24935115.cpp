#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
int main(){
int x,y;
cin >> x >> y;
for(int i = 0;i < x;i++){
if(4*x-2*i == y){
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
}
