void multiArrayTransform(int **domain)
{
  
int currentRow = 0;
  while(**(domain+currentRow) != -1)
  {
    int localLimit = **(domain+currentRow);
    int localSum = 0;
    for(int i = 1; i <= localLimit; i++)
    {
      localSum += *(*(domain + currentRow) + i);
    }
    **(domain+currentRow) = localSum;
    currentRow++;
  }
  
  
}