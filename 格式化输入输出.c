#include"stdio.h"

int main()
{
	int num;
	printf("%9d\n",123); //前面有9个空格 
	printf("%-9d\n",123);//左对齐 
	printf("%+9d\n",123);//输出一个加号 
	printf("%-+9d\n",123);//加号实验1——>强制输出加号 
	printf("%+-9d\n",123);//加号实验1——>强制输出加号 
	printf("%-9d\n",-123);//输出负数，
	printf("%09d\n",123);//用0来填充空格 
	printf("%-09d\n",123);//这里左对齐了 所以无法填充 
	printf("%dty%n\n",12345,&num);
	printf("%d\n",num);
	return 0;
 } 
