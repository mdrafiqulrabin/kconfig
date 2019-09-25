 
 
 

typedef double EXPRESS[5];
void Parse_Rel_Factor (EXPRESS Express,int *Terms);
void Parse_Vector ()
{
   EXPRESS Express;
   int Terms;
   for (Terms = 0; Terms < 5; Terms++)
     Express[Terms] = 1.0;
   Parse_Rel_Factor(Express,&Terms);
}

 

