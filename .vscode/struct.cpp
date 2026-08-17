#include<iostream>
using namespace std;

struct Time{
    int hour;
    int minute;
    int second;
};


int main(){
   Time T={7,15,20};
   cout<<T.hour<<":"<<T.minute<<":"<<T.second<<"\n";

   Time *ptr=&T;
   cout<<ptr->hour<<":"<<ptr->minute<<":"<<ptr->second<<"\n";
}