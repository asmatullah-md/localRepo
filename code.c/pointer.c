#include<stdio.h>
// int main(){
//     int age = 22;
//     int *ptr = &age;

//     printf("%p\n", age);
//                     //Topic: pointer arithmetic
//        printf("ptr = %u\n", ptr);
//        ptr++;
//        printf("ptr = %u\n", ptr);
//        ptr--;
//        printf("ptr = %u\n", ptr);
//     return 0;
// }


int main(){
    int age = 25;
    int _age = 30;
    int *ptr = &age;
    int *_ptr = &_age;

    printf("%u, %u\ndifference = %u\n",ptr,_ptr, ptr-_ptr);
    _ptr = &age;
    printf("comperission = %u\n", ptr ==_ptr);
    return 0;
}