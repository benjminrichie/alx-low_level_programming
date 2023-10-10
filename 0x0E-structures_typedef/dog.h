#ifndef DOG_H
#define DOG_H

/**
 * struct dog - This function is meant to  initialize a
 * variable of type struct dog
 * @name: This is the dogs name
 * @age: This is the dogs age
 * @owner: This is the owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
typedef struct dog dog_t;

#endif
