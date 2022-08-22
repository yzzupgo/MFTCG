#include <iostream>
#include <vector>
using namespace std;

int main(void){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int cmp=0;
    vector<int> dt(5);
    int ret=0;
    int first=0, before=0,idx=0;
    for(int i=0;i<5;i++){
        cin>>dt[i];
    }
    int tmp = dt[0]%10;
    // cout<<"size: "<<dt.size()<<"\n";
    
    for(int i=0;i<5;i++){
        tmp=0;
        for(int j=0;j<dt.size();j++){
            if(dt[j]%10 == 0){
                tmp=0;
                before=dt[j];
                idx=j;
                break;
            }
            if(tmp<dt[j]%10){
                tmp = dt[j]%10; 
                before=dt[j];
                idx=j;
                // cout<<"step: "<<i<<" tmp: "<<tmp<<" before: "<<before<<" idx: "<<idx<<"\n";
            }
        }
        // for(int k=0;k<dt.size();k++){
        //     cout<<"-------------"<<endl;
        //     cout<<dt[k]<<endl;
        //     cout<<"-------------"<<endl;
        // }
        // cout<<"add : "<<before<<endl;
        ret+=before;
        if(i==4) break;
        if(ret%10 != 0) ret+=(10-tmp);
        dt.erase(dt.begin()+idx);
        // cout<<"removed size: "<<dt.size()<<" ret: "<<ret<<endl;
    }
    
    cout<<ret;

    return 0;
}