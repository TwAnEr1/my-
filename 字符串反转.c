#include <stdio.h>
#include <string.h>

 int main(void) 
 {
 	char ch[100];//�ַ����� 
	char t;//��ʱ�ַ� 
	int len;//�����ַ����� 
	printf("Enter a string:");
	fgets (ch, 99, stdin);//��ȡ���ŵ�ch����׼���� 
    printf(ch);
	len = strlen(ch);//���Ȼ�ȡ 
	for (int i = 0; i<len/2; i++) //forѭ����ת 
	{
		t=ch[i];
		ch[i]=ch[len-1-i];
		ch[len-1-i]=t;
		
		
		
	}
	printf("After:");
	printf(ch);
 	return 0;
 	
 	
 	
 }
