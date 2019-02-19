/*
 ============================================================================
 Name        : CS2650_Lecture6_Code6.c
 Author      : Robert Delfin
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
void main() {
   FILE *fp;
   char buff[255];
   fp = fopen("textFile.txt", "r");
   fscanf(fp, "%s", buff);
   printf("1 : %s\n", buff );
   fgets(buff, 255, (FILE*)fp);
   printf("2: %s\n", buff );
   fgets(buff, 255, (FILE*)fp);
   printf("3: %s\n", buff );
   fclose(fp);
}
