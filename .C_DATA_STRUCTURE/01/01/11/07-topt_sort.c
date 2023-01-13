int topt_sort(GraphType *g)
{
    int i;
    StackType s;
    GraphNode *node;

    int *in_degree = (int *)malloc(g->n * sizeof(int));
    for(i = 0; i < g->n; i++)
        in_degree[i] = 0;
    for(i = 0; i < g->n; i++){
        GraphNode *node = g->adj_list[i];
        while(node != NULL){
            in_degree[node->vertex]++;
            node = node->link;
        }
    }
    
    init(&s);
    for(i = 0; i < g->n; i++){
        if(in_degree[i] == 0) push(&s, i);
    }

    while(!is_empty(&s)){
        int w;
        w = pop(&s);
        printf("vertex %d ->", w);
        node = g->adj_list[w];
        while(node != NULL){
            int u = node->vertex;
            in_degree[u]--;
            if(in_degree[u] == 0) push(&s, u);
            node = node->link;
        }
    }
    free(in_degree);
    printf("\n");
    return (i == g->n);
}