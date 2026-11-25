#include<iostream>
using namespace std;

class Example{
    public:
       int rollNo;
       void display();
};

void Example::display(){
    cout<<rollNo<<endl;
}

int main(){
    Example *ptr=new Example;
    ptr->rollNo=101;
    ptr->display();
    (*ptr).display();

    return 0;
}
