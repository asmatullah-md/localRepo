#include<stdio.h>
#include<string.h>

 void printstring(char arr[]);
 int countlength(char arr[]);

//  int main(){
//     //  char firstname[50];
//     //  scanf("%s", firstname);
//     //  printf("%s", firstname);

//     // char fullname[5];
//     // scanf("%s", fullname);
//     // printf("%s", fullname);

//     char str[100];
//     fgets(str,19, stdin);
//     puts(str);
//     printf("\n");
//     return 0;
// }
//  void printstring(char arr[]){
//      for(int i=0; arr[i]!='\0'; i++){
//          printf("%c", arr[i]);
//      }
//      printf("\n");
//  }



// int main(){
//     char name[] = "mohammad asmatullah";
//     int length = strlen(name);
//     printf("length is: %d", length);
//     return 0;
// }

// int countlength(char arr[]){
//     int count = 0;
//     for(int i=0; arr[i]!='\0'; i++){
//         count++;
//     }
//     return count-1;
// }

// void printstring(char arr[]){
//     for(int i=0; arr[i]!='\0'; i++){
//         printf("%c", arr[i]);
//     }
//     printf("\n");
// }



// int countvowels(char str[]);

// int main(){
//     char str[]="mohammad asmatullah";
//     printf("vowels are: %d", countvowels(str));
// }

// int countvowels(char str[]){
//     int count = 0;

//     for(int i=0; str[i]!='\0'; i++){
//         if(str[i]=='a' || str[i]=='e' || str[i]== 'i' || str[i]== 'o' || str[i]== 'u'){
//             count++;
//         }
//     }
//     return count ;
// }



void checkchar(char str[], char ch);

int main(){
    char str[] = "asmatullah";
    char ch = 'p';
    checkchar(str, ch);
}
void checkchar(char str[], char ch){
    for(int i=0; str[i]!='\0'; i++){
        if(str[i] == ch){
            printf("yes");
            return;
        }
    }
    printf("no");
}

 
