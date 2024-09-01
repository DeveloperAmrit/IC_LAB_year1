#include <stdio.h>

int main(){
    unsigned int day,month,year;
    scanf("%d %d %d",&day,&month,&year);

    int m_31_days[] = {1,3,5,7,8,10,12};

    int is_31_days = 0;
    int is_leap =0;

    for(int i=0;i<(sizeof m_31_days)/(sizeof 1);i++){
        if(m_31_days[i]==month){is_31_days++;}
    }
    if((year%400==0) || (year%100!=0 && year%4==0))  
    {  
        is_leap++;
    } 
    if((month>12) || (month ==0 || day==0 || year ==0)){
        printf("Invalid");
    }
    else if(is_31_days){
        (day>31)? printf("Invalid") : printf("Valid") ;
    }
    else if(is_leap && month==2){
        (day>29)? printf("Invalid") : printf("Valid") ;
    }
    else if((is_leap==0) && month==2){
        (day>28)? printf("Invalid") : printf("Valid") ;
    }
    else{
        (day>30)? printf("Invalid") : printf("Valid") ;
    }
    return 0;
}