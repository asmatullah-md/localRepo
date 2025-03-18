#include<iostream>
using namespace std;
// int main(){
//     string str;
//     cout<<"Enter a string: ";
//     //cin>>str;
//     getline(cin,str);
//     cout<<str;
// }


// int main(){                    // Indexing
//     string str = "Mohammad Asmatullah";
//     // cout<<str[0];
//     cout<<str<<endl;
//     str[7] = 'D';  // updating
//     str[10] = 'S';
//     cout<<str<<endl;
// }


int main(){
    string str = "my name is mohammad asmatullah";
    int count = 0;
    for(int i=0; i<str.length(); i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            count++;
        }
    }
    cout<<count;
}


// for adding a single char in last position use '.push_back'
// for removing a single char in last position use '.pop_back'
// add more than one char use '.append'
// '.clear', '+' better then .append
// 'reverse(str.begin() + x , str.end())'    => x -> how many number of char reverse
// 'to_string' -> convert integer to string
//'stoi' -> convert string to integer