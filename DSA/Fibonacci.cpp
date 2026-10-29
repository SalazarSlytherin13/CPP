// #include<iostream>
// using namespace std;

// int Fibonacci(int n){
//     if(n>2){
//         return n-1 + Fibonacci(n-2);
//     }

//     if(n==2){
//         return 1;

//     }

//     if(n==1){
//         return 0;
//     }
// }

// int main(){
//     int x;
//     cout<<"Enter the number: ";
//     cin>>x;

//     cout<<"The Series is: "<<Fibonacci(x);

//     return 0;
// }


#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Stack {
public:
    vector<char> item;
    int top;

    Stack(int size) {
        item.resize(size);
        top = -1;
    }

    void Push(char x) {
        if(top == item.size()-1) {
            cout << "Stack Overflow";
            return;
        }
        top++;
        item[top] = x;
    }

    char Pop() {
        if(top == -1) {
            return '\0';
        }
        char x = item[top];
        top--;
        return x;
    }

    char StackTop() {
        if(top == -1) {
            return '\0';
        }
        return item[top];
    }

    bool IsEmpty() {
        if(top == -1)
            return true;
        else
            return false;
    }
};

int precedence(char x) {
    if(x == '^')
        return 3;
    else if(x == '*' || x == '/')
        return 2;
    else if(x == '+' || x == '-')
        return 1;
    else
        return 0;
}

int main() {
    string infix, postfix = "";

    cout << "Enter infix expression: ";
    cin >> infix;

    Stack s(infix.length());

    for(int i = 0; i < infix.length(); i++) {
        char x = infix[i];

        if((x >= 'A' && x <= 'Z') ||
           (x >= 'a' && x <= 'z') ||
           (x >= '0' && x <= '9')) {
            postfix = postfix + x;
        }
        else if(x == '(') {
            s.Push(x);
        }
        else if(x == ')') {
            while(!s.IsEmpty() && s.StackTop() != '(') {
                postfix = postfix + s.Pop();
            }
            if(!s.IsEmpty())
                s.Pop();
        }
        else {
            while(!s.IsEmpty() && s.StackTop() != '(' &&
                  (precedence(s.StackTop()) > precedence(x) ||
                  (precedence(s.StackTop()) == precedence(x) && x != '^'))) {
                postfix = postfix + s.Pop();
            }
            s.Push(x);
        }
    }

    while(!s.IsEmpty()) {
        postfix = postfix + s.Pop();
    }

    cout << "Postfix expression: " << postfix;

    return 0;
}
