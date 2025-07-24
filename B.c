#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);

    while(t--){
       int num;
       scanf("%d",&num); 
       
       int cnt=0;
       int limit = num;
       for(int i=1;i<=limit;i++){

        if(i%10==3 || i%3==0){
            cnt++;
            // printf("%d\n",cnt);
            limit++;
        }
       }

       printf("%d\n",cnt+num);
       cnt=0;
    }

    return 0;
}