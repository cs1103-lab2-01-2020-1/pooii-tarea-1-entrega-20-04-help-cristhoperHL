//
// Author: marvin on 4/19/20.
//

#ifndef STACK_H
#define STACK_H

#include "../lib.h"

template <typename T>
class Stack {
private:
    vector<T> elements;

public:
    Stack();
    //add copy constructor
    //add assignment constructor
    void push(T const& elem);
    int size();


    void pop();

    T const& top() const;

    bool empty();

    //overload == operator
    friend bool operator==(Stack<T> s_a,Stack<T> s_b){
        if (s_a.elements==s_b.elements) return true;
        else false;
    }


    void print_elements(ostream& os);

    /*
    friend ostream& operator<<(ostream& os, Stack<T> const& s);
    */
};


#endif //STACK_H
