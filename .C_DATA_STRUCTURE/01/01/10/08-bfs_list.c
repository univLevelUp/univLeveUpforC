void bfs_list(GraphType* g, int v)
{
    GraphType *w;
    QueueType q;

    init(&q);
    visited[v] = TRUE;
    printf("%d Visit -> ", v);
    enqueue(&q, v);
    while(!is_empty(&q)){
        v = dequeue(&q);
        for(w = g->adj_list[v]; w = w->link)
        if(!visited[w->vertex]){
            visited[w->vertex] = TRUE;
            printf("%d Visit -> ", w->vextex);
            enqueue(&q, w->vertex)
        }
    }
}