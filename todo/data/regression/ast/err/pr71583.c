 
 

void
f (int i)
{
  (int (*)[++i]) { int };  
  (int (*)[++i]) { };  
  (int (*)[++i]) { , };  
  (int (*)[++i]) { f () };  
}

