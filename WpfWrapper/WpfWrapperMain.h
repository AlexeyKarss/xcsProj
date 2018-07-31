using namespace System;
using namespace WpfAppTest;

namespace WpfWrapperLib {
	public ref class WpfWrapperLib {
		WpfWrapperLib(void) {
			mainWinAppObj = gcnew MainWin();
		}

	public:
		MainWin ^ mainWinAppObj;
		static WpfWrapperLib ^ Instance = gcnew WpfWrapperLib();
	};

}