#include<iostream>
using namespace std;

class Startup{
    string a;
    int b;
    public:
      void getData(string,int);
      void print(Startup, Startup, Startup);
      friend Startup sum(Startup, Startup, Startup);
      void display(Startup);
      

};

void Startup::getData(string name,int amount){
    a=name;
    b=amount;
}


void Startup::print(Startup S1, Startup S2, Startup S3){
    cout<<"Name: "<<S1.a<<" "<<"Contribution: "<<S1.b<<endl;
    cout<<"Name: "<<S2.a<<" "<<"Contribution: "<<S2.b<<endl;
    cout<<"Name: "<<S3.a<<" "<<"Contribution: "<<S3.b<<endl;
}



Startup sum(Startup S1, Startup S2, Startup S3){
    Startup A;
    A.b=S1.b+S2.b+S3.b;
    return A;

}

void Startup::display(Startup S4){
    cout<<S4.b;

}

int main(){
    Startup X1,X2,X3,X4;
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    string r1,r2,r3;
    cin>>r1>>r2>>r3;

    X1.getData(r1,n1);
    X2.getData(r2,n2);
    X3.getData(r3,n3);

    X4=sum(X1,X2,X3);

    X4.display(X4);



    
}