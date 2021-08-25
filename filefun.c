#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct student
{
    char name[20];
    int number;
};

void input(struct student *node) //用scanf对结构体初始化
{
    printf("请输入姓名：");
    scanf("%s",node->name);
    printf("请输入学号：");
    scanf("%d",&node->number);//注意读入格式

}
int main(void)
{   
    struct student *node=NULL;
    node=(struct student*)malloc(sizeof(struct student));//结构体指针要申请内存空间才能使用
    input(node);

    printf("这个学生的信息是：%s \n", node->name);
    // printf("这个学生的信息是：%s %d\n", node->name, node->number);
    FILE *fp;
    fp=fopen("./b.txt","w+"); //a append ,w write
    if(fp==NULL)
        printf("文件打开失败\n");
    else 
    {
        printf("文件创建并打开成功\n");
        // fwrite(node,6, 1, fp);
        fwrite(node, sizeof(struct student), 1, fp);
        //fread(node,sizeof(struct student),1,fp);//判断写入的内容
        // fwrite(&content, sizeof(content), 10, fp);
        // printf("写入的内容是：\n");
        // printf("姓名：%s\n",node->name);
        // printf("学号：%d\n",node->number);
        fclose(fp);


        printf("1234");


    }
    
    return 0;
}
