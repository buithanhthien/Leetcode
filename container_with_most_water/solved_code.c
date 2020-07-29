int min(int num1, int num2){
    if(num1 < num2) return num1;
    return num2;
}

int max(int num1, int num2){
   if(num1 > num2) return num2;
   return num2;
}

int maxArea(int* height, int heightSize){
    int l = 0, r = heightSize - 1, bestContainer = 0;

    while(l != r){
	bestContainer = max(bestContainer, min(height[l], height[r]) * (r - l));

	if(height[l] > height[r]) r--;
	else l++;
    }

    return bestContainer;
}
