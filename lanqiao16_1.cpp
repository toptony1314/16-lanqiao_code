/***
*����ժҪ�� 16���ű�-1
*��ǰ�汾�� ver-1.0
*��   �ߣ� Feng Zifeng
*������ڣ� 2018/2/27
* 
*�޸ļ�¼��None 

****/
#include <iostream>
#include <windows.h>
#include <math.h>
#include <cstdio>
#include <cstring>
using namespace std;


int main()
{

	int mom_age,son_age;
	int gewei,shiwei;
	int count_add = 0;
	for (int i = 0;i<=99;i++)
	{
		mom_age = i + 27;
		gewei = mom_age/10;
		shiwei = mom_age%10;
		son_age = shiwei*10+gewei;
		if (son_age==i&&mom_age<=99)
		{
			count_add = count_add+1;
			printf("%d %d\n",mom_age,son_age);
		}
	}
	printf("%d",count_add);
	cin.get();
	return 0;
}
