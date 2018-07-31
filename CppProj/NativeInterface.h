#ifdef __cplusplus
extern "C"{
#endif

	__declspec(dllexport) void * Start();
	__declspec(dllexport) void SetText(void * app, const char * txt);
	__declspec(dllexport) void *GetWinId(void * app);

#ifdef __cplusplus
}
#endif