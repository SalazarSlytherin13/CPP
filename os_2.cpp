#include <iostream>
#include <windows.h>

using namespace std;

int main() {

    STARTUPINFO si;
    PROCESS_INFORMATION pi;

    
    ZeroMemory(&si, sizeof(si));
    si.cb = sizeof(si);

    ZeroMemory(&pi, sizeof(pi));

    cout << "Creating process..." << endl;

    
    if (CreateProcess(
        NULL,
        (LPWSTR)L"C:\\Windows\\System32\\notepad.exe",
        NULL,
        NULL,
        FALSE,
        0,
        NULL,
        NULL,
        &si,
        &pi
    )) {

        cout << "Process created successfully!" << endl;
        cout << "Process ID: " << pi.dwProcessId << endl;

        cout << "Process will terminate after 5 seconds..." << endl;

        // Wait for 5 seconds
        Sleep(5000);

        // Terminate the process
        TerminateProcess(pi.hProcess, 0);

        cout << "Process terminated successfully!" << endl;

        // Close handles
        CloseHandle(pi.hProcess);
        CloseHandle(pi.hThread);

    }
    else {
        cout << "Process creation failed!" << endl;
    }

    return 0;
}