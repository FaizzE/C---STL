#include<iostream>
#include<array>
using namespace std;

int main()
{
    array <int , 5> arr = {1,2,3,4,5};

    int size = arr.size();

    for(int i = 0; i < size; i++){
        cout << arr[i] << endl;
    }

    cout << "Element of 3rd Index -> " << arr.at(3) << endl;

    cout << "Empty or Not -> " << arr.empty() << endl;

    cout << "First element of Array -> " << arr.front() << endl;

    cout << "Last Element of Array -> " << arr.back() << endl;


    return 0;
}