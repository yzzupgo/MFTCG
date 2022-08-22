#include <iostream>
using namespace std;
int main(void){
   int l[5];
   int k=10,f=10,t=0;
   cin>>l[0];cin>>l[1];cin>>l[2];cin>>l[3];cin>>l[4];
   for(int i=0;i<5;i++){
       if(f>(l[i]%10)&&l[i]%10!=0){f=l[i]%10;t=i;};
   }
   f=0;
   for(int j=0;j<5;j++){
        if(j!=t){
            cout<<l[j]<<"  "<<f<<endl;
            f+=int(l[j]/10)*10+(l[j]%10==0?0:10);
        }
    }
    cout<<f+l[t];
}