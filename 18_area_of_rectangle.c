// Needs correction

#include <stdio.h>

int main(){
    int ax1,ay1,ax2,ay2,bx1,by1,bx2,by2,area;
    scanf("%d %d %d %d %d %d %d %d",&ax1,&ay1,&ax2,&ay2,&bx1,&by1,&bx2,&by2);

    area = (ax2-ax1)*(ay2-ay1) + (bx2-bx1)*(by2-by1);

    if(ax2>bx1 && ay2>by1){
        area -= (ax2-bx1)*(ay2-by1);
    }
    else if(ax2>bx1 && ay1>by1){
        area -= (ax2-bx1)*(by2-ay1);
    }
    else if(bx2>ax1 && by2>ay1){
        area -= (bx2-ax1)*(by2-ay1);
    }
    else if(bx2>ax1 && by1>ay1){
        area -= (bx2-ax1)*(ay2-by1);
    }
    printf("%d",area);
    return 0;
}