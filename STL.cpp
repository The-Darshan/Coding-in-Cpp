#include<iostream>
#include<deque>
#include<list>
#include<stack>
#include<queue>
#include<set>
#include<algorithm>
#include<map>
using namespace std;

int main(){

//                                  DEQUE

// Creation of deque;
    deque<int> d;

// Inserting ele in deque;
    d.push_back(1);
    d.push_front(2);

// Printing of deque;
     for(int i:d){
        cout<<i<<" ";
     }
     
// randomly accessing element 
    cout<<endl;
    cout<<d.at(1);//1

// front and back element
    cout<<d.front()<<endl;//2
    cout<<d.back()<<endl;//1

// Empty check
    cout<<d.empty()<<endl;//false

// delete element
    d.erase(d.begin(),d.begin()+1);
    //deletes the first element(2) from the deque , TC = O(n).
    cout<<d.size()<<endl;//1

// Deleting ele from deque
    d.pop_back();

//                                  LIST

// creation of list
    list<int> l;

// Inserting elements
    l.push_back(2);
    l.push_front(1);

// Printing elements
    for(int i:l){
        cout<<i<<" ";
    }

//  Deleting ele
    l.erase(l.begin());
    cout<<endl;
     for(int i:l){
        cout<<i<<" ";
    }

// Size of list
    cout<<endl;
    cout<<l.size()<<endl;

// Copying of list
    list<int> n(l);

// creating and intitalizing a new list
    list<int> a(5,100);
     for(int i:a){
        cout<<i<<" ";
    }

//                                     STACK (LIFO)

// creating a new stack
    stack<string> s;

// Inserting element into stack
    s.push("love");
    s.push("you");
    s.push("everyone");

// Printing top ele of  stack
    cout<<endl;
    cout<<s.top()<<endl;

// Removing ele from stack
    s.pop();
    cout<<s.top()<<endl;

// Size of stack
    cout<<s.size()<<endl;

// empty or not
    cout<<s.empty()<<endl;

//                                  QUEUE (FIFO)

// creating a new queue
    queue<string> q;

// Inserting element into queue
    q.push("love");
    q.push("you");
    q.push("everyone");

// First ele of queue
    cout<<q.front()<<endl;

// Removing ele from queue
    q.pop();
    cout<<q.front()<<endl;

// Size of queue
    cout<<q.size()<<endl;

//                              PRIORITY QUEUE

// It is of two types Max Heap and Min Heap.
// Max Heap => Element Fetched is the maximum element.
// Min Heap => Element Fetched is the minimum element.
// By Default priority queue is Max Heap.

// Creation =>
    // Max Heap ->
    priority_queue<int> maxpq;

    // Min Heap->
    priority_queue<int,vector<int> , greater<int>> minpq;

// Insertion =>
    maxpq.push(1);
    maxpq.push(2);
    maxpq.push(32);
    maxpq.push(3);

// Printing Data =>
// Since we are poping ele so the value of the size is changing that is why we have to declare size outside the for loop.
    while(!maxpq.empty()){
        cout<<maxpq.top()<<" ",
        maxpq.pop();
    }
    cout<<endl;

// Min Heap Insertion and Printing

    minpq.push(1);
    minpq.push(2);
    minpq.push(32);
    minpq.push(3);

    while(!minpq.empty()){
        cout<<minpq.top()<<" ",
        minpq.pop();
    }
    cout<<endl;

//                               SET 

// It stores only unique value , if any repeated value is encountered then it stores only single value just like set theory in mathematics .

// It is implemented with the help of concept of BST(Binary Search Tree).

// Modification is not possible ( updation ) , elements are returned in sorted order .

// Set is slow but Unordered Set is fast .
// Unordered Set returns element in random order . 

// Creation =>
    set<int> z;

// Insertion => 
//  Time Complexity of insertion=> O(logn);
    z.insert(5);
    z.insert(5);
    z.insert(0);
    z.insert(1);
    z.insert(6);
    z.insert(6);

// Printing Data =>
    for(int i : z){
        cout<<i<<" ";
    }

//  Delete => TC => O(logn)
    set<int>::iterator it = z.begin();
    it++;
    z.erase(it);
    cout<<endl;
     for(int i : z){
        cout<<i<<" ";
    }cout<<endl;

// Count => TC => O(logn)
// Checks if the particular ele is present or not in the set.
    cout<<z.count(-10)<<endl;

// Find => TC => O(logn)
// Returns the iterator of the particular value .
    set<int>::iterator itr = z.find(5);
    for (it = itr; it != z.end(); it++) {
        cout << *it << " ";
    }cout<<endl;

//                             MAP

// In this the data is stored in the key-value format.
// All the key are unique and each key points towards only one value.
// Map give output in sorted order whereas unordered map give result in random order.
// Time Complexity in map => O(logn). 

// Creation
    map<int,string> m;

// Insertion
    m[1] = "Darshan";
    m[13] = "Kumar";
    m[2] = "Begani";

    m.insert({ 5 , "bheem"});

// Printing
    for(auto i:m){
        cout<<i.first<<" ";
    }

// Count 
    cout<<endl;
    cout<<m.count(13)<<endl;

// Delete
    m.erase(13);
    for(auto i:m){
        cout<<i.first<<" ";
    }cout<<endl;
// Find
    for(auto i = m.find(5);i!=m.end();i++){
        cout<<(*i).first<<endl;
    }

//                                ALGORITHMS

    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    cout<<binary_search(v.begin(),v.end(),4)<<endl;
    cout<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    cout<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;

    string ch="darshan";
    reverse(ch.begin(),ch.end());
    cout<<ch<<endl;

    rotate(v.begin(),v.begin()+1,v.end());
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
    
    return 0;
}