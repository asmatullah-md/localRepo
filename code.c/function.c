#include<stdio.h>

// void count_to_100();    //funtion prototype
// int sum(int a, int b);

// int main(){
//     count_to_100();   //function call
//     count_to_100();
//     return 0;
// }

// void count_to_100(){
//     for(int i=1; i<=100; i++){    //function definition
//         printf("%d \t", i);
//     }
// }

// int sum(int x, int y){
//     int addition = x+y;
//     return addition;
// }



         //swap

void swap(int, int);

int main(){
    int x = 5;
    int y = 7;
    printf("\nx: %d, y: %d", x, y);
    swap(x,y);
    printf("\nx: %d, y: %d", x,y);
    return 0;
}

void swap(int first, int second){
    int temp = first;
    first = second;
    second = temp;
    printf("\nfirst: %d, second: %d", first, second);
}