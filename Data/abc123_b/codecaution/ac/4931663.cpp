#include<bits/stdc++.h>

using namespace std;

int main(){
   //freopen("in.txt","r",stdin);
   int ans = 0;
   int tmp;
   int mmin = 10;
   int cnt = 0;
   for(int i = 0; i<5;i++){
      cin>>tmp;
      if(tmp % 10){
         cnt++;
      }
      if(tmp%10&&tmp%10<mmin){
         mmin = tmp%10;
      }
      ans += tmp/10 * 10;
      //cout<<ans<<endl;
   }
//   cout<<cnt<<endl;
   ans +=cnt*10 + mmin -10;
   cout<<ans<<endl;
   return 0;
}
