#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - prints a struct dog
 * @d: pointer to struct dog to be printed
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name:%s\n", d->name != NULL ? d->name : "nill");
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner != NULL ? d->owner : "nill");
}
