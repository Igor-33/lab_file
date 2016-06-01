#include <cstdlib>
#include <iostream>
#include <stdio.h>
 
int main()
{
   FILE *file;  
    double prices[100000];
      int n=0;
      
      file=fopen("fileDj.txt", "r");
        if (file==NULL) 
 { 
     printf("Error");
       exit(0);
 } 
 while (!feof(file)) {
    
      fscanf(file,"%lf\n", & prices[n]);
         printf("p[%d] = %lf\n", n, prices[n]);
            n++;
     }
        fclose(file);
 
   system("PAUSE");
   return 0;
}
