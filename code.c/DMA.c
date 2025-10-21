// #include<stdio.h>
//  int main(){
//      printf("%d\n", sizeof(int));
//       printf("%d\n", sizeof(float));
//        printf("%d\n", sizeof(char));

//        return 0;
//  }


#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    ptr = (int*) malloc(5* sizeof(int));

     ptr[0] = 1;
     ptr[1] = 5;
     ptr[2] = 6;
     ptr[3] = 4;
     ptr[4] = 9;

    for(int i=0; i<5; i++){
        printf("%d\n", ptr[i]);
    }
}



// int main(){
//     int *ptr;
//     int n;
//     printf("enter no.: ");
//     scanf("%d", &n);

//     ptr = (int*) calloc(n, sizeof(int));

//     for(int i=0; i<n; i++){
//         printf("%d\n", ptr[i]);
//     }
//     free(ptr);

//     ptr = (int*) calloc(3, sizeof(int));
//     for(int i=0; i<3; i++){
//         printf("%d\n", ptr[i]);
//     }
//     return 0;
// }



// int main(){
//     int *ptr;
//     ptr = (int*) calloc(5, sizeof(int));

//     printf("enter 5no. :");
//     for(int i=0; i<5; i++){
//         scanf("%d", &ptr[i]);
//     }

//     ptr = realloc(ptr, 8);
//     printf("enter 8no. :");
//     for(int i=0; i<8; i++){
//         scanf("%d\n", &ptr[i]);
//     }

//     for(int i=0; i<8; i++){
//         printf("number %d is %d\n", i, ptr[i]);
//     }
//     return 0;
// }