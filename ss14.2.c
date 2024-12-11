#include<stdio.h>
int main(){
	
	char number[100];
	printf("moi ban nhap chuoi : ");
	fgets(number,100,stdin);
	for(int i=0;i<strlen(number);i++){
		printf("%c ", number[i]);
	}
	return 0;
}
