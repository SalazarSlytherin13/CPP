// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter no. of processes: ";
//     cin>>n;

//     int at, bt;

//     string PID;
//     for(int i=0;i<n;i++){
//         cout<<"Enter the process: ";
//         cin>>PID;
        
//         cout<<"Enter the Arrival Time: ";
//         cin>>at;

//         cout<<"Enter the Burst Time:";
//         cin>>bt;
//     }

    




// }


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Process {
public:
    string PID;
    int AT;   
    int BT;   
    int CT;   
    int TAT;  
    int WT;   

    Process() {
        CT = 0;
        TAT = 0;
        WT = 0;
    }
};

int main() {

    int n;

    cout << "Enter no. of processes: ";
    cin >> n;

    vector<Process> p(n);

    
    for (int i = 0; i < n; i++) {

        cout << "\nEnter the process: ";
        cin >> p[i].PID;

        cout << "Enter the Arrival Time: ";
        cin >> p[i].AT;

        cout << "Enter the Burst Time: ";
        cin >> p[i].BT;
    }

    
    sort(p.begin(), p.end(), [](Process a, Process b) {
        return a.AT < b.AT;
    });

    
    int currentTime = 0;

    for (int i = 0; i < n; i++) {

        
        if (currentTime < p[i].AT) {
            currentTime = p[i].AT;
        }

        p[i].CT = currentTime + p[i].BT;

        p[i].TAT = p[i].CT - p[i].AT;

        p[i].WT = p[i].TAT - p[i].BT;

        currentTime = p[i].CT;
    }

    
    cout << "\n\n";
    cout << "PID\tAT\tBT\tCT\tTAT\tWT\n";

    for (int i = 0; i < n; i++) {
        cout << p[i].PID << "\t"
             << p[i].AT << "\t"
             << p[i].BT << "\t"
             << p[i].CT << "\t"
             << p[i].TAT << "\t"
             << p[i].WT << endl;
    }

    return 0;
}



