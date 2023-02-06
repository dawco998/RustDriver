#include "hook.h"

extern "C" NTSTATUS DriverEntry(PDRIVER_OBJECT  driver_object, PUNICODE_STRING registry_path)
{
	UNREFERENCED_PARAMETER(driver_object);
	UNREFERENCED_PARAMETER(registry_path);

	dawchook::call_kernel_function(&dawchook::hook_handler);

	return STATUS_SUCCESS;
}