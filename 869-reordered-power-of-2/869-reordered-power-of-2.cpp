class Solution {
public:
   vector<int> answer(long n){
        vector<int>res(10);
        
        while(n){
            res[n%10]++;
            n=n/10;
        }
        return res;
    }
    bool reorderedPowerOf2(int n) {
        vector<int>v=answer(n);
        for(int i=0;i<31;i++){
            if(v==answer(1<<i)){
                return true;
            }
        }
        return false;
    }
};