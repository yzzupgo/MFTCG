#include <bits/stdc++.h>
using namespace std;

int main(){
  int A[6];
  int s[6];
  for(int i=0; i <5 ;i++) cin >> A[i] ;
  int min=10;
  int last=0;
  for(int i=0; i <5 ;i++){
    s[i]=A[i]%10 ;
    if(min>s[i] && s[i] > 0){
      min=s[i];
      last=i;
    }
  }

  int sum=0;
  for(int i=0; i <5 ;i++){
    if(s[i]==0) sum =sum+A[i];
    if(s[i]>0) sum =sum+A[i]+10-s[i];
    if(i==last && s[last]!=0) sum =sum-10+s[i];
  }
 
    
  cout<< sum << endl;
  }
  
