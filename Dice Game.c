#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int sum=0, value, i;
    printf("Rolling the dice...\n");
    
    srand((unsigned int)time(NULL));
    //乱数1~6
    for(i=1;i<=2;i++){
        sum += value = 1 + rand() % 6;
        printf("Die %d: %d\n", i, value);
    }
  
    printf("Total value: %d\n", sum);

    if(sum > 7) printf("you won!\n");
    else printf("you lost.\n", name); 
  return 0;
}

