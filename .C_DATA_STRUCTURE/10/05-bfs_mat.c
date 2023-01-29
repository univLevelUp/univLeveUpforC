void bfs_mat(GraphType* g, int v)
{
    int w;
    QueueType q;

    queue_init(&q);
    visited[v] = TRUE;
    printf("%d Visit ->", v);
    enqueue(&q, v);
    while(!is_empty(&q)){
        v = dequeue(&q);
        for(w = 0; w<g->n; w++)
            if(g->adj_mat[v][w] && !visited [w]){
                visited[w] = TRUE;
                printf("%d Visit ->", w);
                enqueue(&q, w);
            }
    }
}