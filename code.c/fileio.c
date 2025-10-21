#include<stdio.h>

int main(){
    char name[100];
    printf("enter my name: ");
    fgets(name, sizeof(name), stdin);
    puts(name);
    printf("gm");
    puts(name);
    
    }//     fptr = fopen("text.txt", "r");
    
//     char ch;
//     fscanf(fptr, "%c", &ch);
//     printf("charecter = %c\n", ch);
//     fscanf(fptr, "%c", &ch);
//     printf("charecter = %c\n", ch);
//     fscanf(fptr, "%c", &ch);
//     printf("charecter = %c\n", ch);
//     fscanf(fptr, "%c", &ch);
//     printf("charecter = %c\n", ch);
//     fscanf(fptr, "%c", &ch);
//     printf("charecter = %c\n", ch);

//     fclose(fptr);

//     return 0;
// }


// int main(){
//     FILE *fptr;
//     fptr = fopen("odd.txt", "w");

//     int n;
//     printf("enter no. :");
//     scanf("%d", &n);

//     for(int i=1; i<=n; i++){
//         if(i % 2 != 0){
//             fprintf(fptr, "%d\n", i);
//         }
//     }


    // char ch;
    // ch = fgetc(fptr);
    // while(ch != EOF){
    //     printf("%c", ch);
    //     ch = fgetc(fptr);
    // }
    //   printf("\n");


    //  fputc('a', fptr);
    //  fputc('s', fptr);
    //  fputc('m', fptr);
    //  fputc('a', fptr);
    //  fputc('t', fptr);
    
    // printf("%c\n", fgetc(fptr));
    // printf("%c\n", fgetc(fptr));


    // fprintf(fptr, "%c", 'M');
    // fprintf(fptr, "%c", 'o');
    // fprintf(fptr, "%c", 'h');
    // fprintf(fptr, "%c", 'a');
    // fprintf(fptr, "%c", 'm');
    // fprintf(fptr, "%c", 'm');
    // fprintf(fptr, "%c", 'a');
    // fprintf(fptr, "%c", 'd');



//  int main(){
//      FILE *fptr;
//      fptr = fopen("sum.txt", "r");

//      int a;
//      fscanf(fptr, "%d", &a);
//      int b;
//      fscanf(fptr,"%d", &b);

//      fclose(fptr);

//      fptr = fopen("sum.txt", "w");
//      fprintf(fptr, "%d", a+b);
//      fclose(fptr);

//      return 0;
//  }