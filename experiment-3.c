#include<stdio.h>
#include<string.h>
char*keyword[]={"auto", "break", "case", "char", "const", "continue", "default", "do",
    "double", "else", "enum", "extern", "float", "for", "goto", "if",
    "int", "long", "register", "return", "short", "signed", "sizeof", "static",
    "struct", "switch", "typedef", "union", "unsigned", "void", "volatile", "while"};
    int keyword_count = 32;
    int iskeyword(char*word){
        for(int i=0;i<keyword_count;i++){
            if(strcmp(keyword[i],word)==0){
                return 1;
            }
            return 0;
        }
    }
    int main(){
        FILE* fp;
        char word[50];
        int count =0;
        fp = fopen("CompilerD.txt","r");
        if(fp==NULL){
            printf("Error:: Can't open the file::\n");
            return 1;
        }
        while(fscanf(fp,"%s",word)!=EOF){
            if(iskeyword(word)){
                count ++;
            }
        }
        printf("Total number of keyword in a file is:: %d\n",count);
        fclose(fp);
        return 0;

    }

