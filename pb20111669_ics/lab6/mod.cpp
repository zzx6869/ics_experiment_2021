int mod(int r0){
    while(r0>7){
        r0=r0/8+r0%8;
    }
    if(r0==7) return 0;
    return r0;
}
