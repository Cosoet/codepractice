    string convert(string s, int numRows) {

        string ans ="";
        
        int j = numRows-2;
        if(j < 0 ) j = 0;

        for(int i =0 ; i < numRows; i++){
            
            int currIdx = i;
            while( currIdx < s.size() ){
                
                ans += s[currIdx];
                if( i>0 ){
                    int jmpDist = j-i+1;
                    if(  (jmpDist > 0) && (currIdx +(2*jmpDist)<s.size()) ){
                        ans += s[ currIdx +(2*jmpDist)]; 
                    }
                }
                currIdx += j +numRows;
            }
        }
                
        return ans;        
    }
