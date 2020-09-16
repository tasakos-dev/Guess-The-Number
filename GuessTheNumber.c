#include <stdio.h>



int guessNum(int l, int h, int *arr, int n);


int main()
{

	printf("%s\n", "Think a number between 1 and 10 (you can answer with yes, less or greater)");
	int nums[10];
	for (int i=1;i<=10;i++)nums[i]=i;
	printf("%d\n",guessNum(nums,10,0,9));
	return 0;
}


int guessNum(int *arr, int n, int l, int h){

	char ans[10];
	l=0;
	h= n-1;
	int middle= (l+h)/2;
	printf("%s %d\n", "your number is", arr[middle]);
	scanf("%s", ans);
	if (strcmp(ans,"yes")){
		return arr[middle];
	}
	else if (strcmp(ans, "less")){
		return guessNum(*arr,n,l, middle);

	}
	else {
		return guessNum(*arr,n,middle,h);
	}


}