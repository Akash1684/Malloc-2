#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>

void* malloc2(size_t size)
{
	/*
	sbrk used to increase heap size and return pointer to start region on heap
	*/
	void *ptr = sbrk(0);
	void *request = sbrk(size);
	if (request == (void*) -1)
		return NULL; //sbrk failed
	else
	{
		assert(ptr==request);
		return ptr;
	}
}

void main()
{
  
   int* ptr=malloc2(10); //integer block of size 10
   
}
