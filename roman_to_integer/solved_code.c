int romanToInt(char * s){
    int sSize = strlen(s), res = 0;

    for(int i = 0; i < sSize; ++i){
	if(s[i] == 'C' && s[i + 1] == 'M'){
	    res += 900;
	    i++;
	} else if(s[i] == 'C' && s[i + 1] == 'D'){
           res += 400;
           i++;
        } else if(s[i] == 'X' && s[i + 1] == 'C'){
            res += 90;
            i++;
        } else if(s[i] == 'X' && s[i + 1] == 'L'){
            res += 40;
            i++;
        } else if(s[i] == 'I' && s[i + 1] == 'X'){
	    res += 9;
	    i++;
	} else if(s[i] == 'I' && s[i + 1] == 'V'){
	    res += 4;
	    i++;
	} else if(s[i] == 'M') res += 1000;
	  else if(s[i] == 'D') res += 500;
	  else if(s[i] == 'C') res += 100;
	  else if(s[i] == 'L') res += 50;
	  else if(s[i] == 'X') res += 10;
	  else if(s[i] == 'V') res += 5;
	  else res += 1;
    }

    return res;
}
