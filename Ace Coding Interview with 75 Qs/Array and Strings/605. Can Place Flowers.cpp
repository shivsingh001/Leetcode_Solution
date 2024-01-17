class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
  
   int count = 0;
        for(int i = 0; i < flowerbed.size() && count < n; i++) {
            if(flowerbed[i] == 0) {
	//get next and prev flower bed slot values. If i lies at the ends the next and prev are considered as 0. 
               int next = (i == flowerbed.size() - 1) ? 0 : flowerbed[i + 1]; 
               int prev = (i == 0) ? 0 : flowerbed[i - 1];
               if(next == 0 && prev == 0) {
                   flowerbed[i] = 1;
                   count++;
               }
            }
        }
        
        return count == n;
    }

};