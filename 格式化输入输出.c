#include"stdio.h"

int main()
{
	int num;
	printf("%9d\n",123); //ǰ����9���ո� 
	printf("%-9d\n",123);//����� 
	printf("%+9d\n",123);//���һ���Ӻ� 
	printf("%-+9d\n",123);//�Ӻ�ʵ��1����>ǿ������Ӻ� 
	printf("%+-9d\n",123);//�Ӻ�ʵ��1����>ǿ������Ӻ� 
	printf("%-9d\n",-123);//���������
	printf("%09d\n",123);//��0�����ո� 
	printf("%-09d\n",123);//����������� �����޷���� 
	printf("%dty%n\n",12345,&num);
	printf("%d\n",num);
	return 0;
 } 
