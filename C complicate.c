#include <stdio.h>
#define SECOND_PER_MINUTE 60

int main(void)
{
	int x = 100;
	printf("���� x�ǰ���  %d�Դϴ�.\n",x);
	x += 50;
    printf("���� x�ǰ���  %d�Դϴ�.\n",x);
    x -= 50;
    printf("���� x�ǰ���  %d�Դϴ�.\n",x);
    x *=50;
    printf("���� x�ǰ���  %d�Դϴ�.\n",x);
    x /=50;
    printf("���� x�ǰ���  %d�Դϴ�.\n",x);
    x %=3 ;
    printf("���� x�ǰ���  %d�Դϴ�.\n",x);
	return 0 ;
}
