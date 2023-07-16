#include <windows.h>

int main()
{
    ShellExecute(NULL, L"open", L"calc.exe", NULL, NULL, SW_SHOW);
    return EXIT_SUCCESS;
}