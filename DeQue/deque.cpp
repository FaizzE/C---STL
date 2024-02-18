#include<iostream>
#include<deque>

using namespace std;
int main()
{

deque<int> d;

d.push_back(1);
d.push_front(2);
d.push_front(3);
d.push_back(4);

for(int j : d){
    cout << j << " ";
}cout << endl;

// Note :- In Deque We can perfor both pop_back() and pop_front() Operations 

// d.pop_front();


// //cout << "After Pop_Back() " << endl;

// for(int j : d){
//     cout << j << " ";
// }cout << endl;

// d.pop_front();
// cout << "After pop_front() " << endl;

// for(int j : d){
//     cout << j << " ";
// }cout << endl;

cout << "Print First Index of Deque -> " << d.at(1) << endl;

cout << "First Element of Deque -> " << d.front() << endl;

cout << "Last Element of Deque -> " << d.back() << endl;

cout << "Empty or Not -> " << d.empty() << endl;

cout << "Before Erase size -> " << d.size() << endl;

d.erase(d.begin(),d.begin()+2);

cout << "After Erase size -> "<< d.size() << endl;;

for(int j : d){
    cout << j << " ";
}cout << endl;

deque <int> newd(5);

 cout << "Enter the Elements of DeQue : ";
 for(int i = 0; i < 5; i++){
        cin >> newd[i];
    }
    for(int j : newd){
        cout << j << " ";
    }cout << endl;


return 0;

}