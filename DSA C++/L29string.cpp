#include <iostream>
#include<vector>
using namespace std;

// int main(){
//     // char str[100];

//     // cout << "enter char array: ";
//     // cin.getline(str, 100, '&');

//     // cout << "output: "<< str<<endl;
//     // return 0;


//     string str1 = "Mohammad";
//     string str2 = " Asmatullah";

//     string str3 = str1 + str2;  //Concatination
//     cout << str3 <<endl;

//     cout << (str1 != str2) <<endl;
//     return 0;
// }


bool isValid(string s){
    int st = 0, end = s.size() -1;

    while(st < end){
        if(s[st] != s[end]){
            return false;
        }
        st++;
        end--;
    }
    return true;
}

int main(){
    string s;
    cout<<"Enter a string: ";
    cin>>s;

    if(isValid(s)){
        cout <<"Palindrome"<<endl;
    }else{
        cout <<"Not palindrome"<<endl;
    }
    return 0;
}