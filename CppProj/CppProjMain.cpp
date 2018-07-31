#include "NativeInterface.h"
#include <iostream>

#include <objbase.h>
#include <QApplication>

using namespace std;

int main(int argc, char *argv[]) {
	QApplication a(argc, argv);
	//HRESULT hr = CoInitialize(NULL);
	auto app = Start();
	SetText(app, "Hello");
	
	//CoUninitialize();
	//cout << GetId() << endl;
	return a.exec();

}