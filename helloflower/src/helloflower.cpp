//============================================================================
// Name        : hello.cpp
// Author      : cl
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#include"Thread.h"

template<class T>
void InsertSort(T L[],int length)
{

	int i,j;//分别为有序区和无序区指针
	for(i=0;i<length-1;i++)//逐步扩大有序区
	{
		j=i+1;
		T tmp = L[j];
		if(tmp < L[i])
		{
			while(tmp < L[j-1] && j>0)//查找在有序区中的插入位置，同时移动元素
			{
				L[j] = L[j-1];//移动
				j--;//查找
			}
			L[j]=tmp;//将元素插入
		}

		for(int x=0;x<8;x++)
		{
			std::cout<<L[x]<<"-";
		}
		std::cout<<endl;
	}
}

template<class T>
void bubsort(T L[], int nLen)
{
	for(int i=0; i<nLen-1; i++)
	{
		bool op = false;
		for(int j=0; j<nLen-i-1; j++)
		{
			if(L[j]>L[j+1])
			{
				T tmp = L[j];
				L[j] = L[j+1];
				L[j+1] = tmp;
				op=true;
			}
		}
	}
}

int main() {

	float a[8] = {3.1,5,2,4,8,7,1,6};
	bubsort(a,8);
	for(int i=0;i<8;i++)
	{
		std::cout<<a[i]<<endl;
	}
	return 0;
}
