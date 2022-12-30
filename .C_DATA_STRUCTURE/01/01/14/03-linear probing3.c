int transform(char * key)
{
    int number = 0;
    while(*key)
        number = 31 * number + *key++;
    return number;
}

int hash_function(char *key)
{
    return transform1(key) % TABLE_SIZE;
}