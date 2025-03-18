#include<iostream>
using namespace std;
// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin >> n;
//     if(n%2==0) cout<<"even";
//     else cout<<"odd";
// }



// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin>> n;
//     // if(n>=0) cout<< n;
//     // else cout<< -n;
// //    [OR]
//     if(n<0) n = -n;
//     cout<<n;
// }


// int main(){
//     int cp, sp;
//     cout<<"enter cp: Rs ";
//     cin>>cp;
//     cout<<"enter sp: Rs ";
//     cin>>sp;
//     if(sp>cp){ cout<< "profit is: Rs "<<sp-cp;
//     }
//     else if(cp>sp){ cout<< "loss is: Rs "<<cp-sp;
//     }
//     else{ cout<< "No P No L";
//     }
// }


// int main(){
//     int l, b;
//     cout<<"length: ";
//     cin>>l;
//     cout<<"breadth: ";
//     cin>>b;
//     cout<<"area of rect: "<<l*b<<std::endl;
//     cout<<"perimeter of rect: "<<2*(l+b);
// }


// int main(){
//     int a, b, c;
//     cout<<"side1: ";
//     cin>>a;
//     cout<<"side2: ";
//     cin>>b;
//     cout<<"side3: ";
//     cin>>c;
//     if((a+b)>c && (a+c)>b && (b+c)>a){
//         cout<<"Is a triangle";
//     }
//     else{
//         cout<<"Not a triangle";
//     }
// }


// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
//     if((n%5 == 0 || n%3 == 0) && (n%15 != 0)){
//         cout<<"A valid no.";
//     }
//     else{
//         cout<<"Is not valid no.";
//     }
// }


//Nested loop

// int main(){
//     int n;
//     cout<<"Enter no. n: ";
//     cin>>n;
//     if((n%5 == 0 or n%3 == 0) and (n%15!=0)){
//     cout<<"Is a required no.";
//     }
//     else {
//         cout<<"Is not a required no.";
//     }
// }


// int main(){
//     int m;
//     cout<<"Enter marks: ";
//     cin>>m;
//     if(m>=81 && m<=100){
//         cout<<" Very Good";
//     }
//     else if(m>=61){
//         cout<<"Good";
//     }
//     else if(m>=41){
//         cout<<"Average";
//     }
//     else{
//         cout<<"Fail";
//     }
// }


int main(){
    int x, y;
    cout<<"Value of x: ";
    cin>>x;
    cout<<"Value of y: ";
    cin>>y;
    if(x==0 && y==0){
        cout<<"x-axis"<<endl<<"y-axis";
    }
    else if(x>0 && y>0){
        cout<<"1st Quadrant";
    }
    else if(x<0 && y>0){
        cout<<"2st Quadrant";
    }
    else if(x<0 && y<0){
        cout<<"3st Quadrant";
    }
    else{
        cout<<"4th Quadrant";
    }
}


//// expression 1 ? expression 2 : expression 3
//// (condition) ? if true : if false;