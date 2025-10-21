#include<stdio.h>
  //  int sum(int n);
  //  int main(){
  //   int n;
  //   printf("enter natural number:");
  //   scanf("%d", &n);
  //      printf("sum is : %d", sum(n));
  //      return 0;
  //  }
  //      int sum(int n){
  //          if(n==1){
  //              return 1;
  //          }
  //          int sumNm1 = sum(n-1);
  //          int sumN = sumNm1 + n;
  //        return sumN;
  //      }


// int fact(int n);
//    int main(){
//     int n;
//     printf("enter number:");
//     scanf("%d", &n);
//        printf("sum is : %d", fact(n));
//        return 0;
//    }
//        int fact(int n){
//            if(n==0){
//                return 1;
//            }
//            int factNm1 = fact(n-1);
//            int factN = factNm1*n;
//          return factN;
//        }


// float converttemp(float celsius);

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



       int calperc(int S, int m, int s);

   int main(){
       int S=95, m=99, s=85;
       printf("perc is: %d", calperc(S,m,s));
   }
       int calperc(int S, int m, int s){
             return ((S+m+s)/3);
       }


