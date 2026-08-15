class Solution {
public:
#include<vector>
 bool isHappy(int n) {
// Create a set to store numbers that we have already seen
unordered_set<int> seen;

// Keep checking until n becomes 1
while (n != 1) {

    // If n is already present in the set,
    // it means we have entered a cycle
    if (seen.count(n)) {

        // Return false because n will never reach 1
        return false;
    }

    // Store the current number in the set
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
