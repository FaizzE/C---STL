#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main()
{
    vector <int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    cout << "finding 6 --> " << binary_search(v.begin(), v.end(),6)<<endl;

    cout << "Lower bound -> " << lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;

    cout << "upper bound -> " <<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;

    int a = 3;
    int b= 5;

    cout<< "Max -> " << max(a,b) << endl;
    cout << "Min -> "<< min(a,b) << endl;

    swap(a,b);
    cout << endl << "a -> " << a << endl;

    string abcd = "Faizz";
    reverse(abcd.begin(),abcd.end());
    cout << "String after reverse -> " << abcd << endl;

    rotate (v.begin(),v.begin()+2,v.end());
    cout << "after rotate -> " << endl;

    for(int i : v){
        cout << i << " ";
    }cout << endl;

    sort(v.begin(),v.end());

    cout << "After Sorting -> "<<endl;
    for(int i : v){
        cout << i << " ";
    }cout << endl;

    return 0;
}