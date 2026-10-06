#include<iostream>
using namespace std;

class Item{
    static int count;
    public:
        static void show();
};


int Item::count=10;

void Item::show(){
    cout<<count;
}

int main(){
    Item::show();
}