void almostMap(int *domain, int count)
{
  for(int i=0;i<count;i++)
  {
    (*domain)=(*domain)*(*domain);
      domain++;
  }

}