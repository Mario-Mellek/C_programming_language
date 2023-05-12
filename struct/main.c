#include <stdio.h>

typedef struct 
{
	char *name;
	int age;
	char *breed;
} dog_t;

void main(void)
{
	dog_t dog;
	dog.name = "Misha";
	dog.age = 7;
	dog.breed = "German Shepard";

	printf("Name: %s.\n", dog.name);
	printf("Age: %d Years old.\n", dog.age);
	printf("Breed: %s.\n", dog.breed);
}
