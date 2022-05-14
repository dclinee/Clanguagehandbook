// the arugument of main()
#include <stdio.h>
int main(int argc, char ** argv)
{
  if(argc < 2)
    {
      printf("1 argumen needed!");
}
  else
    {
      printf("\n -- %s Enter", argv[1]);
      printf("\n -- %s is the first argumen\n", argv[0]);
}

  return 0;
}
