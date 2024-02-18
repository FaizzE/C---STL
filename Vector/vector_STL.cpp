#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector <int> vec;

    cout << "Capacity of vector -> " << vec.capacity() << endl;

    vec.push_back(1);
    cout << "Capacity of vector -> " << vec.capacity() << endl;

    vec.push_back(2);
    cout << "Capacity of vector -> " << vec.capacity() << endl;

    vec.push_back(3);
    cout << "capacity of vector -> " << vec.capacity() << endl;
    cout << "Size of Vector -> " << vec.size() << endl;

    vec.push_back(4);
    cout << "Capacity of vector -> " << vec.capacity() << endl;
    cout << "size of vector -> " << vec.size() << endl;
    
    vec.push_back(5);
    cout << "Capacity of vector -> " << vec.capacity() << endl;
    cout << "size of vector -> " << vec.size() << endl;

    vec.push_back(6);
    cout << "Capacity of vector -> " << vec.capacity() << endl;
    cout << "size of vector -> " << vec.size() << endl;
    
    cout << "Element at 4th Index -> " << vec.at(4) << endl;

    cout << "First Element of vector -> " << vec.front() << endl;

    cout << "Last element of vector ->" << vec.back() << endl; 

    cout << "Before pop -" << endl;
    for(int i : vec) {
        cout << i << " ";
    }cout << endl;

    vec.pop_back();

    cout << "After Pop -" << endl;

    for(int i : vec){
        cout << i << " ";
    }cout << endl;

    cout << "Before Clear size " << vec.size() << endl;

    vec.clear();

    cout << "After clear size  " << vec.size() << endl;

    return 0;
}