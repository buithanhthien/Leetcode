bool isPalindrome(int x){
    int revX = 0;

    if(x < 0 || (x % 10 == 0) && x != 0) return false;

    while(x > revX){
	revX = revX * 10 + x % 10;
	x /= 10;
    }

    if(revX > x) revX /= 10;
    if(x == revX) return true;

    return false;
}
