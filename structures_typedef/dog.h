#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure to be called by the main
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
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
#endif /* DOG_H */
