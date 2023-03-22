//
// Created by 39221 on 2023/3/16.
//
#include<stdio.h>
#include <synchapi.h>
#include<string.h>
#include <assert.h>
#include <math.h>

/*void my_strlen(char* str1){
    int n = 0;
    while(*str1 != NULL){
        str1++;
        n++;
    }
    printf("字符串的长度为:%d\n",n);
}

char* my_strcpy(char* dest,const char* src){
    assert(dest != NULL);
    assert(src != NULL);
    char* ret = dest;
    //将'\0'一同拷贝到目标数组中
    while(*dest++ = *src++)
    {
        ;
    }
    //返回目的空间的起始地址
    return ret;
}

int main(){
    char cha[] = "abcdef";
    char cha1[] = "bit";
    //my_strlen(cha);
    my_strcpy(cha1,cha);
    printf("%s",cha1);
}*/

/*
char* my_strcat(char* dest,const char* src){
    char* dest1 = dest;
    //关于while判断，使用'\0'还是'0'自行判断
    while(*dest != '\0')
    {
        dest++;
    }
    while(*dest++ = *src++)
    {
        ;
    }
    return dest1;
}
int main(){
    char ch1[30] = "abcdefg";
    char ch2[] = "hijklmn";
    char* ret = my_strcat(ch1,ch2);
    printf("%s",ret);
}*/

/*int my_strcmp(char* str1,char* str2){
    assert(str1 && str2);
    //同样是while判断，while(*str++)判断一次后str的值随之增加一次，在执行下一步的时候会出现误差
    while(*str1 == *str2){
        if(*str1 == '0'){
            return 0;
        }
    }
    return (*str1 - *str2);
}

int main(){
    char ch1[] = "aacdefg";
    char ch2[] = "abcdefg";
    int ret = my_strcmp(ch1,ch2);
    if(ret == 0){
        printf("相同！\n");
    }else if(ret > 0){
        printf("大于！\n");
    }else{
        printf("小于");
    }
}*/

/*
int main(){
    char arr1[30] = "Life is a fxxxing ";
    char arr2[] = "movie!";

    strncat(arr1,arr2,8);
    printf("%s",arr1);
}
*/

/*int main(){
    char *p1 = "abcdefg";
    char *p2 = "abc";
    char *ret = strstr(p1,p2);
    if(ret == NULL){
        printf("无了");
    }else{
        printf("%p",ret);
    }
}*/

/*
char* my_strstr(const char* str1,const char* str2)
{
    assert(str1 && str2);
    char *p1 = str1;
    char *p2 = str2;
    char *cur = str1;
    if(*str2 == '\0'){
        return p1;
    }
    while(*cur)
    {
        p1 = cur;
        p2 = str2;
        while (*p1 != '\0' && *p2 != '\0' && *p1 == *p2)
        {
            p1++;
            p2++;
        }
        if(*p2 == '\0')
        {
            return cur;
        }
        p1++;
        cur++;
    }
    return NULL;
}

int main()
{
    char *p1 = "abcdaefcde";
    char *p2 = "cde";
    char *p4 = NULL;
    char *p3 = my_strstr(p1,p2);
    printf("%s",p3);
}*/

/*
int main(){
   char arr[] = "392216550@qq.com";
    char *p = "@.";

    char buf[1024] = {0};
    strcpy(buf,arr);

    char *ret = strtok(arr,p);
    printf("%s\n",ret);
    ret = strtok(NULL,p);
    printf("%s\n",ret);
    ret = strtok(NULL,p);
    printf("%s\n",ret);

    return 0;

}*/

/*int main(){
    char arr1[] = "392216550@qq.com";
    char *p = "@.";
    for(char* ret = strtok(arr1,p);ret != NULL;ret = strtok(NULL,p)){
        printf("%s\n",ret);
    }
}*/


/*char* Big(char *str){
    char *use1 = str;
    assert(str != NULL);
    while(*str != '\0'){
        if(islower(str) == 0){
            *str = toupper(*str);
        }
        str++;
    }
    return use1;
}
int main(){
    char str[] = "life is a fucking movie";
    char* result = Big(str);
    printf("%s",result);
}*/

void* my_memcpy(void* dest,const void* src,int num){
    void* new = dest;
    assert(dest && src);
    assert(num);
    while(num--){
        *((char*)dest) = *((char*)src);
        dest++;
        src++;
    }
    return new;
}

struct stu{
    int age;
    char ID[10];
};
int main(){
    struct stu s2[] = {0};
    struct stu s1[] = {20,"202201073"};
    int sz = sizeof(s1);
    int* a = (int*)my_memcpy(s2,s1,sz);
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {0};
    printf("%d ",arr2);
}
