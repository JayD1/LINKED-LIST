#include<stdio.h>
#include<stdlib.h>

typedef struct{
int r;
char n[32];
float m;
}stu;

int scan(stu* st_ptr[])
{
int i,num;
scanf("%d",&num);
stu* st_list=(stu *)malloc(num*sizeof(stu));
for(i=0;i<num;i++){
st_ptr[i]=&st_list[i];
scanf("%d %s %f",&st_ptr[i]->r,st_ptr[i]->n,&st_ptr[i]->m);}
return num;
}

void print(stu* st_ptr[], int num)
{
int i;
for(i=0;i<num;i++)
printf("%d %s %f\n",st_ptr[i]->r,st_ptr[i]->n,st_ptr[i]->m);
return;
}

void sort(stu* st_ptr[], int num)
{
int i,j;
stu *temp;
for(i=0;i<num-1;i++)
{
for(j=0;j<num-1-i;j++)
{
if(st_ptr[j]->m > st_ptr[j+1]->m)
{
temp=st_ptr[j];
st_ptr[j]=st_ptr[j+1];
st_ptr[j+1]=temp;
}
}
}
return;
}

int main()
{
stu* st_ptr[100];
int num;
num=scan(st_ptr);
print(st_ptr,num);
sort(st_ptr,num);
print(st_ptr,num);
return 0;
}
