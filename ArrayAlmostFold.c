int almostFold(int *domain, int count)
{
  int m=1;
  for(int i=0;i<count;i++)
  {
    m*=(*domain);
    domain++;
  }
  return m;
  
}