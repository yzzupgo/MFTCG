#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int A,B,C,D,E;

 cin >> A >>B >>C >>D >>E ;
   int a,b,c,d,e;
   a = A%10;
   b = B%10;
   c = C%10;
   d = D%10;
   e = E%10;

int k;
   k = 10;
   if(k>a && a!=0){k=a;}
   if(k>b && b!=0){k=b;}
   if(k>c && c!=0){k=c;}
   if(k>d && d!=0){k=d;}
   if(k>e && e!=0){k=e;}
  
   if(a==0){a=10;}
   if(b==0){b= 10;}
   if(c==0){c= 10;}
   if(d==0){d= 10;}
   if(e==0){e= 10;}

  cout << (A+B+C+D+E-a-b-c-d-e+40+k);

}