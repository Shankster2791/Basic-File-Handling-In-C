#include <stdio.h>
int main(){
   FILE * file;
   char str;
   if (file = fopen("first.txt", "r")){
      while((str=fgetc(file))!=EOF)
      printf("%c",str);
   }
    fclose(file);
    if (file = fopen("first.txt", "w")){
      if(fprintf(file, "Second") >= 0)
      printf("\n\nWrite operation successful");
   }
   fclose(file);

   return 0;
}
