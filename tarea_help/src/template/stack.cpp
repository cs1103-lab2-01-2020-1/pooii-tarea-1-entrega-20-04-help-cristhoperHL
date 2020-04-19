//
// Author: marvin on 4/19/20.
//
#ifndef STACK_CPP
#define STACK_CPP

#include "stack.h"

template <class T>
Stack<T>::Stack(){}





template <class T>
int Stack<T>::size(){
    return elements.size();
}

template <class T>
void Stack<T>::push(T const& elem){
    if(elements.empty()){
        elements.push_back(elem);
    } else{
        elements.push_back(elem);
        for (int i = elements.size()-1; i >= 0; --i) {
            if(i != 0){
                elements.at(i)=elements.at(i-1);
            } else{
                elements.at(i)=elem;
            }
        }
    }
}

template <class T>
void Stack<T>::pop(){
    for (int i = 0; i < elements.size(); ++i) {
        if( i < (elements.size()-1) ){
            elements.at(i)=elements.at(i+1);
        }
    }
    elements.pop_back();
}


template <class T>
T const& Stack<T>::top() const{
    return elements.at(0);
}


template <class T>
bool Stack<T>::empty(){
    return elements.empty();
}




template <class T>
void Stack<T>::print_elements(ostream& os){

}

/*
template <class T>
ostream& operator<<(ostream& os, Stack<T> const& s){

}
*/
#endif