    int maxArea(vector<int>& height) {
        
        int width = height.size() -1;
        int leftIdx = 0, rightIdx = width;
        int maxVal = 0;
        while(leftIdx < rightIdx){
            
            maxVal = max(maxVal, (min(height[leftIdx], height[rightIdx])*width ));
            if(height[leftIdx] < height[rightIdx]){
                leftIdx++;
            }else{
                rightIdx--;
            }
            width--;
        }
        
        return maxVal;
    }
