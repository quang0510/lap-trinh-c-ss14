#include<stdio.h>
int main(){
	
	char number[]="dang quang";
	char kiTu;
	int count=0;
	printf("moi ban nhap 2 ki tu bat ki : ");
	scanf("%c", &kiTu);
	for(int i=0;i<strlen(number);i++){
		if(number[i]==kiTu){
			count++;
		}
	}
	printf("so lan xuat hien %c trong chuoi la %d lan ",kiTu,count);
	
	return 0;
}
