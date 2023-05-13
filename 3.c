#include <stdio.h>

int main() {
    int choice = 0;
    char option;
    int explain = 0;
    
    while (1) {
        char rectangle[] = "****************************************\n"
                           "*                                      *\n"
                           "*                                      *\n"
                           "*  T h e   D i n o s a u r   G a m e   *\n"
                           "*                                      *\n"
                           "*         1. Game start                *\n"
                           "*         2. Explain                   *\n"
                           "*         3. Exit                      *\n"
                           "*                                      *\n"
                           "****************************************\n";
        
        printf("%s", rectangle);
        
        scanf(" %c", &option);
        
        if (option == '1') {
            if (explain) {
                explain = 0;
                continue;
            }
            
            char rectangle_1[] = "****************************************\n"
                                 "*                                      *\n"
                                 "*                                      *\n"
                                 "*                                      *\n"
                                 "*                                      *\n"
                                 "*                                      *\n"
                                 "*                                      *\n"
                                 "*                                      *\n"
                                 "****************************************\n";
            printf("%s", rectangle_1);
            
            // Wait for a key press to continue
            char tmp;
            scanf(" %c", &tmp);
        }
        else if (option == '2') {
            if (explain) {
                continue;
            }
            
            explain = 1;
            
            char rectangle_2[] = "****************************************\n"
                                 "*                                      *\n"
                                 "*                                      *\n"
                                 "*  T h e   D i n o s a u r   G a m e   *\n"
                                 "*                                      *\n"
                                 "*  This game is about dinosaurs        *\n"
                                 "*  avoiding obstacles.                 *\n"
                                 "*  You can press 3 to go back.         *\n"
                                 "*                                      *\n"
                                 "****************************************\n";
            printf("%s", rectangle_2);
            
            // Wait for a key press to continue
            char tmp;
            scanf(" %c", &tmp);
        }
        else if (option == '3') {
            char rectangle_3[] = "****************************************\n"
                                 "*                                      *\n"
                                 "*                                      *\n"
                                 "*  T h e   D i n o s a u r   G a m e   *\n"
                                 "*                                      *\n"
                                 "*         Exiting the game...          *\n"
                                 "*                                      *\n"
                                 "*                                      *\n"
                                 "****************************************\n";
            printf("%s", rectangle_3);
            break;
        }
        else {
            continue;
        }
    }
    
    return 0;
}
