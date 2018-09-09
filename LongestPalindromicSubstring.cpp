string longestPalindrome(string s) {
        
    int strLen = s.size(); // get length of input string 
  
    if(strLen == 0) return "";
    // table[i][j] will be false if substring str[i..j] 
    // is not palindrome. 
    // Else table[i][j] will be true 
    bool table[strLen][strLen]; 
    memset(table, 0, sizeof(table));
  
    // All substrings of length 1 are palindromes 
    int maxLength = 1; 
    for (int i = 0; i < strLen; ++i) 
        table[i][i] = true; 
  
    // check for sub-string of length 2. 
    int start = 0; 
    for (int i = 0; i < strLen-1; ++i) 
    { 
        if (s[i] == s[i+1]) 
        { 
            table[i][i+1] = true; 
            start = i; 
            maxLength = 2; 
        } 
    } 
    // cout << "start " << start << " maxlen " <<  maxLength << endl;
    // Check for lengths greater than 2. k is length 
    // of substring 
    for (int k = 3; k <= strLen; ++k) 
    { 
        // Fix the starting index 
        for (int i = 0; i < strLen-k+1 ; ++i) 
        { 
            // Get the ending index of substring from 
            // starting index i and length k 
            int j = i + k - 1; 
  
            // checking for sub-string from ith index to 
            // jth index iff str[i+1] to str[j-1] is a 
            // palindrome 
            if (table[i+1][j-1] && s[i] == s[j]) 
            { 
                table[i][j] = true; 
  
                if (k > maxLength) 
                { 
                    start = i; 
                    maxLength = k; 
                } 
            } 
        } 
    }
    
        // cout << "start " << start << " maxlen " <<  maxLength << endl;
        return s.substr(start, maxLength);
    }
