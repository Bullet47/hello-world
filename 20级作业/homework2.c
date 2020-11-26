//只能一位一位的转换  哭泣.jpg 

#include<stdio.h>
int main(void)
{int i,k,m,n,r;
k=1,m=1;
char s[1000];
char a[200];
char b[500]="京冀豫云辽黑湘皖鲁新苏浙赣鄂晋蒙陕吉闽贵粤青藏川宁琼渝津沪桂甘警挂学港澳";
char c[][800]={"E4BAAC","E58680","E8B1AB","E4BA91","E8BEBD","E9BB91","E6B998","E79A96","E9B281","E696B0","E88B8F","E6B599",
    		"E8B5A3","E98482","E6998B","E89299","E99995","E59089","E997BD","E8B4B5","E7B2A4","E99D92","E8978F","E5B79D","E5AE81","E790BC",
    		"E6B89D","E6B4A5","E6B2AA","E6A182","E79498","E8ADA6","E68C82","E5ADA6","E4BDBF","E6B8AF","E6BEB3"};
char d[1000];
do 
{
printf("请输入车牌号的第%d位:\n",k++);
scanf("%s",&s[1000]);
if(s[1000]<0){
for(i=0;i<500;i+=2)
if(s[1000]==b[i])
break;
printf("%s\n",c[i/2]);
i=0; }
else 
printf("%c\n",s[1000]);
m++;
}
while(m<8);
printf("是否还要继续输入，输入1继续\n");
scanf("%d",&r);
if (r==1)
{printf("请输入车牌号的第8位:\n");
scanf("%s",&s[1000]);
if(s[1000]<0){
for(i=0;i<500;i+=2)
if(s[1000]==b[i])
break;
printf("%s\n转换完成",c[i/2]);
i=0; }
else 
printf("%c\n转换完成",s[1000]);}
else 
printf("转换完成"); 
return 0;
}





