// #include<iostream>
// using namespace std;

// int main(){ 
// int arr[5]={2,4,6,8,10};

// for(int i=0;i<5;i++){
//     cout<<i<<" "<<arr[i]<<"\n";
// }

// return 0;
// }

// ************Factorial****************//

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the number: "<<endl;
//     cin>>n;
//     int r=1;

//     for(int i=n;i>0;i--){
//         r = r*i;
//     }
//     cout<<r<<endl;
//     return 0;
// }

// ************Fibonnaci Series**************//


#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter the first two numbers: "<<endl;
    cin>>a>>b;
    int n;
    cout<<"Enter the no. of terms: "<<endl;
    cin>>n;
    cout<<a<<" "<<b<<" ";

    for(int i=0;i<n-2;i++){
        int c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }

    return 0;
}

