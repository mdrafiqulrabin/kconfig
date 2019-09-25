 
 

 

void (*indirect)(void);

void
foo(){
    __transaction_relaxed {
      (*indirect)();
    }
}

 

