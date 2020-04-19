//
// Author: marvin on 4/19/20.
//
#include "template/stack.cpp"



int main() {

    Stack<int> intstack;
    Stack<string> stringstack;

    intstack.push(100);
    intstack.push(20);
    intstack.push(59);
    intstack.push(78);
    intstack.pop();
    intstack.pop();
    intstack.print_elements(cout);
    cout<<intstack.top()<<endl;
    stringstack.push("utec");
    cout<<stringstack.top()<<endl;
    stringstack.pop();
    //agregar más ejemplos de todas las funciones de Stack



    return 0;
}
