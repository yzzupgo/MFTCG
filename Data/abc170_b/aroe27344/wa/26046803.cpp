#include <bits/stdc++.h>
using namespace std;
const int INF = 0x3fffffff;
using ll = int64_t;
int main() {
int X,Y; cin >>X>>Y;
for(int i=1;i<101;i++){
for(int j=1;j<101;j++){
if(i+j==X && 4*i+2*j==Y){
cout << "Yes"<<endl;
return 0;
}
}
}
cout<<"No"<< endl;
}
