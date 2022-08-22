#include <iostream>

using namespace std;

int main(){
        int time[5],ans=0;
        for(int i=0; i<5; i++) cin>>time[i];

        int keep=time[0]%10,num=0;
        for(int i=1; i<5; i++) {
                if(time[i]%10<keep) num=i;
        }

        for(int i=0; i<5; i++) {
                if((i==num)||(time[i]%10==0))ans+=time[i];
                else ans+=(time[i]/10+1)*10;
        }

        cout<<ans<<endl;
        return 0;
}
