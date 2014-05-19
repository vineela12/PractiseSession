#include <stdio.h>
#include <math.h>
 
void printPowerSet(char *set, int set_size)
{
   
    unsigned int pow_set_size = pow(2, set_size);
    int counter, j;
 
    /*Run from counter 000..0 to 111..1*/
    for(counter = 0; counter < pow_set_size; counter++)
    {
      for(j = 0; j < set_size; j++)
       {
     
          if(counter & (1<<j))
            printf("%c", set[j]);
       }
       printf("\n");
    }
}
 
/*Driver program to test printPowerSet*/
int main()
{
    char set[] = {'1','2','3','4'};
    printPowerSet(set, 4);
 
    getchar();
    return 0;
}
