#include <stdio.h>
#include <stdlib.h>
 
int main(){
    int n = 0;
    scanf("%d", &n);
    getchar();
    char **a;
    a = malloc(sizeof(char*)*n); //先長行出來
 
    for(int i = 0;i < n; i++){
        a[i] = (char*) malloc(sizeof(char)*18);  //再生成列出來
    }
 
    int b[10000];
    int k = 0; 
 
    for(int i = 0; i < n; i++){
        int j = 0;
        do{
            scanf("%c", &a[i][j]);
        }
        while(j < 17 && ++j);
        //a[i][j] = '\0';
    }
 
    while((scanf("%d", &b[k])) != EOF){
        k++;    
    }
 
    int index = 0;
 
    for(int i = 0; i < k; i++)
    {    
        index = b[i];
        printf("%s", *(a + index));
    }
    return 0;
}
