#include <efi.h>
#include <efilib.h>

EFI_FILE* LoadFile(EFI_FILE* Directory, CHAR16* Path, EFI_HANDLE ImageHandle, EFI_SYSTEM_TABLE* SystemTable)
{
	
}

EFI_STATUS efi_main (EFI_HANDLE ImageHandle, EFI_SYSTEM_TABLE *SystemTable) {

	InitializeLib(ImageHandle, SystemTable);
	Print(L"Welcome To A22_OS_dev_0.0.l-alpha \n\r");
	Print(L"Copyright Nilesh@Asia22 \n\r");

	return EFI_SUCCESS; // Exit the UEFI application
}
