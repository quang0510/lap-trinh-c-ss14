#include <stdio.h>
int main(){
    char name[10000] = "Nguyen Dang Quang";
    int count=1;
    printf("Chuoi ban da nhap: %s\n", name);
    for (int i=0;i<strlen(name);i++) {
        if (name[i]==' '){
            count++;
        }
    }
    printf("So tu trong chuoi: %d\n",count);
    return 0;
}

