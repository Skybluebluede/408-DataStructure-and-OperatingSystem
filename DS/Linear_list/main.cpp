#include <stdio.h>

#define MaxSize 50
typedef int ElemType;

typedef struct {
	ElemType data[MaxSize];
	int length;
}SqList;

//函数命名规范：	
//	1.下划线命名法
//	2.驼峰命名法

//L需要改变，引用
bool list_insert(SqList &L, int i, ElemType n)
{	
	//判断i是否合法，i为插入位置
	if(i < 1 || i > L.length + 1)
		return false;
	//判断存储长度
	if(L.length >= MaxSize)
		return false;
	//元素后移
	for(int j = L.length; j >=i; j--)
	{
		L.data[j] = L.data[j - 1];
	}
	L.data[i - 1] = n;
	L.length++;

	return true;
}

bool list_delet()
{
	return true;
}

int locate_elem()
{
	return true;
}

void print_list(SqList L)
{
	for(int i = 0; i < L.length; i++)
	{
		printf("%4d", L.data[i]);
	}
	printf("\n");
}

int main()
{
	SqList L; //定义顺序表
	bool ret;
	L.data[0] = 1;
	L.data[1] = 2;
	L.data[2] = 3;
	L.length = 3;
	
	ret = list_insert(L, 5, 60);
	if(ret == true)
	{
		printf("element was inserted successfully!\n");
		print_list(L);
	}else{
		printf("inserted failed\n");
	}
	return 0;
}
