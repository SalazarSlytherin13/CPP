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
using namespace std;

int main() {
    int n = 3;

    int at[3] = {0, 1, 2};
    int bt[3] = {4, 3, 2};

    int ct[3], tat[3], wt[3];

    float total_tat = 0, total_wt = 0;

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            ct[i] = at[i] + bt[i];
        }
        else {
            if (at[i] > ct[i-1])
                ct[i] = at[i] + bt[i];
            else
                ct[i] = ct[i-1] + bt[i];
        }

        tat[i] = ct[i] - at[i];
        wt[i] = tat[i] - bt[i];

        total_tat += tat[i];
        total_wt += wt[i];
    }

    cout << "P\tAT\tBT\tCT\tTAT\tWT\n";

    for (int i = 0; i < n; i++) {
        cout << "P" << i+1 << "\t"
             << at[i] << "\t"
             << bt[i] << "\t"
             << ct[i] << "\t"
             << tat[i] << "\t"
             << wt[i] << endl;
    }

    cout << "\nAverage TAT = " << total_tat/n;
    cout << "\nAverage WT = " << total_wt/n;

    return 0;
}




