#include<stdio.h>
#include<conio.h>
int main(){
	int array[10],i,values;
	printf("Enter 5 array elements:");
	for (i=0;i<5;i++){
		scanf("%d",&array);
	}
	printf("\n enter elements to insert");
	scanf("%d",&values);
	array[i]=values;
	printf("\n the new array is");
	for(i=0;i<6;i++)
	printf("%d",array[i]);
	getch();
	return 0;
}
