 
 
 

struct __jmp_buf_tag {};
typedef struct __jmp_buf_tag jmp_buf[1];
extern int _setjmp (struct __jmp_buf_tag __env[1]);

jmp_buf g_return_jmp_buf;

void SetNaClSwitchExpectations (void)
{
}
void TestSyscall(void)
{
  SetNaClSwitchExpectations();
  _setjmp (g_return_jmp_buf);
}

 

