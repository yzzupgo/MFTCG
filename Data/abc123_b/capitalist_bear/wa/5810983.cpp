#include <iostream>
#include <string>
using namespace std;


int main() {
    int a[10],ans,tmp;
    for(int i=0;i<5;i++) cin>>a[i];
    int m=9;
    for(int i=0;i<5;i++) {
      if(a[i]%10==0) tmp=a[i];
      else {
        tmp=((a[i]/10)+1)*10;
        m=min(m,a[i]%10);
      }
      ans+=tmp;
    }
    cout << ans-10+m << endl;
}
