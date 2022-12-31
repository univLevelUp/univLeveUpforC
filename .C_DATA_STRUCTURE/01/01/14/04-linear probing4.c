#define empty(item) (strlen(item.key)==0)
#define equal(item1, item2) (!strcmp(item1.key, ktem2.key))

void hash_lp_add(element item, elementht[])
{
    int i, hash_value;
    hash_value = i = hash_function(item.key);

    while(!empty(ht[i])){
        if(equal(item, ht[i])){
            fprintf(stderr, "Explorer is duplicated.\n");
            exit(1);
        }
    i = (i + 1) % TABLE_SIZE;
    if(i == hash_value){
        fprintf(stderr, "The table is full.\n");
        exit(1);
    }
    }
    ht[i] = item;
}