class Solution {
public:
#include<vector>
 bool isHappy(int n) {
  unordered_set<int> seen;
          while(n!=1){
            if(seen.count(n)){
                return false;  
            }
        seen.insert(n);
        
        int sum=0;
        while(n!=0){

        int rem=n%10;

        sum+=rem*rem;

        n=n/10;

        }
        n=sum;//Take the result I just calculated and use it as the input for next
    }
    return true;
    }
    
};
