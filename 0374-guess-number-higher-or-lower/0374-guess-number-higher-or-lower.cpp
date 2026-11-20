/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
       int low=1,high=n;
       while(low<=high) {
        int mid = low + (high - low) / 2;
        if(guess(mid)==0)return mid;
        else if(guess(mid)<0){
            n=mid-1;
        }
        else n=mid+1;
        mid=(1+n)/2;
       }
       return n;
    }
};