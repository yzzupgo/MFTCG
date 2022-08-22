#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;
template<typename T>
void fin (T a){
cout<<a<<endl;
exit(0);
}
template<typename S>
void print(S a){
cout<<a<<endl;
}
int main(){
int x,y;
cin >>x>>y;
if(y%2==0){
if((2*x-y/2)>=0){
fin("Yes");
}else{
fin("No");
}
}else{
fin("No");
}
}
