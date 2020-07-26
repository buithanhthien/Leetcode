bool isValid(char * s){
    int sSize = strlen(s), checkValid = 0, openFirst;

    for(int i = 0; i < sSize; ++i)
        if(s[i] == '{'){
        	openiFirst = i;
        	break;
        }
                                            
    for(int i = 0; i < sSize; ++i)
        if(s[i] == '}') 
            if(openFirst > i) return false;


   
    for(int i = 0; i < sSize; ++i)
        if(s[i] == '['){                    
     	    openFirst = i;
     	    break;
        }

    for(int i = 0; i < sSize; ++i)
        if(s[i] == ']') 
            if(openFirst > i) return false;



    for(int i = 0; i < sSize; ++i)
        if(s[i] == '('){
       	    openFirst = i;
     	    break;
        }
                                         
    for(int i = 0; i < sSize; ++i)
        if(s[i] == ')') 
            if(openFirst > i) return false;




    for(int i = 0; i < sSize; ++i){
	if(s[i] == '{') checkValid++;
	    else if(s[i] == '}') checkValid--;
	    else if(s[i] == '[') checkValid+=2;
	    else if(s[i] == ']') checkValid-=2;
	    else if(s[i] == '(') checkValid+=3;
	    	else checkValid -=3;
    }

    if(checkValid != =) return false; //check enough open and close parentheses
    checkValid = 0;



    for(int i = 0; i < sSize; ++i){
	if(i % 2 == 0){
	    if(s[i] == '{' || s[i] == '}') checkValid++;
	        else if(s[i] == '[' || s[i] == ']') checkValid++;
	    	    else checkValid+=3; 
	} else {
	    
	    if(s[i] == '{' || s[i] == '}') checkValid--;
	        else if(s[i] == '[' || s[i] == ']') checkValid-=2;
		    else checkValid-=3;
	}
    }

    if(checkValid != 0) return false;

   
    return true;
}
