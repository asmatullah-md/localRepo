#include <stdio.h>
//#include <math.h>

int main() {
    // int a[5]={1,2,3,4,5};
    // int i;
    // for(i=0; i<5; i++){
    //     if((char)a[i]=='5') 
    //     printf("%d\n", a[i]);
    //     else{
    //         printf("fail\n");
    //     }
    // }

    // int n,v;
    // printf("enter no.");
    // scanf("%d", &n);

    // for(int i=1; i<=n; i++){
    //     for(int s=1; s<=n-i; s++){
    //     printf(" ");
    // }
    // for(int j=1; j<=i; j++){
    //     if(i == 1|| j == 1){
    //         v = 1;
    //     }
    //     else{
    //         v = v*(i-j+1)/(j-1);
    //     }
    //     printf("%2d", v);
    // }
    // printf("\n");
    // }



    // double a, b, c, discriminant, root1, root2, realPart, imagPart;
    // printf("Enter coefficients a, b and c:\n ");
    // scanf("%lf %lf %lf", &a, &b, &c);

    // discriminant = b * b - 4 * a * c;

    // // condition for real and different roots
    // if (discriminant > 0) {
    //     root1 = (-b + sqrt(discriminant)) / (2 * a);
    //     root2 = (-b - sqrt(discriminant)) / (2 * a);
    //     printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
    // }
    // // condition for real and same roots
    // else if (discriminant == 0) {
    //     root1 = root2 = -b / (2 * a);
    //     printf("root1 = root2 = %.2lf;", root1);
    // }
    // // if roots are not real 
    // else {
    //     realPart = -b / (2 * a);
    //     imagPart = sqrt(-discriminant) / (2 * a);
    //     printf("root1 = %.2lf+%.2lfi and root2 = %.2lf-%.2lfi", realPart, imagPart, realPart, imagPart);
    // }

    // return 0;



//     unsigned int factorial(unsigned int n) {
//     int result = 1, i;
//     // Loop from 2 to n to get the factorial
//     for (i = 2; i <= n; i++) {
//         result *= i;
//     }
//     return result;
// }

// int main() {
//     int num = 5;
//     printf("Factorial of %d is %d", num, factorial(num));
//     return 0;
// }





int x, y;
printf("Input value for x & y: \n");
scanf("%d%d",&x,&y);
printf("Before swapping the value of x & y: %d %d",x,y);
x=x+y;
y=x-y;
x=x-y;
printf("\nAfter swapping the value of x & y: %d %d",x,y);
return 0;
}