#include<bits/stdc++.h>
#define li long long int
#define pb push_back
using namespace std;
int main(){
li n , count1=0 ,t;
cin>>n;
while(n--){
t=n;
li count =0;
while(t){
t=t/10;
count++;
}
if(count%2!=0)
count1++;
}
cout<<count1<<endl;
}
