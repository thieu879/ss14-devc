#include<stdio.h>

int diffirent(int *a, int *b){
	int dif=0,temp;
	if(*a>=*b){
		dif=*a-*b;
	}else{
		temp=*a;
		*a=*b;
		*b=temp;
		dif=*a-*b;
	}
	return dif;
}

int main(){
	int number1, number2;
	printf("Nhap vao gia tri number1:");
	scanf("%d",&number1);
	printf("Nhap vao gia tri number2:");
	scanf("%d",&number2);
	int diff = diffirent(&number1,&number2);
	printf("hieu 2 so number1 va number2 la:%d",diff);
}
