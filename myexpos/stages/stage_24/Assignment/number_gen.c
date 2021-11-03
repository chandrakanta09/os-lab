#include <stdio.h>
void main()
{
    int i;
    FILE *fptr;
    fptr = fopen("numbers.dat","w");
    for(i=1;i<2048;i++)
    {
        fprintf(fptr,"%d\n",i);
    }
    
}