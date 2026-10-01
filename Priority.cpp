#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

struct Process {
    string id;
    int at;       
    int bt;     
    int priority; 
    int ct;       
    int tat;      
    int wt;       
    bool isCompleted = false;
};


bool compareArrival(const Process& a, const Process& b) {
    if (a.at == b.at) {
        return a.priority < b.priority; 
    }
    return a.at < b.at;
}

int main() {
    int n;
    cout << "Enter the number of processes: ";
    cin >> n;

    vector<Process> p(n);

 
    cout << "\nEnter Arrival Time, Burst Time, and Priority for each process:\n";
    for (int i = 0; i < n; i++) {
        p[i].id = "P" + to_string(i + 1);
        cout << "[" << p[i].id << "] Arrival Time: ";
        cin >> p[i].at;
        cout << "[" << p[i].id << "] Burst Time:   ";
        cin >> p[i].bt;
        cout << "[" << p[i].id << "] Priority:     ";
        cin >> p[i].priority;
        cout << "-----------------------------------\n";
    }

  
    sort(p.begin(), p.end(), compareArrival);

    int currentTime = 0;
    int completedCount = 0;
    float totalTAT = 0, totalWT = 0;

    
    while (completedCount < n) {
        int idx = -1;
        int highestPriority = 1e9; 

     
        for (int i = 0; i < n; i++) {
            if (p[i].at <= currentTime && !p[i].isCompleted) {
                if (p[i].priority < highestPriority) {
                    highestPriority = p[i].priority;
                    idx = i;
                }
                
                else if (p[i].priority == highestPriority) {
                    if (p[i].at < p[idx].at) {
                        idx = i;
                    }
                }
            }
        }

        
        if (idx == -1) {
            currentTime++;
        } else {
            
            p[idx].ct = currentTime + p[idx].bt;
            p[idx].tat = p[idx].ct - p[idx].at;
            p[idx].wt = p[idx].tat - p[idx].bt;

            totalTAT += p[idx].tat;
            totalWT += p[idx].wt;

            p[idx].isCompleted = true;
            completedCount++;
            currentTime = p[idx].ct;
        }
    }

  
    cout << "\n=========================================================\n";
    cout << "Process\tAT\tBT\tPriority\tCT\tTAT\tWT\n";
    cout << "=========================================================\n";
    for (int i = 0; i < n; i++) {
        cout << p[i].id << "\t"
             << p[i].at << "\t"
             << p[i].bt << "\t"
             << p[i].priority << "\t\t"
             << p[i].ct << "\t"
             << p[i].tat << "\t"
             << p[i].wt << "\n";
    }
    cout << "=========================================================\n";

    cout << fixed << setprecision(2);
    cout << "\nAverage Turnaround Time = " << totalTAT / n << " ms";
    cout << "\nAverage Waiting Time    = " << totalWT / n << " ms\n";

    return 0;
}

