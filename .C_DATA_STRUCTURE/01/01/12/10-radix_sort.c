void radix_sort(int list[], int n)
{
    int i, b, d, factor = 1;
    QueueType queues[BUCKETS];

    for(b = 0; b < BUCKETS; b++) init_queue(&queues[b]);

    for(d = 0; d <DIGITS; d++){
        for(i = 0; i < n; i++)
            enqueue(&queues[(list[i] / factor) % 10], list[i]);
        
        for(b = i = 0; b < BUCKETS; b++)
            while(!is_empty(&queues[b]))
                list[i++] = dequeue(&queues[b]);
        factor *= 10;
    }
}