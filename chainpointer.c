#include<stdio.h>

//Write a Program to find the reverse of a 1D array using a Chain of Pointers.
void reversearray(int *p, int n)
{
	int *first = p;
	int *last = p+n-1;
	while(first<last)
	{
		int temp = *first;
		*first = *last;
		*last = temp;
		first++;
		last--;
	}
	printf("Reversed array elements are= ");
	for(int i=0; i<n; i++)
		printf("%d ", *p++);
}

void main()
{
	int n;
	printf("Enter the Arrays size= ");
	scanf("%d", &n);
	int a[n];
	printf("Enter %d numbers= ");
	for(int i=0; i<n; i++)
		scanf("%d", &a[i]);
	reversearray(a, n);
}