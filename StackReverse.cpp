#include<bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int> &St, int element){
    if(St.empty()){
        St.push(element);
        return;
    }
    int topelement = St.top();
    St.pop();
    insertAtBottom(St, element);
    St.push(topelement);

}

void reverse(stack<int> &St){
    if(St.empty()){
        return;
    }
    int element = St.top();
    St.pop();
    reverse(St);
    insertAtBottom(St, element);
}


int main(){
    stack<int> St;
    St.push(1);
    St.push(2);
    St.push(3);
    St.push(4);
    
    reverse(St);

    while(!St.empty()){
        cout<<St.top()<<endl;
        St.pop();
    }

    return 0;


}