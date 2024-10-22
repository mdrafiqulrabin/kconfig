 
 
 
 
 

#include <altivec.h>
void abort (void);

vector double vdx = { 0.0, 1.0 };
vector double vdy = { 2.0, 3.0 };
vector double vdz;

vector signed long long vsllx = { 0, 1 };
vector signed long long vslly = { 2, 3 };
vector signed long long vsllz;

vector unsigned long long vullx = { 0, 1 };
vector unsigned long long vully = { 2, 3 };
vector unsigned long long vullz;

vector float vfx = { 0.0, 1.0, 2.0, 3.0 };
vector float vfy = { 4.0, 5.0, 6.0, 7.0 };
vector float vfz;

vector signed int vsix = { 0, 1, 2, 3 };
vector signed int vsiy = { 4, 5, 6, 7 };
vector signed int vsiz;

vector unsigned int vuix = { 0, 1, 2, 3 };
vector unsigned int vuiy = { 4, 5, 6, 7 };
vector unsigned int vuiz;

vector signed short vssx = { 0, 1, 2, 3, 4, 5, 6, 7 };
vector signed short vssy = { 8, 9, 10, 11, 12, 13, 14, 15 };
vector signed short vssz;

vector unsigned short vusx = { 0, 1, 2, 3, 4, 5, 6, 7 };
vector unsigned short vusy = { 8, 9, 10, 11, 12, 13, 14, 15 };
vector unsigned short vusz;

vector signed char vscx = { 0, 1, 2, 3, 4, 5, 6, 7,
			    8, 9, 10, 11, 12, 13, 14, 15 };
vector signed char vscy = { 16, 17, 18, 19, 20, 21, 22, 23,
			    24, 25, 26, 27, 28, 29, 30, 31 };
vector signed char vscz;

vector unsigned char vucx = { 0, 1, 2, 3, 4, 5, 6, 7,
			    8, 9, 10, 11, 12, 13, 14, 15 };
vector unsigned char vucy = { 16, 17, 18, 19, 20, 21, 22, 23,
			    24, 25, 26, 27, 28, 29, 30, 31 };
vector unsigned char vucz;

int
main ()
{
  vdz = vec_xxpermdi (vdx, vdy, 0b01);
  if (vdz[0] != 0.0 || vdz[1] != 3.0)
    abort ();
  vdz = vec_xxpermdi (vdx, vdy, vscx);  
  vsllz = vec_xxpermdi (vsllx, vslly, 0b10);
  vsllz = vec_xxpermdi (vsllx, vslly, vslly);  
  vullz = vec_xxpermdi (vullx, vully, 0b10);
  vullz = vec_xxpermdi (vullx, vully, vully);  
  if (vsllz[0] != 1 || vsllz[1] != 2)
    abort ();

  vfz = vec_xxpermdi (vfx, vfy, 0b01);
  vfz = vec_xxpermdi (vfx, vfy, vfy);  
  if (vfz[0] != 0.0 || vfz[1] != 1.0 || vfz[2] != 6.0 || vfz[3] != 7.0)
    abort ();

  vsiz = vec_xxpermdi (vsix, vsiy, 0b10);
  vsiz = vec_xxpermdi (vsix, vsiy, vsiy);  
  vuiz = vec_xxpermdi (vuix, vuiy, 0b10);
  vuiz = vec_xxpermdi (vuix, vuiy, vuiy);  
  if (vsiz[0] != 2 || vsiz[1] != 3 || vsiz[2] != 4 || vsiz[3] != 5)
    abort ();

  vssz = vec_xxpermdi (vssx, vssy, 0b00);
  vssz = vec_xxpermdi (vssx, vssy, vssy);  
  vusz = vec_xxpermdi (vusx, vusy, 0b00);
  vusz = vec_xxpermdi (vusx, vusy, vusy);  
  if (vssz[0] != 0 || vssz[1] != 1 || vssz[2] != 2 || vssz[3] != 3
      || vssz[4] != 8 || vssz[5] != 9 || vssz[6] != 10 || vssz[7] != 11)
    abort ();

  vscz = vec_xxpermdi (vscx, vscy, 0b11);
  vscz = vec_xxpermdi (vscx, vscy, vscy); 
  vucz = vec_xxpermdi (vucx, vucy, 0b11);
  vucz = vec_xxpermdi (vucx, vucy, vucy); 
  if (vscz[0] != 8 || vscz[1] != 9 || vscz[2] != 10 || vscz[3] != 11
      || vscz[4] != 12 || vscz[5] != 13 || vscz[6] != 14 || vscz[7] != 15
      || vscz[8] != 24 || vscz[9] != 25 || vscz[10] != 26 || vscz[11] != 27
      || vscz[12] != 28 || vscz[13] != 29 || vscz[14] != 30 || vscz[15] != 31)
    abort ();

  return 0;
}

