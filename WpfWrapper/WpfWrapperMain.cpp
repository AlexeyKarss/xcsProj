#include "WpfWrapperMain.h"
#include "NativeInterface.h"

using namespace WpfAppTest;
using namespace System::Runtime::InteropServices;

namespace WpfWrapperLib {
#ifdef __cplusplus
	extern "C"
	{
#endif
		__declspec(dllexport) void * Start() {
			MainWin ^ mainWinApp = WpfWrapperLib::Instance->mainWinAppObj;
			mainWinApp->Start();
			return static_cast<void*>(Marshal::GetIUnknownForObject(mainWinApp));
		}

		__declspec(dllexport) void * GetWinId(void * app) {
			MainWin ^ mainWinApp = (MainWin ^)Marshal::GetObjectForIUnknown(IntPtr(app));
			return static_cast<void*>(mainWinApp->WinId());
		}

		__declspec(dllexport) void SetText(void *app, const char *txt) {
			MainWin ^ mainWinApp = (MainWin ^)Marshal::GetObjectForIUnknown(IntPtr(app));
			mainWinApp->SetText(gcnew String(txt));
		}

#ifdef __cplusplus
	}
#endif
}
