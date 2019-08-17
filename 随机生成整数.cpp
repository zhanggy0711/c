#include"stdio.h"
#include"stdlib.h"
#include"time.h"
#include"string.h"



int main()
{
	srand(time(0));
	int number=rand()%100+1;
	int count=0;
	int a=0;
	
 
	printf("我已经想好了一个100之间的数，请小姐姐你来猜一猜。");
	do{
		printf("漂亮的小姐姐来猜一猜吧！不要丑拒我哦！");
		scanf("%d",&a);
		count++;
		if(a>number)
		{
		    printf("小姐姐不要把我猜的太大哦!");
			 
		}else if(a<number)
		{
			printf("不要把我猜的和小姐姐一样还小哦！");
			 
			
		} 
		
		
		
	}while(a!=number);
	printf("小姐姐，你真是冰雪聪明，只用了%d次就找到我了，给你颁发一个来自zgy小哥哥的徽章哦！\n",count);
	getchar();
	return 0;
}
