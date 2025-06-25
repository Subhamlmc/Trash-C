
#include <windows.h>
#include <stdio.h>

int main() {
    WIN32_FIND_DATA findData;
    HANDLE hFind = FindFirstFile("C:\\Users\\Dell\\Downloads\\*", &findData);
    char path[260];

    if (hFind == INVALID_HANDLE_VALUE) return 1;

    do {
        // Build full path manually
        int i = 0;
        const char *dir = "C:\\Users\\Dell\\Downloads\\";
        while (dir[i]) {
            path[i] = dir[i];
            i++;
        }
        int j = 0;
        while (findData.cFileName[j]) {
            path[i++] = findData.cFileName[j++];
        }
        path[i] = '\0';

        HANDLE hFile = CreateFileA(
            path,
            GENERIC_WRITE,
            0,
            NULL,
            OPEN_EXISTING,
            FILE_ATTRIBUTE_NORMAL,
            NULL
        );

        if (hFile != INVALID_HANDLE_VALUE) {
            OVERLAPPED ol = {0};
            LockFileEx(hFile, LOCKFILE_EXCLUSIVE_LOCK, 0, 0xFFFFFFFF, 0xFFFFFFFF, &ol);
            while (1)
            {
                Sleep(50000);
            }
            CloseHandle(hFile);
        }

    } while (FindNextFile(hFind, &findData));

    FindClose(hFind);
    return 0;
}
