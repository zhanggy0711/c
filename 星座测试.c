#include<stdio.h> 
int main()
{
	int a=0;
	int b=0;
	int c=0;   /*循环变量定义*/ 
	 
		
	while(c==0)	{
	
		
	printf("欢迎来到宇宙神算zgy的星座测试，下面我们开始吧：\n");	
	printf("可爱的人儿，请输入你出生的月份吧：\n");
    scanf("%d",&a);
    
    if(a>0&&a<=12){     /*定义取值范围*/
    	
   	printf("可爱的人儿，请输入你出生的日子吧：\n");    
    scanf("%d",&b);
    
    if(b>0&&b<=31){
 	
  		switch(a){
		case 1: 
		if(b>0&&b<20){
		printf("可爱的人儿，你的星座是谨慎踏实的摩羯座哦！\n");	
		}else {
		printf("可爱的人儿，你的星座是聪明伶俐的水瓶座哦！\n");	
		}break;
		
		case 2: 
		if(b>0&&b<19){
		printf("可爱的人儿，你的星座是聪明伶俐的水瓶座哦！\n");	
		}else {
		printf("可爱的人儿，你的星座是温柔善良的双鱼座哦！\n");	
		}break;
		
		case 3: 
		if(b>0&&b<21){
		printf("可爱的人儿，你的星座是温柔善良的双鱼座哦！\n");	
		}else {
		printf("可爱的人儿，你的星座是乐观开朗的白羊座哦！\n");	
		}break;
		
		case 4: 
		if(b>0&&b<20){
		printf("可爱的人儿，你的星座是乐观开朗的白羊座哦！\n");	
		}else {
		printf("可爱的人儿，你的星座是踏实稳重的金牛座哦！\n");	
		}break;
		
		case 5: 
		if(b>0&&b<21){
		printf("可爱的人儿，你的星座是踏实稳重的金牛座哦！\n");	
		}else {
		printf("可爱的人儿，你的星座是理性聪明的双子座哦！\n");	
		}break;
		
		case 6: 
		if(b>0&&b<21){
		printf("可爱的人儿，你的星座是理性聪明的双子座哦！\n");	
		}else {
		printf("可爱的人儿，你的星座是充满爱心的巨蟹座哦！\n");	
		}break;
		
		case 7: 
		if(b>0&&b<22){
		printf("可爱的人儿，你的星座是充满爱心的巨蟹座哦！\n");	
		}else {
		printf("可爱的人儿，你的星座是阳光自信的狮子座哦！\n");	
		}break;
		
		case 8:
		if(b>0&&b<23){
		printf("可爱的人儿，你的星座是阳光自信的狮子座哦！\n");	
		}else {
		printf("可爱的人儿，你的星座是完美谦虚的处女座哦！\n");	
		}break;
		
		case 9: 
		if(b>0&&b<23){
		printf("可爱的人儿，你的星座是完美谦虚的处女座哦！\n");	
		}else {
		printf("可爱的人儿，你的星座是亲切善良的天坪座哦！\n");	
		}break;
		
		case 10: 
		if(b>0&&b<23){
		printf("可爱的人儿，你的星座是亲切善良的天坪座哦！\n");	
		}else {
		printf("可爱的人儿，你的星座是神秘性感的天蝎座哦！\n");	
		}break;
		
		case 11: 
		if(b>0&&b<22){
		printf("可爱的人儿，你的星座是神秘性感的天蝎座哦！\n");	
		}else {
		printf("可爱的人儿，你的星座是乐观诚实的射手座哦！\n");	
		}break;
		
		case 12: 
		if(b>0&&b<22){
		printf("可爱的人儿，你的星座是乐观诚实的射手座哦！\n");	
		}else {
		printf("可爱的人儿，你的星座是谨慎踏实的摩羯座哦！\n");	
		}break;
		default: 
		break;

	}  /*出判断*/
	
	}else {printf("可爱的人儿，不要犯规哦!\n");/*日子输入错误*/
	}
	
	}else {printf("可爱的人儿，不要犯规哦!\n");/*月份输入错误*/
	}
 }
		
	return 0;
	 
}
 
