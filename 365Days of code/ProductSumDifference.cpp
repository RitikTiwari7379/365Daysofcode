class Solution {
public:
    int subtractProductAndSum(int n) {

        // Methode 1
        // string a = to_string(n);
        // int sum = 0;
        // int b = 0;
        // int product = 1;
        // for(int i = 0; i<a.length(); i++){
        //     int s = a[i]-'0';
        //     sum = sum+s;
        //     product = product * s;
        // }

        // b = product  - sum;
        
        // Methode 2(more optimised)
        int sum = 0;
        int product = 1;
        while(n>0){
            int digit  = n%10;
            sum+=digit;
            product*=digit;
            n/=10;
        }
        return product - sum;
    }

};