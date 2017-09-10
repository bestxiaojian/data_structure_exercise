#include <stdio.h>
int main()
{
	int q[102]={6,3,1,7,5,8,9,2,4},head,tail;
	head = 0;
	tail = 9;  
	while(head < tail)
	{
		printf("%d",q[head]);
		head++;
		q[tail] = q[head];
		tail++;
		head++;
	}
	return 0;
}