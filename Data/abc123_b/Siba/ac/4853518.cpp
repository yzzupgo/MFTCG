#include <bits/stdc++.h>
using namespace std;

int main() {
  int A,B,C,D,E,i,last;
 cin >> A;
 cin >>B;
  cin >>C;
  cin >>D;
  cin >>E;
  last =10;	
 int AA,BB,CC,DD,EE,Count,x;

  if(A%10 !=0){
  AA=A+10-A%10;
    if(last>A%10){ 
 last=A%10;
   Count=1;
  	}
  }
  else{
  AA=A;
  }
  
  
  if(B%10 !=0){
  BB=B+10-B%10;
    if(last>B%10){   
 	last=B%10;
     Count=2;
	 }
  }
  else{
  BB=B;
  }
  
 if(C%10 !=0){
 CC=C+10-C%10;
 if(last>C%10){ 
 last=C%10;
   Count=3;
 }
 }else{
  CC=C;
  }

  
if(D%10 !=0){
  DD=D+10-D%10;
    if(last>D%10){ 
 last=D%10;
     Count=4;
 		}          
     }else{
DD=D;
}

  if(E%10 !=0){
    EE=E+10-E%10; 
 if(last>E%10){   
 last=E%10;
    Count=5;
 }
  }
  else{
    EE=E;
  }

  

  
  if( Count==1){
  x=A+BB+CC+DD+EE;
  }
  
  if( Count==2){
  x=AA+B+CC+DD+EE;
  }
   
  if( Count==3){
  x=AA+BB+C+DD+EE;
  }
  
  if( Count==4){
  x=AA+BB+CC+D+EE;
  }
  
   if( Count==5){
  x=AA+BB+CC+DD+E;
  }

  cout << x << endl;
}