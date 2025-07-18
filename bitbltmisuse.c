#include <windows.h>
#include <stdio.h>
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
                   LPSTR lpCmdLine, int nCmdShow) {
    HDC hdc = GetDC(NULL);  
    int width = GetSystemMetrics(SM_CXSCREEN);
    int height = GetSystemMetrics(SM_CYSCREEN);
    BitBlt(hdc, 0, 0, width, height, hdc, 0, 0, NOTSRCCOPY);

    ReleaseDC(NULL, hdc); 
    return 0;
}
