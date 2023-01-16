int compare(const void *arg1, const void *arg2)
{
    if(*(double *)arg1 > *(double *)arg2) return 1;
    else if(*(double *)arg1 == *(double *)arg2) return 0;
    else return -1;
}