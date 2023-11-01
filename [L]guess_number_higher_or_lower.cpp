/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

b_search(long l, long h){
    unsigned int m = (l+h)/2;
    if(guess(m) == 0){
        return m;
    }else if(guess(m) == -1){
        return b_search(l,m-1);
    }else{
        return b_search(m+1,h);
    }
}

int guessNumber(int n){
	return b_search(1, n);
}