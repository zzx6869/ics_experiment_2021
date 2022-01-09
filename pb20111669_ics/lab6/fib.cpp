int fib(int r0){
    int r1=1,r2=1,r3=2,r4,r5=1023,r7;
    r0-=2;
    if(r0==0) {
        r7=r5&r3;
        return r7;
    }
    if(r0<0){
        r7+=1;
       return r7;
    }
    while(r0>0){
        r1*=2;
    	r4=r1+r3;
    	r1=r2;
    	r2=r3;
    	r3=r4;
    	r0--;
    }
    r7=r5&r3;
    return r7;
}
