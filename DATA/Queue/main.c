#define _CRT_SECURE_NO_WARNINGS 1

#include "Queue.h"

int main()
{
	QUE p;
	QueueInit(&p);
	QueuePush(&p, 5);
	QueuePush(&p, 6);
	QueuePush(&p, 2);
	QueuePush(&p, 3);
	while (!QueueEmpty(&p))
	{
		printf("%d ", QueueFront(&p));
		QueuePop(&p);
	}
	QueueDestroy(&p);

	return 0;
}