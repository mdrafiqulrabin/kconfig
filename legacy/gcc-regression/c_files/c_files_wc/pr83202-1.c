 
 

void test(double data[8][8])
{
  for (int i = 0; i < 8; i++)
    {
      for (int j = 0; j < i; j+=4)
	{
	  data[i][j] *= data[i][j];
	  data[i][j+1] *= data[i][j+1];
	  data[i][j+2] *= data[i][j+2];
	  data[i][j+3] *= data[i][j+3];
	}
    }
}

 
 

