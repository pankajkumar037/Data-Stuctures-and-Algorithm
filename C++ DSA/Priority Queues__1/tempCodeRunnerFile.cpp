void downHeapify(int pi){
    while(pi<hp.size()){
        int lc=2*pi+1;
        int rc=2*pi+2;
        if(lc>=hp.size()) break; 
        int maxEL=pi;
        if(hp[lc]>hp[maxEL]) {
          maxEL=lc;
        }
        if(rc<hp.size() && hp[rc]>hp[maxEL]){
            maxEL=rc;
        }  
        if(maxEL != pi){
            swap(hp[pi],hp[maxEL]);
            pi=maxEL;
         }
         else{
             break;
        } 
    }
}