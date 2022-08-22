#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y;cin >> x >> y;
for(int t=0;t<=x;t++){
if(t*4+(x-t)*2==y){
cout << "Yes";
return 0;
}
}
cout << "No";
}
