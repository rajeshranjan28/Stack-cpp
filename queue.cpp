#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<string> cars; // we cannot add elements to the queue at the time of declaration unlike with vectors and array.

    cars.push("volvo"); // .push() function to add elelments at the end of the queue as it follows FIFO principle.
    cars.push("BMW");
    cars.push("Mazda");
    cars.push("Audi");
    cars.push("Suzuki");

    //we can only access elements at the front or back of queue using .front() or .back() function.
    cout<< cars.front()<<endl;
    cout<< cars.back()<<endl;

    //You can also use .front and .back to change the value of the front and back elements:
    cars.front() = "Tesla";
    cars.back() = "VW";

    cout << cars.front()<<endl;
    cout << cars.back()<<endl;

    //You can use the .pop() function to remove an element from the queue
    //This will remove the front element (the first and oldest element that was added to the queue):

    cars.pop();
    cout << cars.front()<<endl;

    //To find out how many elements there are in a queue, use the .size() function:
    cout << cars.size()<<endl;

    //Use the .empty() function to find out if the queue is empty or not.
    //The .empty() function returns 1 (true) if the queue is empty and 0 (false) otherwise:\

    cout << cars.empty()<<endl;

    queue<string> ans;
    cout << ans.empty()<<endl;




    
    return 0;
    
}