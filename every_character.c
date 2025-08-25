// Write a c program to count total occurence of each character in a given file
#include<stdio.h>
#include<string.h>
char *alphabets[] = {
    "a","b","c","d","e","f","g","h","i","j","k","l","m",
    "n","o","p","q","r","s","t","u","v","w","x","y","z"
};
int alpha_size = 26;
int ischaracter(char *word){
    for(int i=0;i<alphabets;i++){
        if(strcmp(alphabets[i],word)==0){
            return 1;
        }
    }
    return 0;
}
int main(){
    FILE *fp;
    char word[50];
    int count = 0;
    fp = fopen("Character_file.txt","r");
    if(fp==NULL){
        print("Error:: Can't open the file::");
        return 1;
    }
    
}
