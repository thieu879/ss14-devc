#include<stdio.h>
int main(){
	int n=10;
	int *ptr=&n;
	printf("Dia chi cua gia tri la:%p\n",ptr);
	printf("So doi gia tri la:%d",*ptr);
}
