void hash_lp_search(element item, element ht[])
{
    int i, hash_value;
    hash_value = i = hash_function(item.key);
    while(!empty(ht[i]))
    {
        if(equal(item, ht[i])){
            fprintf(stderr, "Navigation %s: Location = %d\n", item.key, i);
            return;
        }
        i = (i + 1) % TABLE_SIZE;
        if(i == hash_value){
            fprintf(stderr, "The value you are looking for is not in the table.\n");
            return;
        }
    }
    fprintf(stderr, "The value you are looking for is not in the table.\n"); 
}