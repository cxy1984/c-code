#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct student
{
    char name[20];
    int number;
};
void input(struct student *node)
{
    printf("请输入姓名：");
    scanf("%s",node->name);
    printf("请输入学号：");
    scanf("%d",&node->number);

}
int main(void)
{   
    struct student *node=NULL;
    node=(struct student*)malloc(sizeof(struct student));
    input(node);
    printf("这个学生的信息是：%s %d\n",node->name,node->number);
    FILE *fp;
    fp=fopen("C:\\Users\\miyanx\\Desktop\\b.txt","w+");
    if(fp=NULL)
        printf("文件打开失败\n");
    else 
    {
        printf("文件创建并打开成功\n");
        fwrite(node,sizeof(struct student),1,fp);
        fread(node,sizeof(struct student),1,fp);
        printf("写入的内容是：\n");
        printf("姓名：%s\n",node->name);
        printf("学号：%d\n",node->number);

        //if()//判断是否写入成功
        fclose(fp);
    }
    return 0;


}
