#include<stdio.h>
int main(){
    FILE *file = NULL;
    int count;
    char content[1000];
    file = fopen("D:\\C\\ss16\btvn\\bai3.txt","w");
    if(file == NULL){
        printf("khong mo duoc file.\n");
        return 1;
    }
    printf("nhap so dong cua noi dung: ");
    scanf("%d",&count);
    for(int i = 0; i < count;i++){
        printf("Nhap noi dung dong %d: ",i+1);
        fflush(stdin);
        fgets(content, sizeof(content), stdin);
        fprintf(file, "noi dung dong %d :%s", i+1, content);
    }
    fclose(file);
    printf("Chuỗi đã được ghi vào file bai3.txt.\n");
    return 0;
}
