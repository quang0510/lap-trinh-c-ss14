#include <stdio.h>
#include <string.h>

int main() {
    char text[100] = "dangquang0510";
    int count = 0;

    printf("Chuoi ban da khai bao: %s\n", text);

    for (int i = 0; i < strlen(text); i++) {
        if ((text[i] >= 'A' && text[i] <= 'Z') || (text[i] >= 'a' && text[i] <= 'z')) {
            count++;
        }
    }

    printf("So ky tu la chu cai trong chuoi: %d\n", count);

    return 0;
}
