#include <bits/stdc++.h>
using namespace std;
int main() {
int X;
int Y;
cin>>X>>Y;
bool animal=false;
for(int i=0;i<X;i++){
for(int j=0;j<X;j++){
if(2*i+4*j==Y){
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
