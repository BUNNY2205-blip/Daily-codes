#include <stdio.h>
#include <string.h>

char *op[] = {"+","-","/","*","%","//"}; 
int op_size = 6;   

int isoperator(char *word){
    for(int i=0;i<op_size;i++){
        if(strcmp(op[i],word)==0){
            return 1;
        }
    }
    return 0;
}

int main(){
    FILE* fp;
    char word[50];
    int count = 0;

    fp = fopen("operator_file.txt","r");
    if(fp == NULL){
        printf("Error: can't open the file\n");
        return 1;
    }

    while(fscanf(fp,"%s",word) != EOF){
        if(isoperator(word)){
            count++;
        }
    }

    printf("Total number of operators are: %d\n", count);
    fclose(fp);
    return 0;
}
