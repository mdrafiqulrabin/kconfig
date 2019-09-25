 
 

int f(int i)
{
  static int g();  
  static int g() { return i; }  
  return g();
}

int k (int i)
{
  static int g ();  
  int g () {
	return i;
  }

  return g ();
}

int l (int i)
{
  auto int g ();
  static int g () {  
    return i;
  }

  static int h () {  
    return 3;
  }
  return g () + h ();
}

int m (int i)
{
  static g ();   
  static g () { return i; }  
  return g ();
}

