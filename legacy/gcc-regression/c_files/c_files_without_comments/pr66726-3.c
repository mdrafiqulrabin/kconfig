 
 
 

extern unsigned short mode_size[];

int
oof (int mode)
{
  int tem;
  if (64 < mode_size[mode])
    tem = 64;
  else
    tem = mode_size[mode];
  return tem;
}

