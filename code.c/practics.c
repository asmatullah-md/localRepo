#include<stdio.h>
int main(){
//#include<math.h>
// write funtion to calculate area of a square, a circle,& a rectangle //////
//     float squarearea(float side);
//     float circlearea(float radius);
//     float rectarea(float a, float b);
// int main(){
//     float a=5.0;
//     float b=6.0;
//     printf( "%f", rectarea(a,b));
//      return 0;
//  }
//     float squarearea(float side){
//       return side * side;
//     }
//     float circlearea(float radius){
//       return 3.14 * radius * radius;
//     }
//     float rectarea(float a,float b){
//       return a*b;
//     }



    // int main(){
    //     int n,i,j=0,s,p=20;
    //     printf("enter number in row:");
    //     scanf("%d", &n);
    //     for(i=1; i<=n; i++){
    //       for(s=1; s<p; s++){
    //       printf(" ");
    //       }
    //       for(j=1; j<=i; j++){
    //         if(j==1||j==i||i==n)
    //              printf("* ");
    //             else
    //                printf("  ");
    //       }
    //       printf("\n");
    //       p--;
    //     } 
    //     return 0;
    // }


//    float converttemp(float celsius);

//    int main(){
//        float n;
//        printf("enter temperature:");
//        scanf("%f", &n);
        
//       float feh = converttemp(n);
//            printf("feh : %f", feh);
//              return 0;
//    }
//        float converttemp(float celsius){
//             float feh= celsius*(9.0/5.0) + 32;
//                return feh;
//        }



    // int first, second;
    // printf("enter first no.: ");
    // scanf("%d", &first);
    // printf("enter second no.: ");
    // scanf("%d", &second);
    // printf("the two no. are %d and %d", first, second);
    // return 0;


    // int num;
    // float dec;
    // double dn;
    // char ch;

    // printf("\nthe size of int is %lu bytes", sizeof(num));
    // printf("\nthe size of float is %lu bytes", sizeof(dec));
    // printf("\nthe size of int is %lu bytes", sizeof(dn));
    // printf("\nthe size of int is %lu bytes", sizeof(ch));
    // return 0;



    // char first_name[20]= "Mohammad";
    // char last_name[20]= "Asmatullah";
    // int age = 20;

    // printf("first name: %s, last name: %s, age: %d", first_name, last_name, age);



     
    //  #include<math.h>
    // float p,r,t;
    // printf("calculate compound interest: ");
    // printf("enter principal: ");
    // scanf("%f", &p);
    // printf("enter rate: ");
    // scanf("%f", &r);
    // printf("enter time: ");
    // scanf("%f", &t);

    // float interest = p* pow((1 + r/100), t);
    // printf("compound interest is %f", interest);
    // return 0;



    // int f,s,t;
    // printf("enter first no.: ");
    // scanf("%d", &f);
    // printf("enter second no.: ");
    // scanf("%d", &s);
    // printf("enter third no.: ");
    // scanf("%d", &t);

    // if(f>s && f>t){
    //     printf("%d is the greatest", f);
    // } else if(s>t){
    //     printf("%d isthe greatest", s);
    // }else{
    //     printf("%d is the greatest", t);
    // }
    //  return 0;



    // int marks;
    // printf("enter marks: ");
    // scanf("%d", &marks);

    // if(marks>90){
    //     printf("A grade");
    //     } else if(marks>75){
    //         printf("B grade");
    //     } else if(marks>60){
    //         printf("C grade");
    //     } else if(marks>30){
    //         printf("D grade");
    //     } else{
    //         printf("Fail");
    //     }



    // int first, second;
    //  printf("enter first no.: ");
    //  scanf("%d", &first);
    //  printf("enter second no.: ");
    //  scanf("%d", &second);

    //  int min = first < second ? first : second;
    //  printf("min no. of two is %d", min);



//     int num;
//     printf("enter no.: ");
//     scanf("%d", &num);

//     //num % 2 == 0 ? printf("even") : printf("odd");
//      printf("%d is a absolute value", (num>0 ? num : -num));
    


    float f,s;
    char opr;
     printf("enter first no.: ");
     scanf("%f", &f);
     printf("enter second no.: ");
     scanf("%f", &s);
     printf("enter operator (+,-,*,/): ");
     scanf(" %c", &opr);
     float res;
     switch(opr)
     {
        case '+': res = f + s;
           break;
        case '-': res = f - s;
           break;
        case '*': res = f * s;
           break;
        case '/': res = f / s;
           break;
       default :
          printf("invalid opt, please enter (+,-,*,/)");
          break;
     }
       printf("result is %.2f", res);
      return 0;
 }
     
   