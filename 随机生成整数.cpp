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
	
 
	printf("���Ѿ������һ��100֮���������С���������һ�¡�");
	do{
		printf("Ư����С�������һ�°ɣ���Ҫ�����Ŷ��");
		scanf("%d",&a);
		count++;
		if(a>number)
		{
		    printf("С��㲻Ҫ���Ҳµ�̫��Ŷ!");
			 
		}else if(a<number)
		{
			printf("��Ҫ���Ҳµĺ�С���һ����СŶ��");
			 
			
		} 
		
		
		
	}while(a!=number);
	printf("С��㣬�����Ǳ�ѩ������ֻ����%d�ξ��ҵ����ˣ�����䷢һ������zgyС���Ļ���Ŷ��\n",count);
	getchar();
	return 0;
}
