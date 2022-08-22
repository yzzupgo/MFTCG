#include<bits/stdc++.h>
using namespace std;

int main(){
  int a,b,c,d,e;
  cin>>a>>b>>c>>d>>e;
  vector<int>vec(5);
  vec.at(0)=a;
  vec.at(1)=b;
  vec.at(2)=c;
  vec.at(3)=d;
  vec.at(4)=e;
  int minsum=700;
  
  sort(vec.begin(),vec.end());
  do{

  int sum=0;
    for(int i=0;i<5;i++){
      if(i==4){sum+=vec.at(4);}
      else{
        if(vec.at(i)%10!=0){
        int n=vec.at(i)/10;
          int element=(n+1)*10;
          sum+=element;
        }
        else{sum+=vec.at(i);}
      }
      
    }
    minsum=min(minsum,sum);
    
  }while(next_permutation(vec.begin(),vec.end()));
    cout<<minsum<<endl; 
}
        
        