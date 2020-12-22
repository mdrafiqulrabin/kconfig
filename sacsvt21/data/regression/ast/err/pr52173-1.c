 
 

int vec[500];

void func()
{ 
  __transaction_relaxed
    { 
      vec[123] = 456;
    }
}

int
main()
{ 
  int i;
  for(i = 0; i < 10; ++i)
    func();
}

