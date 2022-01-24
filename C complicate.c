#include <stdio.h>
#define SECOND_PER_MINUTE 60

int main(void)
{
	int x = 100;
	printf("현재 x의값은  %d입니다.\n",x);
	x += 50;
    printf("현재 x의값은  %d입니다.\n",x);
    x -= 50;
    printf("현재 x의값은  %d입니다.\n",x);
    x *=50;
    printf("현재 x의값은  %d입니다.\n",x);
    x /=50;
    printf("현재 x의값은  %d입니다.\n",x);
    x %=3 ;
    printf("현재 x의값은  %d입니다.\n",x);
	return 0 ;
}
