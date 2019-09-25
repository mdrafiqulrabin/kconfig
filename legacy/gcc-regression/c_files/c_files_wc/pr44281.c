 
 
 
 

#include <stdint.h>

register uint64_t global_flag_stack __asm__("rbx");

void push_flag_into_global_reg_var(uint64_t a, uint64_t b) {
  uint64_t flag = (a==b);
  global_flag_stack <<= 8;
  global_flag_stack  |= flag;
}

