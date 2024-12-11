#include<stdio.h>
int main(){
	
	char number[100];
	printf("moi ban nhap chuoi : ");
	fgets(number,100,stdin);
	int lenght=strlen(number);
	for(int i=lenght;i>=0;i--){
		printf("%c", number[i]);
	}
	return 0;
}
