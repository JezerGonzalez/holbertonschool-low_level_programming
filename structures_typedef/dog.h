#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure to be called by the main
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 */
typedef struct
{
char *name;
float age;
char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* DOG_H */
