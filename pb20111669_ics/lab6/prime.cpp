int prime(int r0)
{
    int i=2;
    r1=1;
    while(i*i<=r0){
        if(r0%i==0){
            r1=0;
            break;
        }
        i++;
    }
    return r1;
}
