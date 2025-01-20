#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> St;
    St.push(1);
    St.push(5);
    St.push(6);
    St.push(3);
    St.push(20);

    stack<int> temp; //reverse stack using an auxiliary stack.
    while(!St.empty()){
        temp.push(St.top());
        St.pop();
    }
    while(!temp.empty()){
        cout<<temp.top()<<endl;
        temp.pop();
    }

    return 0;
}
