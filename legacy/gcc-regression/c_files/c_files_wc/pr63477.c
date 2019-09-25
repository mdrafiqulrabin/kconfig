 

#define MAX_VAL 16

typedef struct
{
  int itemList[MAX_VAL + 1];
  unsigned int numItems;
} ItemList;

void FrobList (ItemList *l)
{
  unsigned int i;

  for (i = 0; i < l->numItems - 1; i++)
    {
      int minVal = l->itemList[i];

      unsigned int minIdx = i;
      unsigned int idx;

      for (idx = i + 1; idx < l->numItems; ++idx) {

	if (l->itemList[idx] < minVal)   
	  {
	    minVal = l->itemList[idx];
	    minIdx = idx;
	  }
      }

      l->itemList[i] = l->itemList[minIdx];
    }
}

