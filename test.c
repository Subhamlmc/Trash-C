#include <windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
                   LPSTR lpCmdLine, int nCmdShow) {

    MessageBox(NULL, "About to block input for 5 seconds", "Warning", MB_OK);
    BOOL result = BlockInput(TRUE);

    if (result) {
        Sleep(5000);      
        BlockInput(FALSE);  
        MessageBox(NULL, "Input restored", "Info", MB_OK);
    } else {
        MessageBox(NULL, "Failed to block input. Run as Administrator.", "Error", MB_ICONERROR);
    }

    return 0;
}




