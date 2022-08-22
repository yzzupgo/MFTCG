#include <bits/stdc++.h>
using namespace std;
int main(){
int n_animals, n_legs,c,t;
scanf("%d %d", &n_animals, &n_legs);
bool found = false;
for(c = 0; c<=n_animals; c++){
t = n_animals - c;
if (c*2 + t*4 == n_legs){
found = true;
break;
}
}
if ( found == true){
printf("Yes\n");
}
else{
printf("No\n");
}
return 0;
}
