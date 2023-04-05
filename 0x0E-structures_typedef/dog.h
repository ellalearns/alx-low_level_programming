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

void init_dog(struct dog *d, char *name, float age, char *owner);
