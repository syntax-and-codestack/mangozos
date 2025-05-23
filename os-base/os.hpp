//os.hpp

#ifndef __OS_HPP__
#define __OS_HPP__

#define __OS_NAME__ "Mangoz OS"
#define __OS_VERSION__ 1

typedef bool boolean;

class OS{
public:
  OS();
  ~OS();

  //NEVER CHANGE THE BOOT FILES NAME
  const boolean __OS_BIOS_RUNNING__; // is running?
  const wchar_t * __OS_BOOT_FILE__ = "Mangoz_OS.asm";
  void OS_CALL_BOOT_FILE(const wchar_t * __FILE__);
};

#endif
