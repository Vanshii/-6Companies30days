class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        if(x2>x1 && y2>y1){

        for(int i=x1;i<=x2;i++){
             if ((i - xCenter) * (i - xCenter) + (y1 - yCenter) * (y1 - yCenter) <= radius * radius) {
                    return true;
                }
        }

        for(int j=y1;j<=y2;j++){
           if ((x1 - xCenter) * (x1 - xCenter) + (j - yCenter) * (j - yCenter) <= radius * radius) {
                    return true;
                }
        }
        }

        if(x2<x1){
            for(int i=x1;i<=x2;i--){
              if ((i - xCenter) * (i - xCenter) + (y1 - yCenter) * (y1 - yCenter) <= radius * radius) {
                    return true;
                }
        }


        }

        if(y2<y1){
             for(int j=y1;j<=y2;j--){
           if ((x1 - xCenter) * (x1 - xCenter) + (j - yCenter) * (j - yCenter) <= radius * radius) {
                    return true;
                }
        }

        }

        return false;
        
    }
};