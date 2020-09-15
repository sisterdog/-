#include <iostream>
#include <windows.h>
#include <tchar.h>
#include <stdio.h>
using namespace std;
int WINAPI main()
{
	MessageBox(NULL, "本程序将启动Python编写的3D场景。", _T("C++编写的启动程序"), MB_OKCANCEL);
	system("pythonw.exe D://ddist//程序//程序//程序//新建文件夹//熊猫走动.pyw");
	MessageBox(NULL, "终于结束了，我再也不想看到熊猫！！！！！", _T("熊猫快滚"), MB_OKCANCEL);
	return 0;
}
