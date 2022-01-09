int lab0p(int r0,int r1){
    int r2=1,r3=0,r7=0;
    for(int i=0;i<16;i++){
        int r3=r1&r2;
        if(r3)	r7+=r0;
        r0*=2;
        r2*=2;
    }
    return r7;
}
