#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;

    v.push_back(1);
    v.emplace_back(2);
    v.emplace_back(3);
    v.emplace_back(4);
    v.emplace_back(5);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<"\n";
    }
    
    vector<int> w(5,100);

    for(int i=0;i<w.size();i++){
        cout<<w[i]<<"\n ";
    }

    vector<int> x(6);

    cout<<x[0]<<"\n";

    for(int i=0;i<x.size();i++){
         cout<<x[i]<<" ";
    }

}
