/**
 * struct dog - dog structure
 * @name: first element
 * @age: second element
 * @owner: third element
 * 
 * Description: task one
*/
struct dog
{
    char *name;
    float age;
    char *owner;
};

/**
 * dog_t - typedef for the dog structure
*/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
