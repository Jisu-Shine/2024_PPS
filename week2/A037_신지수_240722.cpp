class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        int result[100];
        int a;
        bool flag = false;
        for (int i=left; i<right+1; i++){
            a = i;
            while(a > 10){
                if(a/(a%10)==0){
                    a = a/10;
                
            }

        }
    }
    return result;
    }
};