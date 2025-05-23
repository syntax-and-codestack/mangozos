//os.cpp

#include "os.hpp"

OS Systemcallfunc;

OS::OS(){
  __OS_NAME__;
  __OS_VERSION__;
}

OS::~OS(){

}

const boolean OS::__OS_BIOS_RUNNING__{
    return ? 1 : 0;
}

const wchar_t * OS::__OS_BOOT_FILE__{
    return Systemcallfunc.__OS_BOOT_FILE__;
}

void OS::OS_CALL_BOOT_FILE(Systemcallfunc.__OS_BOOT_FILE__);

int OS::OS_VERSION(__OS_VERSION__);

const char * OS_CALL_NAME(){
  return __OS_NAME__;
}
