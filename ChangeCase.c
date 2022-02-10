#include<stdio.h>

char * changeCase(char sample[]);

int main()
{
    char sample[] = "Lorem Ipsum is simply dummy text of the printing and typesetting industry.";
    
    char *p = changeCase(sample);
    printf("New string is \n%s\n", p);
    
    return 0;
}

char * changeCase(char sample[]) 
{
    int i = 0;
    
  for(i = 2; sample[i] != '\0';  i=i+3)
  //while(sample[i] != '\0')
  {
      if((sample[i] >= 'A') && (sample[i] <= 'Z'))
      {
          sample[i] = sample[i] + 32;
      }
      else if((sample[i] >= 'a') && (sample[i] <='z'))
      {
          sample[i] = sample[i] - 32;
      }
  }
 return sample;
}

/*
Output
New string is 
LoRem IpSum Is
*/