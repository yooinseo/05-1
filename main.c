#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int x;
    
    printf("Input an integer : ");
    scanf("%d", &x);
    
    if (x > 0)  
       printf("����Դϴ�.\n");
    else if (x < 0)
         printf("�����Դϴ�.\n");
    else if (x == 0)
         printf("0�Դϴ�.\n ");
  
  system("PAUSE");	
  return 0;
}
