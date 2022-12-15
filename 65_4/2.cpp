#include<bits/stdc++.h>
#define f(k,s,e) for(int k=s;i<e;i++)
#define fi(k,s,e) for(int k=s;i<=e;i++)
using namespace std;

signed main(){
    int t;
	scanf("%d",&t);
	while(t--){
	    int a,b,i,c=0;
	    scanf("%d %d",&a,&b);
	    int sum=a+b;
  for (i = 1; i <=sum; i++) {
      if (sum % i == 0) {
         c++;
      }
  }

  if (c == 2) {
        printf("ALICE\n");
  }
  else {
         printf("BOB\n");
  }
	}
    return 0;
    return 0;
}