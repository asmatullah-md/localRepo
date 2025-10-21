#include<stdio.h>

// long fact(int);
//        // correct value for large no. use long long datatype
// int main(){
//     printf("\nfact of 2: %ld", fact(2));
//     printf("\nfact of 5: %ld", fact(5));
//     printf("\nfact of 10: %ld", fact(10));
//     printf("\nfact of 25: %ld", fact(25));
//     return 0;
// }

// long fact(int num){
//      long result = 1;
//      for(int i=2; i<=num; i++){
//         result *= i;
//      }
//      return result;
// }




// signed and unsigned datatype

// int main(){
//     // length of rect can't be -ve
//     unsigned int length = 10;
//     // width of rect can't be -ve
//     unsigned int width = 5;
//     // area of rect can't be -ve
//     unsigned int area ;

//     int temperature = -10; // temp can e -ve

//     area = length * width;

//     printf("area: %u\n", area);
//     printf("temp: %d\n", temperature);
//     return 0;
// }




int main(){
    // sugests storing counter in a register
    register int counter;
    for(counter=0; counter<=4; ++counter){
        printf("counter is %d\n", counter);
        // Note: attempting to got the address of counter
        // like &counter, will cause a compile error
    }
    return 0;
}