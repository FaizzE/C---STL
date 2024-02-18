#include<iostream>
#include<set>

using namespace std;
int main()
{
    set<int> st;

    st.insert(5);
    st.insert(5);
    st.insert(1);
    st.insert(6);
    st.insert(6);
    st.insert(0);
    st.insert(0);
    st.insert(0);


    for(auto i : st){
        cout << i << endl;
    }cout << endl;
    set<int>::iterator it = st.begin();
    it++;

    st.erase(it);

    for(auto i : st){
        cout << i << endl;
    }cout << endl;

    cout << "6 is Present or Not : " << st.count(6) << endl;

    set<int>:: iterator itr = st.find(5);

    for(auto it = itr;it != st.end();it++){
        cout << *it << " ";
    }cout << endl;




    return 0;
}
