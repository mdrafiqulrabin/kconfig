struct var_len
{
  int field1;
  const char field2[];
};

 
static const struct var_len var_array[] = 
{
  { 1, "Long exposure noise reduction" },  
  { 2, "Shutter/AE lock buttons" },  
  { 3, "Mirror lockup" }  
};

