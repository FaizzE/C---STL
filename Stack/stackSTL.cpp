#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<string>s;

    s.push ( "Hello");
    s.push("World");
    s.push("what");

    cout << "Top Element of stack : " << s.top()<<endl;
    s.pop();
    cout << "After Pop Top Element : " << s.top() << endl;

    cout << "Size of stack : " << s.size() << endl;

    cout << "Empty or not : " << s.empty() << endl;

    return 0;
}