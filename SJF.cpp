#include <bits/stdc++.h>
using namespace std;

struct Process {
    int pid;
    int at;     
    int bt;     
    int ct=0;     
    int tat=0;    
    int wt=0;     
};

int main() {
    int n;
    cout << "Enter number of processes: ";
    cin >> n;

    Process p[n];

   
    for (int i = 0; i < n; i++) {
        p[i].pid = i + 1;

        cout << "Enter Arrival Time and Burst Time for P" 
             << p[i].pid << ": ";
        cin >> p[i].at >> p[i].bt;
    }

    int currentTime = 0;
    int completed = 0;

    while (completed < n) {
        int shortest = -1;

        
        for (int i = 0; i < n; i++) {
            if (p[i].ct == 0 && p[i].at <= currentTime) {

                if (shortest == -1 || p[i].bt < p[shortest].bt) {
                    shortest = i;
                }
            }
        }

        
        if (shortest == -1) {
            currentTime++;
            continue;
        }

        
        currentTime += p[shortest].bt;

        p[shortest].ct = currentTime;
        p[shortest].tat = p[shortest].ct - p[shortest].at;
        p[shortest].wt = p[shortest].tat - p[shortest].bt;

        completed++;
    }

    
    cout << "\nPID\tAT\tBT\tCT\tTAT\tWT\n";

    float totalWT = 0;
    float totalTAT = 0;

    for (int i = 0; i < n; i++) {
        cout << "P" << p[i].pid << "\t"
             << p[i].at << "\t"
             << p[i].bt << "\t"
             << p[i].ct << "\t"
             << p[i].tat << "\t"
             << p[i].wt << endl;

        totalWT += p[i].wt;
        totalTAT += p[i].tat;
    }

    cout << "\nAverage Waiting Time = " << totalWT / n;
    cout << "\nAverage Turnaround Time = " << totalTAT / n;

    return 0;
}