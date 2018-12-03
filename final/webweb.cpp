#include <windows.h>
#include <tchar.h>
#include <assert.h>
 
const TCHAR szOperation[] = _T("open");
const TCHAR szAddress[] = _T("https:/github.com/");
int WINAPI WinMain(HINSTANCE hInst, HINSTANCE, LPSTR lpCmd, int
	nShow)
{
	HINSTANCE hRslt = ShellExecute(NULL, szOperation,
		szAddress, NULL, NULL, SW_SHOWNORMAL);
 
	assert(hRslt > (HINSTANCE)HINSTANCE_ERROR);
 
	return 0;
}
