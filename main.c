#include <stdio.h>
#include "employee.h"
#include "heap.h"

#define MAX_EMPLOYEES 5
#define MAX_INPUT 25

int main(int argc, char *argv[])
{
	//TODO
	struct Employee A[MAX_EMPLOYEES]; 
	int c;
	for(c = 0; c < MAX_EMPLOYEES; c++){

		struct Employee e;
		int in;
		printf("Name: ");
		scanf("%s", e.name);
		printf("\n");

		printf("Salary: ");
		scanf("%d", &in);
		e.salary = in;
		printf("\n");

		A[c] = e;
	}


	heapSort(A, MAX_EMPLOYEES);
	printList(A, MAX_EMPLOYEES);
	return 0;
}
