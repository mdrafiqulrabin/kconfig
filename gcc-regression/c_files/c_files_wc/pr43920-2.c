 
 
 

#include <stdio.h>

extern int lseek(int, long, int);

int getFileStartAndLength (int fd, int *start_, size_t *length_)
{
      int start, end;
      size_t length;

      start = lseek (fd, 0L, SEEK_CUR);
      end = lseek (fd, 0L, SEEK_END);

      if (start == -1 || end == -1)
         return -1;

      length = end - start;
      if (length == 0)
         return -1;

      *start_ = start;
      *length_ = length;

      return 0;
}

 
 
 

