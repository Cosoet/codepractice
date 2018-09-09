bool isPalindrome(int x) {
        
        // version 01
        if( (x < 0) || (x%10 == 0 && x!=0) ) return false;

        int reMain = 0;
        
        while(x > reMain){
            reMain = reMain*10 + x%10;
            x /=10;
        }
        
        //cout << x << "  " << reMain << endl;
        
        return (x == reMain) || (x == reMain/10);
        
}
