#include <stdio.h>
#include <string.h>

char* reverse( char str1[] ) ;

int main() {
    char text[50] ;  
    char *output ;
    output = reverse( text ) ;
    printf( "MAIN : %s\n", output ) ;
    
    return 0 ;
}//end main function

char* reverse (char str1[] ) {
    printf("Enter str1 : ") ;
    fgets(str1, 50, stdin) ;  

    //delete newline
    size_t len = strlen(str1) ; 
    if (len > 0 && str1[len - 1] == '\n') {
        str1[len - 1] = '\0' ;
        len-- ;  
    }
    
    //reverse text
    for (int i = 0 ; i < len / 2 ; i++) {
        char temp = str1[i] ;
        str1[i] = str1[len - 1 - i] ;
        str1[len - 1 - i] = temp ;
    }

    printf("FUNC : %s\n", str1) ;
    return str1 ;
}//end function
