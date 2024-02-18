#include<iostream>
#include<vector>
using namespace std;

int main()
{

    vector <int> vec(5,1);

    for(int i : vec){
        cout << i << " ";
    }cout << endl;

    // it is the copy Of above vector
    vector<int> last(vec);
    cout << "Copied Vector" << endl;
    for(int i : last){
        cout << i << " ";
    }cout << endl;

    cout << "vector Initialization -> " << endl;

    vector<int> newvec(5);
    cout << "Enter the elements of Vector : ";
    for(int j = 0; j < 5; j++){
        cin >> newvec[j];
    }

    for(int j : newvec){
        cout << j << " ";
    }cout << endl;

return 0;
}