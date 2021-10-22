#include<string.h>
void remDuplicates(char *str)
{
int x = strlen(str),temp,count=0;
  	int i,j;
  	/*for(i=0;i<x-1;i++)
    {
      if(str[i] == str[i+1])
      {
        str[i+1] = '0';
      }
      //else if(str[i] = '0' && str[i-1] == str[i+1])
        //str[i+1] = '0';
      
    }*/
  	for(i=0;i<x;i++)
    {
      for(j=i+1;j<x;j++)
      {
        if(str[i] == str[j])
          str[j] = '0';
      }
    }
  for(i=0;i<x;i++)
  {
    if(str[i]!='0')
        count++;
  }
  int k=0;
  char a[count];
  for(i=0;i<x;i++)
  {
    if(str[i]!='0')
    {
      a[k] = str[i];
      k++;
    }
  }
  for(i=0;i<=count;i++)
  {
    if(i==count)
      str[i] = '\0';
    else
    str[i] = a[i];
  }
 // printf("count=%d\n",count);

}
