#include<iostream>
using namespace std;

int main(){
    pair<int, int> p = {3,4};
    cout<<p.first<<" "<<p.second<<"\n";

    pair<int, pair<int, int>> r = {2, {5,6}};
    cout<<r.first<<" "<<r.second.first<<" "<<r.second.second<<"\n";

    pair<pair<int,int>, int> q = {{7,8}, 9};
    cout<<q.first.first<<" "<<q.first.second<<" "<<q.second<<"\n";

    pair<int, int> arr[]={{1,2}, {3,4}, {5,6 }};
    cout<<arr[1].second<<" "<<arr[2].first<<" "<<arr[0].first;

    return 0;
}