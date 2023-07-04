#ifndef _HEADER_
#define _HEADER_

/**
  * struct dog - Dog attributes
  * @my_dog.name: The name of the dog.
  * @my_dog.age: The age of the dog.
  * @my_dog.owner: The owner of the dog.
  *
  * Description: The attributes of a dog.
  */
struct dog
{
	char *my_dog.name;
	float my_dog.age;
	char *my_dog.owner;
};

/**
 * dog_t - Typedef for dog structure
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *my_dog.name, float my_dog.age, char *my_dog.owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *my_dog.name, float my_dog.age, char *my_dog.owner);
void free_dog(dog_t *d);
#endif
