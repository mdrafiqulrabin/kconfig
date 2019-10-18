 
 
 

extern double host_frametime;
extern float pitchvel;
void V_DriftPitch (float delta, float move)
{
  if (!delta)
    move = host_frametime;
  if (delta > 0)
    ;
  else if (delta < 0 && move > -delta)
    pitchvel = 0;
}

