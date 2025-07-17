#include <stdio.h>
#include <windows.h>
int main()

{
    while (1){
    printf("The loop is continuous  !!!");
    Sleep(1);
    if(GetAsyncKeyState(VK_ESCAPE) & 0x8000)
    {
        return 0;
    }
}
}
