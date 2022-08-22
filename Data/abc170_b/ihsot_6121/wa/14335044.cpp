#include <bits/stdc++.h>
using namespace std;
int main() {
int X;
int Y;
cin>>X>>Y;
bool animal=false;
for(int i=0;i<X;i++){
for(int j=0;j<X;j++){
int foot=2*i+4*j;
if(foot==Y){
animal=true;
}
if(X==1&&Y==2){
animal=true;
}
if(X==1&&Y==4){
animal=true;
}
}
}
if(animal){
cout<<"Yes";
}
else{
cout<<"No";
}
}
