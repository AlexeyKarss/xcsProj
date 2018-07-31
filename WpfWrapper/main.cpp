#include <iostream>
#include "WpfWrapperMain.h"

using namespace std;
using namespace System::Runtime::InteropServices;

namespace WpfWrapperLib {

	void* Start2() {
		MainWin ^ mainWinApp = WpfWrapperLib::Instance->mainWinAppObj;
		mainWinApp->Start();
		return static_cast<void*>(Marshal::GetIUnknownForObject(mainWinApp));
	}

}

int main() {
	auto ptr = WpfWrapperLib::Start2();

	return 0;
}