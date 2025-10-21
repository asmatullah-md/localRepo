#include <iostream>
#include<vector>
using namespace std;

int main(){
    //vector<int> vec = {1, 2, 3};
    // vector<int> vec (3, 4);
    // cout<<vec[0]<<endl;
    // cout<<vec[1]<<endl;
    // cout<<vec[2]<<endl;

    // vector<char> vec = {'a', 'b', 'c', 'd'};
    // vec.push_back('e');
    // vec.push_back('f');
    // vec.pop_back();

    // cout<<"size: "<<vec.size()<<endl; 
    // cout<<vec.front()<<endl;
    // cout<<vec.back()<<endl;\
    // cout<<vec.at(2)<<endl;

    // for(char val : vec){         // for each loop
    //     cout<<val<<endl;
    // }

    vector<int> vec;

    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(3);

    cout<<vec.size()<<endl;  // 3
    cout<<vec.capacity()<<endl;  // 4
    return 0;
}