    int romanToInt(string s) {

        // unordered_map<char, int> test = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000} };
        
        int strLen = s.size();
        int reuslt = 0, prevInt = 0;
        
        for(int i = strLen -1 ; i >=0 ; --i){
            
            int currInt = getNum(s[i]);
            // int currInt = test[s[i]];

            if(currInt >= prevInt){
                reuslt += currInt;
            }else{
                reuslt -= currInt;
            }
            
            prevInt = currInt;
        }
        
        return reuslt;
    }
    
    int getNum(char s){
        
        switch(s){
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;   
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: return 0;
        }
        
        return 0;
    }
