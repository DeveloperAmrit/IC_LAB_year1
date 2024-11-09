#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct course {
    char name[100];
    char id[50];
    int ns;

};

int compareCourses(const void *a,const void *b){
    struct course *courseA = (struct course*)a;
    struct course *courseB = (struct course*)b;

    if(courseA->ns!=courseB->ns){
        return courseB->ns-courseA->ns;
    }
    return strcmp(courseA->name,courseB->name);
}

int main(){
    int n;
    scanf("%d",&n);
    getchar();

    struct course arr1[n];

    for(int i=0;i<n;i++){
        fgets(arr1[i].name,sizeof(arr1[i].name),stdin);
        arr1[i].name[strcspn(arr1[i].name, "\n")] = '\0';
        scanf("%s",arr1[i].id);
        scanf("%d",&arr1[i].ns);
        getchar();
    }
    
    qsort(arr1,n,sizeof(struct course),compareCourses);

    for(int i=0;i<n;i++){
        printf("%s %s %d\n",arr1[i].name,arr1[i].id,arr1[i].ns);
    }
    
    
    return 0;
}