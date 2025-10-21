#include<stdio.h>
int main(){
    int r;
    printf("enter no.: ");
    scanf("%d", &r);
    
    printf("right half pyramid\n");
    for(int i=1; i<=r; i++){
         printf("\n");
        for(int j=0; j<i; j++){
            printf("* ");
        }
    }

   printf("\n\nreverse right half pyramid");
    for(int i=0; i<=r; i++){
         printf("\n");
        for(int j=0; j<r - i; j++){
            printf("* ");
        }
    }

    printf("\n\nleft half pyramid");
    for(int i=1; i<=r; i++){
         printf("\n");
       for(int h=0; h<r-i; h++){
         printf("  ");
       }  
        for(int j=0; j<i; j++){
            printf("* ");
        }
    }
    return 0;
}