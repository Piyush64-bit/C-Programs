// Create a struct book with char title[20] and int pages, then print
#include <stdio.h>

struct book {
    char title[50];
    int pages;
};

int main(){
    struct book a = {"NCERT", 200};

    printf("The book name: %s and the pages: %d \n", a.title, a.pages);
    
    return 0;
}