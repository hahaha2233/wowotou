//输入一个数a，写出a，a+1，a+2，a+3的所有排序种类
#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int i,j,k;
	int num; 
	
	i=a;
	while(i<=a+3){
		j=a;
		while(j<=a+3){
			k=a;
			while(k<=a+3){
				if(i!=j){
					if(i!=k){
						if(j!=k){
							num++;
							printf("%d%d%d",i,j,k);
							if(num==6){
								printf("\n");
								num=0;
							} else {
								printf(" ");
							}
							
						}
					}
				}
				k++;
			}
			j++;
		}
		i++;
	}
	return 0;
} 
