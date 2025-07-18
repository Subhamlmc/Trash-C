#include <windows.h>
#include <stdlib.h>
#include <time.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
                   LPSTR lpCmdLine, int nCmdShow) {
    HDC hdcScreen = GetDC(NULL);
    int width = GetSystemMetrics(SM_CXSCREEN);
    int height = GetSystemMetrics(SM_CYSCREEN);

    StretchBlt(hdcScreen, 
               0, 0, width, height,       
               hdcScreen, 
               width - 1, 0, -width, height,  
               SRCCOPY);

    ReleaseDC(NULL, hdcScreen);
    return 0;
}
