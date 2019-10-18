 
 
 
 

void __attribute__((sysv_abi)) a() {
}

static void __attribute__((sysv_abi)) (*volatile a_noinfo)() = a;

void __attribute__((ms_abi)) b() {
  a_noinfo ();
}

