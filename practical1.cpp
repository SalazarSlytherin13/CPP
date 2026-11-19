#include<iostream>
using namespace std;

class Sample;

class Example{
    int a;
    public:
       void getData(int);
       friend void compare(Example,Sample);
};

class Sample{
    int b;
    public:
      void getInfo(int);
      friend void compare(Example, Sample);
};

void Example::getData(int x){
    a=x;
}

void Sample::getInfo(int y){
    b=y;
}

void compare(Example E, Sample S){
    int s=E.a;
    int r=S.b;

    if(s>=r){
        cout<<E.a;
    }

    else{
        cout<<S.b;
    }
}

int main(){
    Example E1;
    Sample S1;

    E1.getData(10);
    S1.getInfo(20);

    compare(E1,S1);

    return 0;
}



#include <iostream>
#include <cstdarg>
using namespace std;

int sum(int count, ...)
{
    int total = 0;

    va_list args;
    va_start(args, count);

    for (int i = 0; i < count; i++)
    {
        total = total + va_arg(args, int);
    }

    va_end(args);

    return total;
}

int main()
{
    cout << "Sum = " << sum(3, 10, 20, 40) << endl;
    cout << "Sum = " << sum(5, 1, 2, 3, 4, 5) << endl;

    return 0;
}
