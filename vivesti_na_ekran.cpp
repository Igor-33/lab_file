#include <cstdlib>
#include <iostream>
#include <stdio.h>
 
int main()
{
   FILE *file;  
    int a, b;
      file=fopen("fileA.txt", "r");
        if (file==NULL) 
 { 
     printf("Error");
     exit(0);
 } 
    fscanf(file, "%d", &a);
      fclose(file);
         printf("\n%d\n", a);
 
 system("PAUSE");
   return 0;
}
