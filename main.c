# include <stdio.h>
# include <stdlib.h>
# include <time.h>
int main(){
	int i;
	int ray1[10];
	srand(time(NULL));
	printf("Array1: ");
	for(i=0;i<9;i++){
		ray1[i]=rand();
		printf("%d ",ray1[i]);
	}
	ray1[9]=0;
	printf("%d \n",ray1[i]);
	int ray2[10];
	int *p1=ray1+9;
	int *p2=ray2;
	printf("Array2: ");
	for(i=0;i<10;i++){
		*(p2+i)=*(p1-i);
		printf("%d ",*(p2+i));
	}
	printf("\n");
	return 0;
}