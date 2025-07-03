#include <windows.h>
int main()
{
    STARTUPINFOA si ={0};
    PROCESS_INFORMATION pi= {0};
    si.cb=sizeof(si);

char result =CreateProcessA
(
    "C:\\Windows\\System32\\notepad.exe",
    NULL, NULL, NULL, FALSE, CREATE_SUSPENDED , NULL, NULL,  &si, &pi);
    if (! result)
    {
        MessageBox(NULL, "Error","Fatal_Error",MB_ICONERROR);
        return 1;
    }

    CloseHandle(pi.hProcess);
    CloseHandle(pi.hThread);
return 0;
}