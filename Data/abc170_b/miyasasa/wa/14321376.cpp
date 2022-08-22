#include <bits/stdc++.h>
using namespace std;
int main() {
int hiki,asi;
cin>> hiki >>asi;
int sa =asi-hiki*2;
if (hiki*2<=asi && hiki*4>=asi && sa%2==0){
cout<<"yes"<<endl;
}
else{
cout<<"no"<<endl;
}
}
