    vector<int> twoSum(vector<int>& nums, int target) {
        
        // Using HashMap 
        
        std::unordered_map<int, int> hashrecord;
        for(int i =0 ; i < nums.size(); i++){
            hashrecord.insert(std::make_pair(nums[i], i ));
        }
        
        for(int i =0 ; i < nums.size(); i++){
            int needednum = target - nums[i];
            
            std::unordered_map<int, int>::iterator it = hashrecord.find(needednum);
            if(it != hashrecord.end() && it->second != i){
                vector<int> result;
                result.push_back(i);
                result.push_back(it->second);
                return result;
            }
        }
        
        
        // First Thought
        

//         for(int i =0 ; i < nums.size(); i++){
//             for (int k  = i+1 ; k < nums.size(); k++){
//                 if(target == (nums[i] + nums[k])){
//                     vector<int> result;
//                     result.push_back(i);
//                     result.push_back(k);
//                     return result;
//                 }
//             }
//         }        

        

    }
