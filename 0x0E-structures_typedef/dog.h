#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a struct that defines a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: struct called "dog" that defines basic info about dogs
 */
typedef struct dog
{
    char *name;
    float age;
    char *owner;
} dog_t;

/* Function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
