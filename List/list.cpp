#include<iostream>
#include<list>

using namespace std;
int main(){

    list<int>l;

    l.push_back(1);
    l.push_front(2);
    l.push_back(3);

    for(int j : l){
        cout << j << " ";
    }cout << endl;

    l.erase(l.begin());

    cout << "After Erase " << endl;;
    for(int j : l){
        cout << j << " ";
    }cout << endl;

    list <int> n(l);

    cout << "After Copied" << endl;

    for(int i : n){
        cout << i << " ";
    }cout << endl;

    cout << "Initializing List range and Value : " << endl;
    list<int> New(5,15);

    for(int j : New){
        cout << j << " ";
    }cout << endl;

    
    // list <int> ll(6);
    // cout << "New list , Input through user : " << endl;

    // for(int i = 0; i < 6; i++){
    //     cin >> ll[i];
    // }
    // for(int j : ll){
    //     cout << j << " ";
    // }cout << endl;


    

    return 0;
}