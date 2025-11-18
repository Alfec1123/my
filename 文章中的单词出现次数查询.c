#include <stdio.h>
#include <string.h>

int main() {
    char st1[100];
    char st[10000] = "";  // 初始化为空字符串
    char temp[1000];
    char st2[100]="";
    
    int m=0;
    printf("输入查询的单词: ");
    scanf("%s", st1);
    getchar();
    printf("输入查询文章: \n");
    
    while (fgets(temp, sizeof(temp), stdin) != NULL) {
        if (strcmp(temp, "\n") == 0) {
            break;
        }
        strcat(st, temp);
    }
    
    for(int i=0;i<=strlen(st);i++){
        if(st[i] == ' '|| st[i] == '\0'){
            if(strcmp(st1,st2) == 0){
                m++;
            }
            strcpy(st2,"");
            continue;
        }
        else{
            strncat(st2,&st[i],1);
        }
    }
    printf("最终读取的内容:\n");
    printf("'%s'\n", st);
    printf("单词出现次数：%d",m);
    
    return 0;
}
