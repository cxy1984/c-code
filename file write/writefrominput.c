#include <stdio.h>

int main()
{
    char content[20];
    char filename[20];
    printf("please input file name \n");
    scanf("%s", &filename);

    printf("please input file content \n");
    scanf("%s", &content);

    FILE *fp = NULL;
    printf("%s-%s", content, filename);

    // return 0;
    fp = fopen(filename, "w+");

    if(fp == NULL){
        printf("open file failed");
        return 0;
    }

    fputs(content, fp);

    fclose(fp);
}