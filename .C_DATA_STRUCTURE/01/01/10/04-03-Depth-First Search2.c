int visited[MAX_VERTICES];

void dfs_list(GraphType* g, int v)
{
    GrapNode *w;
    visited[v] = TRUE;
    printf("apex %d -> ", v);
    for(w = g->adj_list[v]; w; w = w->link)
        if(!visited[w->vertex])
            dfs_list(g, w->vertex);
}