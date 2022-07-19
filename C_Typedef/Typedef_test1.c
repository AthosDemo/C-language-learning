#include <stdio.h>
#include <string.h>

typedef struct Books
{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
} Book;

int main(void)
{
    Book book;

    strcpy( book.title,"C");
    strcpy( book.author,"Runoob");
    strcpy( book.subject,"Programming language");
    book.book_id = 12345;

    printf( "book_title : %s\b",book.title);
    printf("book_author: %s\n",book.author);
    printf("book_subject: %s\n",book.subject);
    printf("book_id: %d\n",book.book_id);

    return 0;
}