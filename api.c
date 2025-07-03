#include <windows.h>
#include <stdio.h>
#include <string.h>  

int WINAPI WinMain(
    HINSTANCE hInstance,
    HINSTANCE hPrevInstance,
    LPSTR lpCmdLine,
    int nCmdShow
) {
    
    LPVOID pMem = VirtualAlloc(
        NULL,
        1024,
        MEM_COMMIT | MEM_RESERVE,
        PAGE_READWRITE
    );

    if (pMem == NULL) {
        MessageBox(NULL, "Memory allocation failed!!", "Reminder", MB_RETRYCANCEL | MB_DEFBUTTON1);
        return 1;
    }

   
    const char *text = "Hello, this is an example of memory allocation!!";

   
    int count = 0;
    while (text[count] != '\0') {
        count++;
    }

    
memcpy(pMem, text, count + 1); 

MessageBoxA(NULL, (LPCSTR)pMem, "Details", MB_OK | MB_ICONINFORMATION);

   
VirtualFree(pMem, 0, MEM_RELEASE);

    return 0;
}
