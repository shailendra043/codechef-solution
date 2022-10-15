#include <stdio.h>
#include <stdlib.h> 
int findSumOfDigits(int num)
{
    int sum = 0;
    printf("ENTER THE NUMERIC VALUE::");
    scanf("%d",&num);
    while (num > 0) {
        sum = sum + (num % 10);

        num = num / 10;
    }
    return sum;
}
  
int main(int argc, char* argv[])
{
  
    int num;
    
    num = atoi(argv[1]);
        printf("THE SUM IS::%d\n", findSumOfDigits(num));
    
    return 0;
}
