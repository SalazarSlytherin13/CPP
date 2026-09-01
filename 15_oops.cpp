#include<ostream>
using namespace std;

class Example;  //Forward Declaration of Class
class Test{
    int a;
    public: 
      void getData(int);
      int getvalue();
      int sum(Test,Example);

};

class Example{
    int b;
    public:
      void get(int);
      int sum(Test,Example);
};

void Test::getData(int x){
    a=x;
}

void Example::get(int y){
    b=y;
}

int Test::getvalue(){
    return a;
}

int Example::sum(Test T, Example E){
    int r=E.b+T.getvalue();
    return r;
}

int main(){
    class Test T1; Example E1;
    int n1,n2;
    T1.getData(n1);
    E1.get(n2);
    
   
    

    

}