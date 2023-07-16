#include <windows.h>

int main()
{
	wchar_t openParam[] = { 'o', 'p', 'e', 'n', 0 };
	wchar_t calcParam[] = { 'c', 'a', 'l', 'c', '.', 'e', 'x', 'e', 0 };
	ShellExecute(NULL, openParam, calcParam, NULL, NULL, SW_SHOW);
	return EXIT_SUCCESS;
}