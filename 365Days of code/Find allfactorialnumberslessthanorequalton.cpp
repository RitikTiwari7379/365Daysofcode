class Solution {
  public:
    //  TLE
    
    // long long isFactorial(long long num){
    //     if(num==1){
    //         return 1;
    //     }
    //     return num*isFactorial(num-1);
    // }
    
    // 3rd way
    void findFactorials(long long num, long long current, int next_num, vector<long long>& factorials) {
        if (current > num) {
            return;
        }
        
        factorials.push_back(current);
        findFactorials(num, current * next_num, next_num + 1, factorials);
    }
    
    vector<long long> factorialNumbers(long long n) {
        vector<long long> facto;
        
        //  1st way TLE
        
        for(int i = 1; i<n; i++){
            int a = isFactorial(i);
            if(a<=n){
                facto.push_back(a);
            }
            else{
                break;
            }
        }
        return facto;
        
        
        2nd way
        long long num = 1;
        long long cnt = 1;
         while(num<=n){
             num *= cnt;
             if(num<=n){
                facto.push_back(num);
             }
             cnt++;
         }
         return facto;
        
        // 3rd way
       
        vector<long long> factorials;
        findFactorials(n, 1, 2, factorials);
        return factorials;
    }
};