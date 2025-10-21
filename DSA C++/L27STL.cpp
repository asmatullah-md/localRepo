#include <iostream>
#include<vector>
#include<list>
#include<deque>
#include<stack>
#include<map>
#include<set>
using namespace std;

int main(){
    // vector<int> vec = {1, 2, 3, 4, 5};

    // ////vector<int>::iterator it;
    // //vector<int>::reverse_iterator it;   [OR] auto

    // //// for(auto it = vec.begin(); it != vec.end(); it++){
    // ////     cout << *(it) <<" ";
    // //// }
    // for(auto it = vec.rbegin(); it != vec.rend(); it++){
    //     cout << *(it) <<" ";
    // }
    // cout << endl;
    // return 0;


    // list<int> l;

    // l.push_back(1);
    // l.push_back(2);
    // l.push_front(3);
    // l.push_front(5);

    // for(int val : l){
    //     cout << val <<" ";
    // }
    // cout<<endl;
    // return 0;


    // deque<int> d = {1, 2, 3, 4, 5};

    // for(int val : d){
    //     cout<<val<<" ";
    // }
    // cout<<endl;
    // cout << d[2] << endl;
    // return 0;


    // //pair<string, int> p = {"mohammad", 8};
    // pair<int, pair<char, int>> p = {2, {'a', 1}};
    // //vector<pair<int, char>> vec = {1, 2, 3};

    // // cout << p.first <<endl;
    // // cout << p.second <<endl;
    // cout << p.first <<endl;
    // cout << p.second.first <<endl;
    // cout << p.second.second <<endl;
    // return 0;


    // stack<int> s;
    // s.push(1);
    // s.push(2);
    // s.push(3);

    // cout<< "top = "<< s.top()<<endl;
    // return 0;


    // map<string, int> m;

    // m["tv"] = 100;
    // m["laptop"] = 120;
    // m["mobile"] = 50;
    // m["tablet"] = 100;
    // m["watch"] = 200;

    // m.emplace("camera", 25);
    // m.erase("tv");

    // for(auto p: m){
    //     cout << p.first <<" "<< p.second <<endl;
    // }

    // if(m.find("camera") != m.end()){
    //     cout<<"found\n";
    // }else{
    //     cout<<"not found\n";
    // }
    // cout <<"count = "<< m["laptop"]<<endl;
    // return 0;


    // multimap<string, int> m;

    // m.emplace("tv", 100);
    // m.emplace("tv", 100);
    // m.emplace("tv", 100);
    // m.emplace("tv", 100);

    // m.erase(m.find("tv"));

    // for(auto p: m){
    //     cout << p.first <<" "<< p.second <<endl;
    // }
    // return 0;



    set<int> s;

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);

    // s.insert(1);
    // s.insert(2);

    cout << "lower bound = "<< *(s.lower_bound(3))<<endl;
    cout << "upper bound = "<< *(s.upper_bound(3))<<endl;

    cout <<"size = "<< s.size()<<endl;
    for(auto val : s){
        cout<< val <<" ";
    }
    cout<<endl;
    return 0;
}