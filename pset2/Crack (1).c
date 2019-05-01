//Bintou CAMARA

#define _XOPEN_SOURCE
#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include<cs50.h>
int main (int argc,string argv[])
{
 if(argc==2)
 {
  const int characters_count =53;
  string characters="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
  string hash = argv[1];
  char salt[3];
  memcpy(salt,hash,2);
  salt[2]='\0';
  char key[5]="\0\0\0\0\0";
  for(int i=0; i<characters_count; i++)
  {
   for( int j=0; j<characters_count; j++)
   {
    for( int k=0; k<characters_count; k++)
    {
     for( int l=0; l<characters_count; l++)
     {
      key[0]=characters[i];
      key[1]=characters[j];
      key[2]=characters[k];
      key[3]=characters[l];
      if(strcmp(crypt(key,salt),hash)  == 0 )
      {
       printf
       ("%s\n",key);
       return 0;
      }
      }
      }
   }
  }
   printf("passworld could not cracked");
   return 0;
  }
}
