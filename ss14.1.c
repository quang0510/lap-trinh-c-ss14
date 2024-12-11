#include<stdio.h>
int main(){
	
	char number[100];
	printf("moi ban nhap chuoi : ");
	fgets(number,100,stdin);
	printf("chuoi ban vua nhap la %s",number);
	printf("do dai cua chuoi la %d",strlen(number));
	
	return 0;
}
