#include<iostream>
using namespace std;

class Startup{
    string a;
    int b;
    public:
      void getData(string,int);
      void print(Startup);
      friend Startup sum(Startup, Startup, Startup);
      void display(Startup);
      

};

void Startup::getData(string name,int amount){
    a=name;
    b=amount;
}


void Startup::print(Startup S){
    cout<<"Name: "<<S.a<<" "<<"Contribution: "<<S.b<<endl;
    
}



Startup sum(Startup S1, Startup S2, Startup S3){
    Startup A;
    A.b=S1.b+S2.b+S3.b;
    return A;

}

void Startup::display(Startup S4){
    cout<<S4.b<<endl;

    if(S4.b>=100000){
        cout<<"Can start a startup";
    }
    else{
        cout<<"Cannot start a startup";
    }

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

    X1.print(X1);
    X2.print(X2);
    X3.print(X3);

    X4=sum(X1,X2,X3);

    X4.display(X4);



    
}