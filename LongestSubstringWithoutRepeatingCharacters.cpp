
        int TABLESIZE = 128;
        int CLEARSIZE = TABLESIZE*sizeof(int);
        int wordLoc[TABLESIZE];
        memset(wordLoc, -1, CLEARSIZE); 

        int maxlen = 0;
        int currlen = 0;
        int currptr = 0;
        
        while(currptr < s.size()){
            
            int idx = (int)(s[currptr]);

            if(wordLoc[idx] == -1){
                
                wordLoc[idx] = currptr;
                currlen++;
                currptr++;
                
            }else{

                currptr = wordLoc[idx] + 1;
                memset(wordLoc, -1, CLEARSIZE);
                idx = (int)(s[currptr]);
                wordLoc[idx] = currptr;
                currlen = 1;
                currptr++;
            }
            
            if(currlen > maxlen) maxlen = currlen;
            
        }
        
        return maxlen;
                
    }
