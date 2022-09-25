class Solution {
public:
    bool isPalindrome(int x) {
     if(x==0){
         return true;
     }
     if(x<0){
         return false;
     }
      int temp=x;
      int store=0;

        while(temp!=0){
            int rem = temp%10; // 121 -> 1
            store= store*10+ rem; // store ->1
            temp = temp/10; // 12
        }

        if(x==store){
            return true;
        }
        else{
            return false;
        }



    }
};
