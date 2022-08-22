#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a[7];
    int t=9;
    int k=0;
    a[0]=0;
    for(int i=1;i<=5;i++){
        cin>>a[i];
        if(a[i]%10!=0&&a[i]%10<=t){
            t=a[i]%10;
            k=i;
        }
    }
    int sum=0;
    for(int i=1;i<=5;i++){
        if(i==k) continue;
        if(a[i]%10==0) sum+=a[i];
        else sum+=(a[i]+10-a[i]%10);
    }
    sum+=a[k];
    cout<<sum<<endl;
    return 0;
}
