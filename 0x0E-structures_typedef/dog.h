/**
 * struct dog - houses an information about a dog
 * @name: name of the dog
 * @age: dog age
 * @owner: owners name
 *
 * Description: for a later use I have defind a dog structure
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
