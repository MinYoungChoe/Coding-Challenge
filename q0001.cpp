

class Solution {
public:
    int numberOfSteps(int num){
        int counting = 0;
        while(num != 0){
            
            if(num %2 == 0){
                
                counting++;
                num /= 2;
                
            }
            else{
                
                counting++;
                num-=1;
                    
            }
        }
        
        return counting;
    }
};
