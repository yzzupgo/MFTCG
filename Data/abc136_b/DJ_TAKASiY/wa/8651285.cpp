#include <bits/stdc++.h>
using namespace std;
int main(){
int N;
cin>>N;
int count=0;
for(int s=0;pow(10,s)<N;++s){
if(s%2==0 && pow(10,s+1)<=N){
count=count+(pow(10,s+1)-pow(10,s));
}
else if(s%2==0){
count=count+(N-pow(10,s)+1);
}
}
cout<<count<<endl;
}
