#include<iostream>
#include<map>

using namespace std;
int main()
{
    map<int,string> m;

    m[1] = "babbar";
    m[13] = "Love";
    m[2] = "Hello";

    // another method to declaration
    m.insert( {5,"Motu"});

    for(auto i : m){
        cout << i.first <<" "<< i.second << endl;
    }
    cout << "finding 13 : " << m.count(13) << endl;

    m.erase(13);
    cout << "Aftre Erase -> " << endl;
    for(auto i : m){
        cout << i.first << " " << i.second << endl;
    }cout << endl;
    auto it = m.find(5);

    for(auto i = it; i != m.end();i++){
        cout << (*i).first<<endl;
    }

    return 0;
}