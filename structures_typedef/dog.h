#ifndef _DOG_
#define _DOG_

/**
 * struct dog - struct for dog
 * @name: name dog
 * @age: age dog
 * @owner: owner dog
 *
 * Description: precision for dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

/*typedef struct dog dog_t;*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
