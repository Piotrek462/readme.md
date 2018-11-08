
#define WC_EDITA              "Edit"    // ansi
#define WC_EDITW              L"Edit"   // wide

#ifdef UNICODE
#define WC_EDIT               WC_EDITW
#else
#define WC_EDIT               WC_EDITA
#endif

#include <windows.h>
#include <iostream>
#include <cstdlib>

// Funkcje Globalne
LRESULT CALLBACK WindowProcedure( HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam );
LRESULT CALLBACK ChildWindowProcedure( HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam );
LRESULT CALLBACK ChildWindowProcedure2( HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam );
LRESULT CALLBACK ChildWindowProcedure3( HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam );
LRESULT CALLBACK ChildWindowProcedure4( HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam );
LRESULT CALLBACK ChildWindowProcedure5( HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam );
LRESULT CALLBACK ChildWindowProcedure6( HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam );
LRESULT CALLBACK ChildWindowProcedure7( HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam );
LRESULT CALLBACK ChildWindowProcedure8( HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam );
LRESULT CALLBACK ChildWindowProcedure9( HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam );
LRESULT CALLBACK ChildWindowProcedure10( HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam );
LRESULT CALLBACK ChildWindowProcedure11( HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam );
LRESULT CALLBACK ChildWindowProcedure12( HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam );
LRESULT CALLBACK ChildWindowProcedure13( HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam );
LRESULT CALLBACK ChildWindowProcedure14( HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam );
LRESULT CALLBACK ChildWindowProcedure15( HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam );
LRESULT CALLBACK ChildWindowProcedure16( HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam );
LRESULT CALLBACK ChildWindowProcedure17( HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam );
LRESULT CALLBACK ChildWindowProcedure18( HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam );
LRESULT CALLBACK ChildWindowProcedure19( HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam );
LRESULT CALLBACK ChildWindowProcedure20( HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam );
LRESULT CALLBACK ChildWindowProcedure21( HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam );
LRESULT CALLBACK ChildWindowProcedure22( HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam );
LRESULT CALLBACK ChildWindowProcedure23( HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam );
LRESULT CALLBACK ChildWindowProcedure24( HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam );
LRESULT CALLBACK ChildWindowProcedure25( HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam );
LRESULT CALLBACK ChildWindowProcedure26( HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam );
LRESULT CALLBACK ChildWindowProcedure27( HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam );
LRESULT CALLBACK ChildWindowProcedure28( HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam );
LRESULT CALLBACK ChildWindowProcedure29( HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam );
LRESULT CALLBACK ChildWindowProcedure30( HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam );
LRESULT CALLBACK ChildWindowProcedure31( HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam );

#define ID_PRZYCISK1 501
#define ID_PRZYCISK2 502
#define ID_PRZYCISK3 503
#define ID_PRZYCISK4 504
#define ID_PRZYCISK5 505
#define ID_PRZYCISK6 506
#define ID_PRZYCISK7 507
#define ID_PRZYCISK8 508
#define ID_PRZYCISK9 509
#define ID_PRZYCISK10 510
#define ID_PRZYCISK11 511
#define ID_PRZYCISK12 512

char szClassName[] = "1";
char szChildName[] = "2";
char szChildName2[] = "3";
char szChildName3[] = "4";
char szChildName4[] = "5";
char szChildName5[] = "6";
char szChildName6[] = "7";
char szChildName7[] = "8";
char szChildName8[] = "9";
char szChildName9[] = "10";
char szChildName10[] = "11";
char szChildName11[] = "12";
char szChildName12[] = "13";
char szChildName13[] = "14";
char szChildName14[] = "15";
char szChildName15[] = "16";
char szChildName16[] = "17";
char szChildName17[] = "18";
char szChildName18[] = "19";
char szChildName19[] = "20";
char szChildName20[] = "21";
char szChildName21[] = "22";
char szChildName22[] = "23";
char szChildName23[] = "24";
char szChildName24[] = "25";
char szChildName25[] = "26";
char szChildName26[] = "27";
char szChildName27[] = "28";
char szChildName28[] = "29";
char szChildName29[] = "30";
char szChildName30[] = "31";
char szAppName [] = "Kategoria";
char szAppName1 [] = "Quiz";
char szAppName2 [] = "Stolice";
char szAppName3 [] = "Stolice1";
char szAppName4 [] = "Stolice2";
char szAppName5 [] = "Stolice3";
char szAppName6[]= "Osoby";
char szAppName7[]=  "Osoby2";
char szAppName8[]=  "Osoby3";
char szAppName9[]=  "Osoby4";
char szAppName10[]= "Osoby5";
char szAppName11 [] = "Muzyka";
char szAppName12 [] = "Muzyka1";
char szAppName13 [] = "Muzyka2";
char szAppName14 [] = "Muzyka3";
char szAppName15 [] = "Muzyka4";
char szAppName16 [] = "Filmy";
char szAppName17[]= "Filmy1";
char szAppName18[]=  "Filmy2";
char szAppName19[]=  "Filmy3";
char szAppName20[]=  "Filmy4";
char szAppName21[]= "Jezyki";
char szAppName22 [] = "Jezyki1";
char szAppName23 [] = "Jezyki2";
char szAppName24 [] = "Jezyki3";
char szAppName25 [] = "Jezyki4";
char szAppName26 [] = "Sport";
char szAppName27 [] = "Sport1";
char szAppName28[]= "Sport2";
char szAppName29[]=  "Sport3";
char szAppName30[]=  "Sport4";


MSG Komunikat;
HWND odpowiedzm1,odpowiedzm2,odpowiedzm3,odpowiedzm4,odpowiedzm5,odpowiedzm6,odpowiedzm7,odpowiedzm8,odpowiedzm9,odpowiedzm10,odpowiedzm11,odpowiedzm12,odpowiedzm13,odpowiedzm14,odpowiedzm15,odpowiedzm16;
HWND odpowiedzs1,odpowiedzs2,odpowiedzs3,odpowiedzs4,odpowiedzs5,odpowiedzs6,odpowiedzs7,odpowiedzs8,odpowiedzs9,odpowiedzs10,odpowiedzs11,odpowiedzs12,odpowiedzs13,odpowiedzs14,odpowiedzs15,odpowiedzs16;
HWND odpowiedzo1,odpowiedzo2,odpowiedzo3,odpowiedzo4,odpowiedzo5,odpowiedzo6,odpowiedzo7,odpowiedzo8,odpowiedzo9,odpowiedzo10,odpowiedzo11,odpowiedzo12,odpowiedzo13,odpowiedzo14,odpowiedzo15,odpowiedzo16;
HWND odpowiedzf1,odpowiedzf2,odpowiedzf3,odpowiedzf4,odpowiedzf5,odpowiedzf6,odpowiedzf7,odpowiedzf8,odpowiedzf9,odpowiedzf10,odpowiedzf11,odpowiedzf12,odpowiedzf13,odpowiedzf14,odpowiedzf15,odpowiedzf16;
HWND odpowiedzj1,odpowiedzj2,odpowiedzj3,odpowiedzj4,odpowiedzj5,odpowiedzj6,odpowiedzj7,odpowiedzj8,odpowiedzj9,odpowiedzj10,odpowiedzj11,odpowiedzj12,odpowiedzj13,odpowiedzj14,odpowiedzj15,odpowiedzj16;
HWND odpowiedzsp1,odpowiedzsp2,odpowiedzsp3,odpowiedzsp4,odpowiedzsp5,odpowiedzsp6,odpowiedzsp7,odpowiedzsp8,odpowiedzsp9,odpowiedzsp10,odpowiedzsp11,odpowiedzsp12,odpowiedzsp13,odpowiedzsp14,odpowiedzsp15,odpowiedzsp16;
HWND g_hPrzycisk, g_hPrzycisk2, g_hPrzycisk3, g_hPrzycisk4, g_hPrzycisk5, g_hPrzycisk6, zasady;
HWND wygrany,wygrany2,wygrany3,wygrany4,wygrany5,wygrany6,wygrany7,wygrany8,wygrany9,wygrany10,wygrany11,wygrany12;
HWND hwnd, hwnd2, hwnd3, hwnd4,hwnd5,hwnd6,hwnd7,hwnd8,hwnd9,hwnd10,hwnd11,hwnd12,hwnd13,hwnd14,hwnd15,hwnd16,hwnd17,hwnd18,hwnd19,hwnd20,hwnd21,hwnd22,hwnd23,hwnd24,hwnd25,hwnd26,hwnd27, hwnd28,hwnd29,hwnd30,hwnd31,pytanie1, pytanie2, pytanie3, pytanie4, pytanie5;

HINSTANCE hInstance;


//Start Aplikacji

int WINAPI WinMain( HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow )
{
WNDCLASSEX wincl;
MSG messages;
wincl.hInstance = hInstance;
wincl.lpszClassName =szClassName;
wincl.lpfnWndProc = WindowProcedure;
wincl.style = 0;
wincl.cbSize = sizeof( WNDCLASSEX );
wincl.hIcon = LoadIcon( hInstance, IDI_APPLICATION );
wincl.hIconSm = LoadIcon( hInstance, IDI_APPLICATION );
wincl.hCursor = LoadCursor( NULL, IDC_ARROW );
wincl.lpszMenuName = NULL;
wincl.cbClsExtra = 0;
wincl.cbWndExtra = 0;
wincl.hbrBackground =( HBRUSH ) COLOR_WINDOW;
if( !RegisterClassEx( & wincl ) )
        return 0;
// Klasa okna dziecka
wincl.lpszClassName = szChildName;
wincl.lpfnWndProc = ChildWindowProcedure;
wincl.hbrBackground = (HBRUSH) COLOR_WINDOW;
if( !RegisterClassEx( & wincl ) )
         return 0;
wincl.lpszClassName = szChildName2;
wincl.lpfnWndProc = ChildWindowProcedure2;
wincl.hbrBackground = (HBRUSH) COLOR_WINDOW;
if( !RegisterClassEx( & wincl ) )
         return 0;
wincl.lpszClassName = szChildName3;
wincl.lpfnWndProc = ChildWindowProcedure3;
wincl.hbrBackground = (HBRUSH) COLOR_WINDOW;
if( !RegisterClassEx( & wincl ) )
         return 0;
wincl.lpszClassName = szChildName4;
wincl.lpfnWndProc = ChildWindowProcedure4;
wincl.hbrBackground = (HBRUSH) COLOR_WINDOW;
if( !RegisterClassEx( & wincl ) )
         return 0;
wincl.lpszClassName = szChildName5;
wincl.lpfnWndProc = ChildWindowProcedure5;
wincl.hbrBackground = (HBRUSH) COLOR_WINDOW;
if( !RegisterClassEx( & wincl ) )
         return 0;

         wincl.lpszClassName = szChildName6;
wincl.lpfnWndProc = ChildWindowProcedure6;
wincl.hbrBackground = (HBRUSH) COLOR_WINDOW;
if( !RegisterClassEx( & wincl ) )
         return 0;
wincl.lpszClassName = szChildName7;
wincl.lpfnWndProc = ChildWindowProcedure7;
wincl.hbrBackground = (HBRUSH) COLOR_WINDOW;
if( !RegisterClassEx( & wincl ) )
         return 0;
wincl.lpszClassName = szChildName8;
wincl.lpfnWndProc = ChildWindowProcedure8;
wincl.hbrBackground = (HBRUSH) COLOR_WINDOW;
if( !RegisterClassEx( & wincl ) )
         return 0;
wincl.lpszClassName = szChildName9;
wincl.lpfnWndProc = ChildWindowProcedure9;
wincl.hbrBackground = (HBRUSH) COLOR_WINDOW;
if( !RegisterClassEx( & wincl ) )
         return 0;
         wincl.lpszClassName = szChildName10;
wincl.lpfnWndProc = ChildWindowProcedure10;
wincl.hbrBackground = (HBRUSH) COLOR_WINDOW;
if( !RegisterClassEx( & wincl ) )
         return 0;
         wincl.lpszClassName = szChildName11;
wincl.lpfnWndProc = ChildWindowProcedure11;
wincl.hbrBackground = (HBRUSH) COLOR_WINDOW;
if( !RegisterClassEx( & wincl ) )
         return 0;
wincl.lpszClassName = szChildName12;
wincl.lpfnWndProc = ChildWindowProcedure12;
wincl.hbrBackground = (HBRUSH) COLOR_WINDOW;
if( !RegisterClassEx( & wincl ) )
         return 0;
wincl.lpszClassName = szChildName13;
wincl.lpfnWndProc = ChildWindowProcedure13;
wincl.hbrBackground = (HBRUSH) COLOR_WINDOW;
if( !RegisterClassEx( & wincl ) )
         return 0;
wincl.lpszClassName = szChildName14;
wincl.lpfnWndProc = ChildWindowProcedure14;
wincl.hbrBackground = (HBRUSH) COLOR_WINDOW;
if( !RegisterClassEx( & wincl ) )
         return 0;
wincl.lpszClassName = szChildName15;
wincl.lpfnWndProc = ChildWindowProcedure15;
wincl.hbrBackground = (HBRUSH) COLOR_WINDOW;
if( !RegisterClassEx( & wincl ) )
         return 0;

         wincl.lpszClassName = szChildName16;
wincl.lpfnWndProc = ChildWindowProcedure16;
wincl.hbrBackground = (HBRUSH) COLOR_WINDOW;
if( !RegisterClassEx( & wincl ) )
         return 0;
wincl.lpszClassName = szChildName17;
wincl.lpfnWndProc = ChildWindowProcedure17;
wincl.hbrBackground = (HBRUSH) COLOR_WINDOW;
if( !RegisterClassEx( & wincl ) )
         return 0;
wincl.lpszClassName = szChildName18;
wincl.lpfnWndProc = ChildWindowProcedure18;
wincl.hbrBackground = (HBRUSH) COLOR_WINDOW;
if( !RegisterClassEx( & wincl ) )
         return 0;
wincl.lpszClassName = szChildName19;
wincl.lpfnWndProc = ChildWindowProcedure19;
wincl.hbrBackground = (HBRUSH) COLOR_WINDOW;
if( !RegisterClassEx( & wincl ) )
         return 0;
         wincl.lpszClassName = szChildName20;
wincl.lpfnWndProc = ChildWindowProcedure20;
wincl.hbrBackground = (HBRUSH) COLOR_WINDOW;
if( !RegisterClassEx( & wincl ) )
         return 0;
         wincl.lpszClassName = szChildName21;
wincl.lpfnWndProc = ChildWindowProcedure21;
wincl.hbrBackground = (HBRUSH) COLOR_WINDOW;
if( !RegisterClassEx( & wincl ) )
         return 0;
wincl.lpszClassName = szChildName22;
wincl.lpfnWndProc = ChildWindowProcedure22;
wincl.hbrBackground = (HBRUSH) COLOR_WINDOW;
if( !RegisterClassEx( & wincl ) )
         return 0;
wincl.lpszClassName = szChildName23;
wincl.lpfnWndProc = ChildWindowProcedure23;
wincl.hbrBackground = (HBRUSH) COLOR_WINDOW;
if( !RegisterClassEx( & wincl ) )
         return 0;
wincl.lpszClassName = szChildName24;
wincl.lpfnWndProc = ChildWindowProcedure24;
wincl.hbrBackground = (HBRUSH) COLOR_WINDOW;
if( !RegisterClassEx( & wincl ) )
         return 0;
wincl.lpszClassName = szChildName25;
wincl.lpfnWndProc = ChildWindowProcedure25;
wincl.hbrBackground = (HBRUSH) COLOR_WINDOW;
if( !RegisterClassEx( & wincl ) )
         return 0;

         wincl.lpszClassName = szChildName26;
wincl.lpfnWndProc = ChildWindowProcedure26;
wincl.hbrBackground = (HBRUSH) COLOR_WINDOW;
if( !RegisterClassEx( & wincl ) )
         return 0;
wincl.lpszClassName = szChildName27;
wincl.lpfnWndProc = ChildWindowProcedure27;
wincl.hbrBackground = (HBRUSH) COLOR_WINDOW;
if( !RegisterClassEx( & wincl ) )
         return 0;
wincl.lpszClassName = szChildName28;
wincl.lpfnWndProc = ChildWindowProcedure28;
wincl.hbrBackground = (HBRUSH) COLOR_WINDOW;
if( !RegisterClassEx( & wincl ) )
         return 0;
wincl.lpszClassName = szChildName29;
wincl.lpfnWndProc = ChildWindowProcedure29;
wincl.hbrBackground = (HBRUSH) COLOR_WINDOW;
if( !RegisterClassEx( & wincl ) )
         return 0;
         wincl.lpszClassName = szChildName30;
wincl.lpfnWndProc = ChildWindowProcedure30;
wincl.hbrBackground = (HBRUSH) COLOR_WINDOW;
if( !RegisterClassEx( & wincl ) )
         return 0;

//Utworzenie Okien

    hwnd = CreateWindowEx( WS_EX_CLIENTEDGE, szClassName, szAppName, WS_OVERLAPPEDWINDOW,
    CW_USEDEFAULT, CW_USEDEFAULT, 750, 500, NULL, NULL, hInstance, NULL );

    hwnd2 = CreateWindowEx( WS_EX_CLIENTEDGE, szChildName, szAppName1, WS_OVERLAPPEDWINDOW,
    CW_USEDEFAULT, CW_USEDEFAULT, 800, 600, NULL, NULL, hInstance, NULL );

    hwnd3 = CreateWindowEx( WS_EX_CLIENTEDGE, szChildName2, szAppName2, WS_OVERLAPPEDWINDOW,
    CW_USEDEFAULT, CW_USEDEFAULT, 800, 600, NULL, NULL, hInstance, NULL );

    hwnd4 = CreateWindowEx( WS_EX_CLIENTEDGE, szChildName3, szAppName3, WS_OVERLAPPEDWINDOW,
    CW_USEDEFAULT, CW_USEDEFAULT, 800, 600, NULL, NULL, hInstance, NULL );

    hwnd5 = CreateWindowEx( WS_EX_CLIENTEDGE, szChildName4, szAppName4, WS_OVERLAPPEDWINDOW,
    CW_USEDEFAULT, CW_USEDEFAULT, 800, 600, NULL, NULL, hInstance, NULL );

    hwnd6 = CreateWindowEx( WS_EX_CLIENTEDGE, szChildName5, szAppName5, WS_OVERLAPPEDWINDOW,
    CW_USEDEFAULT, CW_USEDEFAULT, 800, 600, NULL, NULL, hInstance, NULL );

    hwnd7 = CreateWindowEx( WS_EX_CLIENTEDGE, szChildName6, szAppName6, WS_OVERLAPPEDWINDOW,
    CW_USEDEFAULT, CW_USEDEFAULT, 800, 600, NULL, NULL, hInstance, NULL );

    hwnd8 = CreateWindowEx( WS_EX_CLIENTEDGE, szChildName7, szAppName7, WS_OVERLAPPEDWINDOW,
    CW_USEDEFAULT, CW_USEDEFAULT, 800, 600, NULL, NULL, hInstance, NULL );

    hwnd9 = CreateWindowEx( WS_EX_CLIENTEDGE, szChildName8, szAppName8, WS_OVERLAPPEDWINDOW,
    CW_USEDEFAULT, CW_USEDEFAULT, 800, 600, NULL, NULL, hInstance, NULL );

    hwnd10 = CreateWindowEx( WS_EX_CLIENTEDGE, szChildName9, szAppName9, WS_OVERLAPPEDWINDOW,
    CW_USEDEFAULT, CW_USEDEFAULT, 800, 600, NULL, NULL, hInstance, NULL );

    hwnd11 = CreateWindowEx( WS_EX_CLIENTEDGE, szChildName10, szAppName10, WS_OVERLAPPEDWINDOW,
    CW_USEDEFAULT, CW_USEDEFAULT, 800, 600, NULL, NULL, hInstance, NULL );

    hwnd12 = CreateWindowEx( WS_EX_CLIENTEDGE, szChildName11, szAppName11, WS_OVERLAPPEDWINDOW,
    CW_USEDEFAULT, CW_USEDEFAULT, 750, 500, NULL, NULL, hInstance, NULL );

    hwnd13 = CreateWindowEx( WS_EX_CLIENTEDGE, szChildName12, szAppName12, WS_OVERLAPPEDWINDOW,
    CW_USEDEFAULT, CW_USEDEFAULT, 800, 600, NULL, NULL, hInstance, NULL );

    hwnd14 = CreateWindowEx( WS_EX_CLIENTEDGE, szChildName13, szAppName13, WS_OVERLAPPEDWINDOW,
    CW_USEDEFAULT, CW_USEDEFAULT, 800, 600, NULL, NULL, hInstance, NULL );

    hwnd15 = CreateWindowEx( WS_EX_CLIENTEDGE, szChildName14, szAppName14, WS_OVERLAPPEDWINDOW,
    CW_USEDEFAULT, CW_USEDEFAULT, 800, 600, NULL, NULL, hInstance, NULL );

    hwnd16 = CreateWindowEx( WS_EX_CLIENTEDGE, szChildName15, szAppName15, WS_OVERLAPPEDWINDOW,
    CW_USEDEFAULT, CW_USEDEFAULT, 800, 600, NULL, NULL, hInstance, NULL );

    hwnd17 = CreateWindowEx( WS_EX_CLIENTEDGE, szChildName16, szAppName16, WS_OVERLAPPEDWINDOW,
    CW_USEDEFAULT, CW_USEDEFAULT, 800, 600, NULL, NULL, hInstance, NULL );

    hwnd18 = CreateWindowEx( WS_EX_CLIENTEDGE, szChildName17, szAppName17, WS_OVERLAPPEDWINDOW,
    CW_USEDEFAULT, CW_USEDEFAULT, 800, 600, NULL, NULL, hInstance, NULL );

    hwnd19 = CreateWindowEx( WS_EX_CLIENTEDGE, szChildName18, szAppName18, WS_OVERLAPPEDWINDOW,
    CW_USEDEFAULT, CW_USEDEFAULT, 800, 600, NULL, NULL, hInstance, NULL );

    hwnd20 = CreateWindowEx( WS_EX_CLIENTEDGE, szChildName19, szAppName19, WS_OVERLAPPEDWINDOW,
    CW_USEDEFAULT, CW_USEDEFAULT, 800, 600, NULL, NULL, hInstance, NULL );

    hwnd21 = CreateWindowEx( WS_EX_CLIENTEDGE, szChildName20, szAppName20,WS_OVERLAPPEDWINDOW,
    CW_USEDEFAULT, CW_USEDEFAULT, 800, 600, NULL, NULL, hInstance, NULL );

    hwnd22 = CreateWindowEx( WS_EX_CLIENTEDGE, szChildName21, szAppName21, WS_OVERLAPPEDWINDOW,
    CW_USEDEFAULT, CW_USEDEFAULT, 800, 600, NULL, NULL, hInstance, NULL );

    hwnd23 = CreateWindowEx( WS_EX_CLIENTEDGE, szChildName22, szAppName22, WS_OVERLAPPEDWINDOW,
    CW_USEDEFAULT, CW_USEDEFAULT, 750, 500, NULL, NULL, hInstance, NULL );

    hwnd24 = CreateWindowEx( WS_EX_CLIENTEDGE, szChildName23, szAppName23, WS_OVERLAPPEDWINDOW,
    CW_USEDEFAULT, CW_USEDEFAULT, 800, 600, NULL, NULL, hInstance, NULL );

    hwnd25 = CreateWindowEx( WS_EX_CLIENTEDGE, szChildName24, szAppName24, WS_OVERLAPPEDWINDOW,
    CW_USEDEFAULT, CW_USEDEFAULT, 800, 600, NULL, NULL, hInstance, NULL );

    hwnd26 = CreateWindowEx( WS_EX_CLIENTEDGE, szChildName25, szAppName25, WS_OVERLAPPEDWINDOW,
    CW_USEDEFAULT, CW_USEDEFAULT, 800, 600, NULL, NULL, hInstance, NULL );

    hwnd27 = CreateWindowEx( WS_EX_CLIENTEDGE, szChildName26, szAppName26, WS_OVERLAPPEDWINDOW,
    CW_USEDEFAULT, CW_USEDEFAULT, 800, 600, NULL, NULL, hInstance, NULL );


    hwnd28 = CreateWindowEx( WS_EX_CLIENTEDGE, szChildName27, szAppName27, WS_OVERLAPPEDWINDOW,
    CW_USEDEFAULT, CW_USEDEFAULT, 800, 600, NULL, NULL, hInstance, NULL );

    hwnd29 = CreateWindowEx( WS_EX_CLIENTEDGE, szChildName28, szAppName28, WS_OVERLAPPEDWINDOW,
    CW_USEDEFAULT, CW_USEDEFAULT, 800, 600, NULL, NULL, hInstance, NULL );

    hwnd30 = CreateWindowEx( WS_EX_CLIENTEDGE, szChildName29, szAppName29, WS_OVERLAPPEDWINDOW,
    CW_USEDEFAULT, CW_USEDEFAULT, 800, 600, NULL, NULL, hInstance, NULL );

    hwnd31 = CreateWindowEx( WS_EX_CLIENTEDGE, szChildName30, szAppName30, WS_OVERLAPPEDWINDOW,
    CW_USEDEFAULT, CW_USEDEFAULT, 800, 600, NULL, NULL, hInstance, NULL );


BOOL CheckRadioButton(
  HWND hDlg,
  int  nIDFirstButton,
  int  nIDLastButton,
  int  nIDCheckButton
);
ShowWindow( hwnd, SW_SHOW);

        // START QUIZU
MessageBox( NULL, "Wybierz kategorie", "", MB_ICONINFORMATION | MB_OK );

while( GetMessage( & Komunikat, NULL, 0, 0 ) )
{
    TranslateMessage( & Komunikat );
    DispatchMessage( & Komunikat );
}
return Komunikat.wParam;
}

//Okno gÂ³Ã³wne
LRESULT CALLBACK WindowProcedure( HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam )

{
switch( message)
{
case WM_CREATE:
zasady = CreateWindowEx( WS_EX_CLIENTEDGE, "BUTTON", "Zasady", WS_CHILD | WS_VISIBLE , 300,170,150,100, hwnd, (HMENU) 7, hInstance, NULL );

wygrany = CreateWindowEx( 0, "BUTTON", "Gracz 1", WS_CHILD | WS_VISIBLE | BS_AUTORADIOBUTTON|WS_GROUP,
100, 100, 150, 30, hwnd,( HMENU )  ID_PRZYCISK1, hInstance, NULL );
SendMessage(wygrany, BM_SETCHECK, BST_CHECKED,0);
wygrany2 = CreateWindowEx( 0, "BUTTON", "Gracz 2", WS_CHILD | WS_VISIBLE | BS_AUTORADIOBUTTON,
100, 120, 150, 30, hwnd, ( HMENU ) ID_PRZYCISK2, hInstance, NULL );
SendMessage(wygrany2, BM_SETCHECK, BST_CHECKED,0);
wygrany3 = CreateWindowEx( 0, "BUTTON", "Gracz 1", WS_CHILD | WS_VISIBLE | BS_AUTORADIOBUTTON|WS_GROUP,
100, 240, 150, 30, hwnd, ( HMENU ) ID_PRZYCISK3, hInstance, NULL );
SendMessage(wygrany3, BM_SETCHECK, BST_CHECKED,0);
wygrany4 = CreateWindowEx( 0, "BUTTON", "Gracz 2", WS_CHILD | WS_VISIBLE | BS_AUTORADIOBUTTON,
100, 260, 150, 30, hwnd, ( HMENU ) ID_PRZYCISK4, hInstance, NULL );
SendMessage(wygrany4, BM_SETCHECK, BST_CHECKED,0);
wygrany5 = CreateWindowEx( 0, "BUTTON", "Gracz 1", WS_CHILD | WS_VISIBLE | BS_AUTORADIOBUTTON|WS_GROUP,
100, 390, 150, 30, hwnd, ( HMENU ) ID_PRZYCISK5, hInstance, NULL );
SendMessage(wygrany5, BM_SETCHECK, BST_CHECKED,0);
wygrany6 = CreateWindowEx( 0, "BUTTON", "Gracz 2", WS_CHILD | WS_VISIBLE | BS_AUTORADIOBUTTON,
100, 410, 150, 30, hwnd, ( HMENU ) ID_PRZYCISK6, hInstance, NULL );
SendMessage(wygrany6, BM_SETCHECK, BST_CHECKED,0);
wygrany7 = CreateWindowEx( 0, "BUTTON", "Gracz 1", WS_CHILD | WS_VISIBLE | BS_AUTORADIOBUTTON|WS_GROUP,
500, 100, 150, 30, hwnd, ( HMENU ) ID_PRZYCISK7, hInstance, NULL );
SendMessage(wygrany7, BM_SETCHECK, BST_CHECKED,0);
wygrany8 = CreateWindowEx( 0, "BUTTON", "Gracz 2", WS_CHILD | WS_VISIBLE | BS_AUTORADIOBUTTON,
500, 120, 150, 30, hwnd, ( HMENU ) ID_PRZYCISK8, hInstance, NULL );
SendMessage(wygrany8, BM_SETCHECK, BST_CHECKED,0);
wygrany9 = CreateWindowEx( 0, "BUTTON", "Gracz 1", WS_CHILD | WS_VISIBLE | BS_AUTORADIOBUTTON|WS_GROUP,
500, 240, 150, 30, hwnd, ( HMENU ) ID_PRZYCISK9, hInstance, NULL );
SendMessage(wygrany9, BM_SETCHECK, BST_CHECKED,0);
wygrany10 = CreateWindowEx( 0, "BUTTON", "Gracz 2", WS_CHILD | WS_VISIBLE | BS_AUTORADIOBUTTON,
500, 260, 150, 30, hwnd, ( HMENU ) ID_PRZYCISK10, hInstance, NULL );
SendMessage(wygrany10, BM_SETCHECK, BST_CHECKED,0);
wygrany11 = CreateWindowEx( 0, "BUTTON", "Gracz 1", WS_CHILD | WS_VISIBLE | BS_AUTORADIOBUTTON|WS_GROUP,
500, 390, 150, 30, hwnd, ( HMENU ) ID_PRZYCISK11, hInstance, NULL );
SendMessage(wygrany11, BM_SETCHECK, BST_CHECKED,0);
wygrany12 = CreateWindowEx( 0, "BUTTON", "Gracz 2", WS_CHILD | WS_VISIBLE | BS_AUTORADIOBUTTON,
500, 410, 150, 30, hwnd, ( HMENU ) ID_PRZYCISK12, hInstance, NULL );
SendMessage(wygrany12, BM_SETCHECK, BST_CHECKED,0);

g_hPrzycisk = CreateWindowEx( 0, "BUTTON", "Stolice", WS_CHILD | WS_VISIBLE,
50, 30, 200, 50, hwnd,  (HMENU) 1, hInstance, NULL );
g_hPrzycisk2 = CreateWindowEx( 0, "BUTTON", "Osoby", WS_CHILD | WS_VISIBLE,
50, 170, 200, 50, hwnd, (HMENU) 2, hInstance, NULL );
g_hPrzycisk3 = CreateWindowEx( 0, "BUTTON", "Muzyka", WS_CHILD | WS_VISIBLE,
50, 320, 200, 50, hwnd, (HMENU) 3, hInstance, NULL );
g_hPrzycisk4 = CreateWindowEx( 0, "BUTTON", "Filmy", WS_CHILD | WS_VISIBLE,
500, 30, 200, 50, hwnd, (HMENU) 4,hInstance, NULL );
g_hPrzycisk5 = CreateWindowEx( 0, "BUTTON", "Jezyki", WS_CHILD | WS_VISIBLE,
500, 170, 200, 50, hwnd, (HMENU) 5, hInstance, NULL );
g_hPrzycisk6 = CreateWindowEx( 0, "BUTTON", "Sport", WS_CHILD | WS_VISIBLE,
500, 320, 200, 50, hwnd, (HMENU) 6, hInstance, NULL );
break;

case WM_COMMAND:

switch( wParam )
{
case 1:
    ShowWindow(hwnd2, SW_SHOW);
        break;
        case 2:
    ShowWindow(hwnd7, SW_SHOW);
        break;
        case 3:
    ShowWindow(hwnd12, SW_SHOW);
        break;
        case 4:
    ShowWindow(hwnd17, SW_SHOW);
        break;
        case 5:
    ShowWindow(hwnd22, SW_SHOW);
        break;
        case 6:
    ShowWindow(hwnd27, SW_SHOW);
        break;

case ID_PRZYCISK1:
    MessageBox( hwnd, "W tej kategorii wygra³ gracz 1", "Gratulacje!", MB_ICONINFORMATION );
        break;

case ID_PRZYCISK2:
    MessageBox( hwnd, "W tej kategorii wygra³ gracz 2", "Gratulacje!", MB_ICONINFORMATION );
        break;
case ID_PRZYCISK3:
    MessageBox( hwnd, "W tej kategorii wygra³ gracz 1", "Gratulacje!", MB_ICONINFORMATION );
        break;

case ID_PRZYCISK4:
    MessageBox( hwnd, "W tej kategorii wygra³ gracz 2", "Gratulacje!", MB_ICONINFORMATION );
        break;
case ID_PRZYCISK5:
    MessageBox( hwnd, "W tej kategorii wygra³ gracz 1", "Gratulacje!", MB_ICONINFORMATION );
        break;

case ID_PRZYCISK6:
    MessageBox( hwnd, "W tej kategorii wygra³ gracz 2", "Gratulacje!", MB_ICONINFORMATION );
        break;
case ID_PRZYCISK7:
    MessageBox( hwnd, "W tej kategorii wygra³ gracz 1", "Gratulacje!", MB_ICONINFORMATION );
        break;

case ID_PRZYCISK8:
    MessageBox( hwnd, "W tej kategorii wygra³ gracz 2", "Gratulacje!", MB_ICONINFORMATION );
        break;
case ID_PRZYCISK9:
    MessageBox( hwnd, "W tej kategorii wygra³ gracz 1", "Gratulacje!", MB_ICONINFORMATION );
        break;

case ID_PRZYCISK10:
    MessageBox( hwnd, "W tej kategorii wygra³ gracz 2", "Gratulacje!", MB_ICONINFORMATION );
        break;
case ID_PRZYCISK11:
    MessageBox( hwnd, "W tej kategorii wygra³ gracz 1", "Gratulacje!", MB_ICONINFORMATION );
        break;

case ID_PRZYCISK12:
    MessageBox( hwnd, "W tej kategorii wygra³ gracz 2", "Gratulacje!", MB_ICONINFORMATION );
        break;
case 7:
    MessageBox(hwnd ,TEXT("1)Gra jest przeznaczona dla dwoch graczy. 2) Gracze odpowiadaja na pytania pojedynczo. Najpierw pierwszy zawodnik udziela odpowiedzi w danej kategorii, nastepnie zaznacza dobre/zle odpowiedzi w przeznaczonym do tego miejscu. Po zakonczeniu, gracze zmieniaja sie, a nastepny odpowiada na te same pytania."), "Zasady", MB_OK);
        break;
}
break;
case WM_CLOSE:
    if (MessageBox (hwnd, "Czy na pewno chcesz zamknac program?", szClassName, MB_YESNO | MB_ICONQUESTION) == IDYES)
{
SendMessage(hwnd, WM_DESTROY, 0, 0);
}
break;
case WM_DESTROY:
    PostQuitMessage (0);
        break;
            default:
                return DefWindowProc (hwnd, message, wParam, lParam);
}
return 0;
}
//Pierwsze okno potomne, wybor pytania
LRESULT CALLBACK ChildWindowProcedure( HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam )
{
switch (message)
{
case WM_CREATE:
pytanie1 = CreateWindowEx( 0, "BUTTON", "Pytanie 1", WS_CHILD | WS_VISIBLE, 50, 150, 300, 100, hwnd, (HMENU) 8, hInstance, NULL );
pytanie2 = CreateWindowEx( 0, "BUTTON", "Pytanie 2", WS_CHILD | WS_VISIBLE, 50, 300, 300, 100, hwnd, (HMENU) 9, hInstance, NULL );
pytanie3 = CreateWindowEx( 0, "BUTTON", "Pytanie 3", WS_CHILD | WS_VISIBLE, 400, 150, 300, 100, hwnd, (HMENU) 10, hInstance, NULL );
pytanie4 = CreateWindowEx( 0, "BUTTON", "Pytanie 4", WS_CHILD | WS_VISIBLE, 400, 300, 300, 100, hwnd, (HMENU) 11, hInstance, NULL );
    break;

case WM_COMMAND:
switch( wParam )

{
case 8:
    ShowWindow(hwnd3, SW_SHOW);
        break;
case 9:
    ShowWindow(hwnd4, SW_SHOW);
        break;
case 10:
    ShowWindow(hwnd5, SW_SHOW);
        break;
case 11:
    ShowWindow(hwnd6, SW_SHOW);
        break;
}
break;
case WM_CLOSE:
    if (MessageBox(hwnd, "Czy na pewno chcesz zamknac program?", szChildName, MB_YESNO | MB_ICONQUESTION) == IDYES)
{
        ShowWindow(hwnd, SW_HIDE);
}
break;

default:
    return DefWindowProc (hwnd, message, wParam, lParam);
}
return 0;
}
//Drugie okno potomne, strefa odpowiedzi
LRESULT CALLBACK ChildWindowProcedure2( HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam )
{
switch (message)
{
case WM_CREATE:
pytanie5 = CreateWindowEx( 0, "STATIC", "Co jest stolica Australii?", WS_CHILD | WS_VISIBLE, 300, 100, 300, 100, hwnd, NULL, hInstance, NULL );

odpowiedzs1 = CreateWindowEx( 0, "BUTTON", "Canberra", WS_CHILD | WS_VISIBLE, 50, 150, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzs2 = CreateWindowEx( 0, "BUTTON", "Sydney", WS_CHILD | WS_VISIBLE, 50, 300, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzs3 = CreateWindowEx( 0, "BUTTON", "Melbourne", WS_CHILD | WS_VISIBLE, 400, 150, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzs4 = CreateWindowEx( 0, "BUTTON", "Brisbane", WS_CHILD | WS_VISIBLE, 400, 300, 300, 100, hwnd, NULL, hInstance, NULL );

break;
case WM_COMMAND:
if(( HWND ) lParam == odpowiedzs1 )
     MessageBox( hwnd, "To poprawna odpowiedz", "Brawo!", MB_ICONINFORMATION );
if(( HWND ) lParam == odpowiedzs2 )
     MessageBox( hwnd, "To bledna odpowiedz", "Zle!", MB_ICONINFORMATION );
if(( HWND ) lParam == odpowiedzs3 )
     MessageBox( hwnd, "To bledna odpowiedz!", "Zle!", MB_ICONINFORMATION );
if(( HWND ) lParam == odpowiedzs4 )
     MessageBox( hwnd, "To bledna odpowiedz", "Zle!", MB_ICONINFORMATION );


case WM_CLOSE:
{
    ShowWindow(hwnd, SW_HIDE);
}
break;

default:
    return DefWindowProc (hwnd, message, wParam, lParam);
}
return 0;
}
LRESULT CALLBACK ChildWindowProcedure3( HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam )
{
switch (message)
{
case WM_CREATE:
pytanie5 = CreateWindowEx( 0, "STATIC", "Co jest stolica Stanów Zjednoczonych?", WS_CHILD | WS_VISIBLE, 300, 100, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzs5 = CreateWindowEx( 0, "BUTTON", "Nowy Jork", WS_CHILD | WS_VISIBLE, 50, 150, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzs6 = CreateWindowEx( 0, "BUTTON", "Waszyngton", WS_CHILD | WS_VISIBLE, 50, 300, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzs7 = CreateWindowEx( 0, "BUTTON", "Los Angeles", WS_CHILD | WS_VISIBLE, 400, 150, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzs8 = CreateWindowEx( 0, "BUTTON", "Chicago", WS_CHILD | WS_VISIBLE, 400, 300, 300, 100, hwnd, NULL, hInstance, NULL );

break;
case WM_COMMAND:
if(( HWND ) lParam == odpowiedzs5 )
     MessageBox( hwnd,  "To bledna odpowiedz!", "Zle!", MB_ICONINFORMATION );
if(( HWND ) lParam == odpowiedzs6 )
     MessageBox( hwnd, "To poprawna odpowiedz", "Brawo!", MB_ICONINFORMATION );
if(( HWND ) lParam == odpowiedzs7 )
     MessageBox( hwnd, "To bledna odpowiedz!", "Zle!", MB_ICONINFORMATION );
if(( HWND ) lParam == odpowiedzs8 )
     MessageBox( hwnd, "To bledna odpowiedz", "Zle!", MB_ICONINFORMATION );
case WM_CLOSE:
{
    ShowWindow(hwnd, SW_HIDE);
}
break;

default:
    return DefWindowProc (hwnd, message, wParam, lParam);
}
return 0;
}

LRESULT CALLBACK ChildWindowProcedure4( HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam )
{
switch (message)
{
case WM_CREATE:
pytanie5 = CreateWindowEx( 0, "STATIC", "Co jest stolica Japonii?", WS_CHILD | WS_VISIBLE, 300, 100, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzs9 = CreateWindowEx( 0, "BUTTON", "Kobe", WS_CHILD | WS_VISIBLE, 50, 150, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzs10 = CreateWindowEx( 0, "BUTTON", "Pekin", WS_CHILD | WS_VISIBLE, 50, 300, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzs11 = CreateWindowEx( 0, "BUTTON", "Osaka", WS_CHILD | WS_VISIBLE, 400, 150, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzs12 = CreateWindowEx( 0, "BUTTON", "Tokio", WS_CHILD | WS_VISIBLE, 400, 300, 300, 100, hwnd, NULL, hInstance, NULL );

break;
case WM_COMMAND:
if(( HWND ) lParam == odpowiedzs9 )
     MessageBox( hwnd, "To bledna odpowiedz!", "Zle!", MB_ICONINFORMATION );
if(( HWND ) lParam == odpowiedzs10 )
     MessageBox( hwnd, "To bledna odpowiedz", "Zle!", MB_ICONINFORMATION );
if(( HWND ) lParam == odpowiedzs11 )
     MessageBox( hwnd, "To bledna odpowiedz!", "Zle!", MB_ICONINFORMATION );
if(( HWND ) lParam == odpowiedzs12 )
     MessageBox( hwnd, "To poprawna odpowiedz", "Brawo!", MB_ICONINFORMATION );
case WM_CLOSE:
{
    ShowWindow(hwnd, SW_HIDE);
}
break;

default:
    return DefWindowProc (hwnd, message, wParam, lParam);
}
return 0;
}
LRESULT CALLBACK ChildWindowProcedure5( HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam )
{
switch (message)
{
case WM_CREATE:
pytanie5 = CreateWindowEx( 0, "STATIC", "Co bylo druga stolica Polski?", WS_CHILD | WS_VISIBLE, 300, 100, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzs13 = CreateWindowEx( 0, "BUTTON", "Krakow", WS_CHILD | WS_VISIBLE, 50, 150, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzs14 = CreateWindowEx( 0, "BUTTON", "Gniezno", WS_CHILD | WS_VISIBLE, 50, 300, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzs15 = CreateWindowEx( 0, "BUTTON", "Gdansk", WS_CHILD | WS_VISIBLE, 400, 150, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzs16 = CreateWindowEx( 0, "BUTTON", "Wroclaw", WS_CHILD | WS_VISIBLE, 400, 300, 300, 100, hwnd, NULL, hInstance, NULL );

break;
case WM_COMMAND:
if(( HWND ) lParam == odpowiedzs13 )
     MessageBox( hwnd, "To poprawna odpowiedz", "Brawo!", MB_ICONINFORMATION );
if(( HWND ) lParam == odpowiedzs14 )
     MessageBox( hwnd, "To bledna odpowiedz", "Zle!", MB_ICONINFORMATION );
if(( HWND ) lParam == odpowiedzs15 )
     MessageBox( hwnd, "To bledna odpowiedz!", "Zle!", MB_ICONINFORMATION );
if(( HWND ) lParam == odpowiedzs16 )
     MessageBox( hwnd, "To bledna odpowiedz", "Zle!", MB_ICONINFORMATION );
case WM_CLOSE:
{
    ShowWindow(hwnd, SW_HIDE);
}
break;

default:
    return DefWindowProc (hwnd, message, wParam, lParam);
}
return 0;
}

LRESULT CALLBACK ChildWindowProcedure6( HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam )
{
switch (message)
{
case WM_CREATE:
pytanie1 = CreateWindowEx( 0, "BUTTON", "Pytanie 1", WS_CHILD | WS_VISIBLE, 50, 150, 300, 100, hwnd, (HMENU) 12, hInstance, NULL );
pytanie2 = CreateWindowEx( 0, "BUTTON", "Pytanie 2", WS_CHILD | WS_VISIBLE, 50, 300, 300, 100, hwnd, (HMENU) 13, hInstance, NULL );
pytanie3 = CreateWindowEx( 0, "BUTTON", "Pytanie 3", WS_CHILD | WS_VISIBLE, 400, 150, 300, 100, hwnd, (HMENU) 14, hInstance, NULL );
pytanie4 = CreateWindowEx( 0, "BUTTON", "Pytanie 4", WS_CHILD | WS_VISIBLE, 400, 300, 300, 100, hwnd, (HMENU) 15, hInstance, NULL );
    break;

case WM_COMMAND:
switch( wParam )
{
case 12:
    ShowWindow(hwnd8, SW_SHOW);
        break;
case 13:
    ShowWindow(hwnd9, SW_SHOW);
        break;
case 14:
    ShowWindow(hwnd10, SW_SHOW);
        break;
case 15:
    ShowWindow(hwnd11, SW_SHOW);
        break;
}
break;
case WM_CLOSE:
    if (MessageBox(hwnd, "Czy na pewno chcesz zamknac program?", szChildName, MB_YESNO | MB_ICONQUESTION) == IDYES)
{
        ShowWindow(hwnd, SW_HIDE);
}
break;

default:
    return DefWindowProc (hwnd, message, wParam, lParam);
}
return 0;
}

LRESULT CALLBACK ChildWindowProcedure7( HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam )
{
switch (message)
{
case WM_CREATE:
pytanie5 = CreateWindowEx( 0, "STATIC", "Kim by³ Pawel Kukiz przed zostaniem politykiem?", WS_CHILD | WS_VISIBLE, 300, 100, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzo1 = CreateWindowEx( 0, "BUTTON", "Muzykiem", WS_CHILD | WS_VISIBLE, 50, 150, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzo2 = CreateWindowEx( 0, "BUTTON", "Politykiem?", WS_CHILD | WS_VISIBLE, 50, 300, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzo3 = CreateWindowEx( 0, "BUTTON", "Prezenterem telewizyjnym", WS_CHILD | WS_VISIBLE, 400, 150, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzo4 =CreateWindowEx( 0, "BUTTON", "Aktorem", WS_CHILD | WS_VISIBLE, 400, 300, 300, 100, hwnd, NULL, hInstance, NULL );

break;
case WM_COMMAND:
if(( HWND ) lParam == odpowiedzo1)
     MessageBox( hwnd, "To poprawna odpowiedz", "Brawo!", MB_ICONINFORMATION );
if(( HWND ) lParam == odpowiedzo2 )
     MessageBox( hwnd, "To bledna odpowiedz", "Zle!", MB_ICONINFORMATION );
if(( HWND ) lParam == odpowiedzo3 )
     MessageBox( hwnd, "To bledna odpowiedz!", "Zle!", MB_ICONINFORMATION );
if(( HWND ) lParam == odpowiedzo4 )
     MessageBox( hwnd, "To bledna odpowiedz", "Zle!", MB_ICONINFORMATION );
case WM_CLOSE:
{
    ShowWindow(hwnd, SW_HIDE);
}
break;

default:
    return DefWindowProc (hwnd, message, wParam, lParam);
}
return 0;
}
LRESULT CALLBACK ChildWindowProcedure8( HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam )
{
switch (message)
{
case WM_CREATE:
pytanie5 = CreateWindowEx( 0, "STATIC", "Kto namalowa³‚ Damê z £asiczk¹?", WS_CHILD | WS_VISIBLE, 300, 100, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzo5 = CreateWindowEx( 0, "BUTTON", "Van Gogh", WS_CHILD | WS_VISIBLE, 50, 150, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzo6 = CreateWindowEx( 0, "BUTTON", "Da Vinci", WS_CHILD | WS_VISIBLE, 50, 300, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzo7 = CreateWindowEx( 0, "BUTTON", "Da Venci", WS_CHILD | WS_VISIBLE, 400, 150, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzo8 = CreateWindowEx( 0, "BUTTON", "Da Vincie", WS_CHILD | WS_VISIBLE, 400, 300, 300, 100, hwnd, NULL, hInstance, NULL );

break;
case WM_COMMAND:
if(( HWND ) lParam == odpowiedzo5)
     MessageBox( hwnd,  "To bledna odpowiedz!", "Zle!", MB_ICONINFORMATION );
if(( HWND ) lParam == odpowiedzo6 )
     MessageBox( hwnd, "To poprawna odpowiedz", "Brawo!", MB_ICONINFORMATION );
if(( HWND ) lParam == odpowiedzo7 )
     MessageBox( hwnd, "To bledna odpowiedz!", "Zle!", MB_ICONINFORMATION );
if(( HWND ) lParam == odpowiedzo8 )
     MessageBox( hwnd, "To bledna odpowiedz", "Zle!", MB_ICONINFORMATION );
case WM_CLOSE:
{
    ShowWindow(hwnd, SW_HIDE);
}
break;

default:
    return DefWindowProc (hwnd, message, wParam, lParam);
}
return 0;
}

LRESULT CALLBACK ChildWindowProcedure9( HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam )
{
switch (message)
{
case WM_CREATE:
pytanie5 = CreateWindowEx( 0, "STATIC", "Kto wyre¿yserowa³‚  film Pianista?", WS_CHILD | WS_VISIBLE, 300, 100, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzo9 = CreateWindowEx( 0, "BUTTON", "Ridley Scott", WS_CHILD | WS_VISIBLE, 50, 150, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzo10 = CreateWindowEx( 0, "BUTTON", "Harlen Coben", WS_CHILD | WS_VISIBLE, 50, 300, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzo11 = CreateWindowEx( 0, "BUTTON", "Quentin Tarantino", WS_CHILD | WS_VISIBLE, 400, 150, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzo12 = CreateWindowEx( 0, "BUTTON", "Roman Polanski", WS_CHILD | WS_VISIBLE, 400, 300, 300, 100, hwnd, NULL, hInstance, NULL );

break;
case WM_COMMAND:
if(( HWND ) lParam == odpowiedzo9 )
     MessageBox( hwnd, "To bledna odpowiedz!", "Zle!", MB_ICONINFORMATION );
if(( HWND ) lParam == odpowiedzo10)
     MessageBox( hwnd, "To bledna odpowiedz", "Zle!", MB_ICONINFORMATION );
if(( HWND ) lParam == odpowiedzo11 )
     MessageBox( hwnd, "To bledna odpowiedz!", "Zle!", MB_ICONINFORMATION );
if(( HWND ) lParam == odpowiedzo12 )
     MessageBox( hwnd, "To poprawna odpowiedz", "Brawo!", MB_ICONINFORMATION );
case WM_CLOSE:
{
    ShowWindow(hwnd, SW_HIDE);
}
break;

default:
    return DefWindowProc (hwnd, message, wParam, lParam);
}
return 0;
}
LRESULT CALLBACK ChildWindowProcedure10( HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam )
{
switch (message)
{
case WM_CREATE:
pytanie5 = CreateWindowEx( 0, "STATIC", "Kto jest ówczesnym prezydentem USA?", WS_CHILD | WS_VISIBLE, 300, 100, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzo13 = CreateWindowEx( 0, "BUTTON", "Donald Trump", WS_CHILD | WS_VISIBLE, 50, 150, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzo14 = CreateWindowEx( 0, "BUTTON", "Donnald Tramp", WS_CHILD | WS_VISIBLE, 50, 300, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzo15= CreateWindowEx( 0, "BUTTON", "Donald Trampe", WS_CHILD | WS_VISIBLE, 400, 150, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzo16 = CreateWindowEx( 0, "BUTTON", "Donald Tramp", WS_CHILD | WS_VISIBLE, 400, 300, 300, 100, hwnd, NULL, hInstance, NULL );

break;
case WM_COMMAND:
if(( HWND ) lParam == odpowiedzo13 )
     MessageBox( hwnd, "To poprawna odpowiedz", "Brawo!", MB_ICONINFORMATION );
if(( HWND ) lParam == odpowiedzo14)
     MessageBox( hwnd, "To bledna odpowiedz", "Zle!", MB_ICONINFORMATION );
if(( HWND ) lParam == odpowiedzo15 )
     MessageBox( hwnd, "To bledna odpowiedz!", "Zle!", MB_ICONINFORMATION );
if(( HWND ) lParam == odpowiedzo16 )
     MessageBox( hwnd, "To bledna odpowiedz", "Zle!", MB_ICONINFORMATION );
case WM_CLOSE:
{
    ShowWindow(hwnd, SW_HIDE);
}
break;

default:
    return DefWindowProc (hwnd, message, wParam, lParam);
}
return 0;
}

LRESULT CALLBACK ChildWindowProcedure11( HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam )
{
switch (message)
{
case WM_CREATE:
pytanie1 = CreateWindowEx( 0, "BUTTON", "Pytanie 1", WS_CHILD | WS_VISIBLE, 50, 150, 300, 100, hwnd, (HMENU) 16, hInstance, NULL );
pytanie2 = CreateWindowEx( 0, "BUTTON", "Pytanie 2", WS_CHILD | WS_VISIBLE, 50, 300, 300, 100, hwnd, (HMENU) 17, hInstance, NULL );
pytanie3 = CreateWindowEx( 0, "BUTTON", "Pytanie 3", WS_CHILD | WS_VISIBLE, 400, 150, 300, 100, hwnd, (HMENU) 18, hInstance, NULL );
pytanie4 = CreateWindowEx( 0, "BUTTON", "Pytanie 4", WS_CHILD | WS_VISIBLE, 400, 300, 300, 100, hwnd, (HMENU) 19, hInstance, NULL );
    break;

case WM_COMMAND:
switch( wParam )
{
case 16:
    ShowWindow(hwnd13, SW_SHOW);
        break;
case 17:
    ShowWindow(hwnd14, SW_SHOW);
        break;
case 18:
    ShowWindow(hwnd15, SW_SHOW);
        break;
case 19:
    ShowWindow(hwnd16, SW_SHOW);
        break;
}
break;
case WM_CLOSE:
    if (MessageBox(hwnd, "Czy na pewno chcesz zamknac program?", szChildName, MB_YESNO | MB_ICONQUESTION) == IDYES)
{
        ShowWindow(hwnd, SW_HIDE);
}
break;

default:
    return DefWindowProc (hwnd, message, wParam, lParam);
}
return 0;
}

LRESULT CALLBACK ChildWindowProcedure12( HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam )
{
switch (message)
{
case WM_CREATE:
pytanie5 = CreateWindowEx( 0, "STATIC", "Kto piosenkê pt. Enter Sandman?", WS_CHILD | WS_VISIBLE, 300, 100, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzm1 = CreateWindowEx( 0, "BUTTON", "Metallica", WS_CHILD | WS_VISIBLE, 50, 150, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzm2 = CreateWindowEx( 0, "BUTTON", "Red Hot Chili Peppers", WS_CHILD | WS_VISIBLE, 50, 300, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzm3= CreateWindowEx( 0, "BUTTON", "Nirvana", WS_CHILD | WS_VISIBLE, 400, 150, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzm4 = CreateWindowEx( 0, "BUTTON", "Bon Jovi", WS_CHILD | WS_VISIBLE, 400, 300, 300, 100, hwnd, NULL, hInstance, NULL );

break;
case WM_COMMAND:
if(( HWND ) lParam == odpowiedzm1 )
     MessageBox( hwnd, "To poprawna odpowiedz", "Brawo!", MB_ICONINFORMATION );
if(( HWND ) lParam == odpowiedzm2 )
     MessageBox( hwnd, "To bledna odpowiedz", "Zle!", MB_ICONINFORMATION );
if(( HWND ) lParam == odpowiedzm3 )
     MessageBox( hwnd, "To bledna odpowiedz!", "Zle!", MB_ICONINFORMATION );
if(( HWND ) lParam == odpowiedzm4 )
     MessageBox( hwnd, "To bledna odpowiedz", "Zle!", MB_ICONINFORMATION );
case WM_CLOSE:
{
    ShowWindow(hwnd, SW_HIDE);
}
break;

default:
    return DefWindowProc (hwnd, message, wParam, lParam);
}
return 0;
}
LRESULT CALLBACK ChildWindowProcedure13( HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam )
{
switch (message)
{
case WM_CREATE:
pytanie5 = CreateWindowEx( 0, "STATIC", "W jakim zespole œpiewa³a Doda?", WS_CHILD | WS_VISIBLE, 300, 100, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzm5 = CreateWindowEx( 0, "BUTTON", "Blue Cafe", WS_CHILD | WS_VISIBLE, 50, 150, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzm6 = CreateWindowEx( 0, "BUTTON", "Virgin", WS_CHILD | WS_VISIBLE, 50, 300, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzm7 = CreateWindowEx( 0, "BUTTON", "HappySad", WS_CHILD | WS_VISIBLE, 400, 150, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzm8 = CreateWindowEx( 0, "BUTTON", "Bajm", WS_CHILD | WS_VISIBLE, 400, 300, 300, 100, hwnd, NULL, hInstance, NULL );

break;
case WM_COMMAND:
if(( HWND ) lParam == odpowiedzm5 )
     MessageBox( hwnd,  "To bledna odpowiedz!", "Zle!", MB_ICONINFORMATION );
if(( HWND ) lParam == odpowiedzm6)
     MessageBox( hwnd, "To poprawna odpowiedz", "Brawo!", MB_ICONINFORMATION );
if(( HWND ) lParam == odpowiedzm7 )
     MessageBox( hwnd, "To bledna odpowiedz!", "Zle!", MB_ICONINFORMATION );
if(( HWND ) lParam == odpowiedzm8 )
     MessageBox( hwnd, "To bledna odpowiedz", "Zle!", MB_ICONINFORMATION );
case WM_CLOSE:
{
    ShowWindow(hwnd, SW_HIDE);
}
break;

default:
    return DefWindowProc (hwnd, message, wParam, lParam);
}
return 0;
}

LRESULT CALLBACK ChildWindowProcedure14( HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam )
{
switch (message)
{
case WM_CREATE:
pytanie5 = CreateWindowEx( 0, "STATIC", "Kto nagra³ piosenkê mój przyjacielu?", WS_CHILD | WS_VISIBLE, 300, 100, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzm9 = CreateWindowEx( 0, "BUTTON", "CzesÅ‚aw Niemen", WS_CHILD | WS_VISIBLE, 50, 150, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzm10 = CreateWindowEx( 0, "BUTTON", "Maryla Rodowicz", WS_CHILD | WS_VISIBLE, 50, 300, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzm11= CreateWindowEx( 0, "BUTTON", "Manaam", WS_CHILD | WS_VISIBLE, 400, 150, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzm12= CreateWindowEx( 0, "BUTTON", "Krzysztof Krawczyk", WS_CHILD | WS_VISIBLE, 400, 300, 300, 100, hwnd, NULL, hInstance, NULL );

break;
case WM_COMMAND:
if(( HWND ) lParam == odpowiedzm9 )
     MessageBox( hwnd, "To bledna odpowiedz!", "Zle!", MB_ICONINFORMATION );
if(( HWND ) lParam == odpowiedzm10)
     MessageBox( hwnd, "To bledna odpowiedz", "Zle!", MB_ICONINFORMATION );
if(( HWND ) lParam == odpowiedzm11 )
     MessageBox( hwnd, "To bledna odpowiedz!", "Zle!", MB_ICONINFORMATION );
if(( HWND ) lParam ==odpowiedzm12 )
     MessageBox( hwnd, "To poprawna odpowiedz", "Brawo!", MB_ICONINFORMATION );
case WM_CLOSE:
{
    ShowWindow(hwnd, SW_HIDE);
}
break;

default:
    return DefWindowProc (hwnd, message, wParam, lParam);
}
return 0;
}
LRESULT CALLBACK ChildWindowProcedure15( HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam )
{
switch (message)
{
case WM_CREATE:
pytanie5 = CreateWindowEx( 0, "STATIC", "W jakim zespole œpiewa³a Kora?", WS_CHILD | WS_VISIBLE, 300, 100, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzm13 = CreateWindowEx( 0, "BUTTON", "Maanam", WS_CHILD | WS_VISIBLE, 50, 150, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzm14 = CreateWindowEx( 0, "BUTTON", "Manam", WS_CHILD | WS_VISIBLE, 50, 300, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzm15 = CreateWindowEx( 0, "BUTTON", "Manaam", WS_CHILD | WS_VISIBLE, 400, 150, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzm16 = CreateWindowEx( 0, "BUTTON", "Manaame", WS_CHILD | WS_VISIBLE, 400, 300, 300, 100, hwnd, NULL, hInstance, NULL );

break;
case WM_COMMAND:
if(( HWND ) lParam == odpowiedzm13)
     MessageBox( hwnd, "To poprawna odpowiedz", "Brawo!", MB_ICONINFORMATION );
if(( HWND ) lParam == odpowiedzm14 )
     MessageBox( hwnd, "To bledna odpowiedz", "Zle!", MB_ICONINFORMATION );
if(( HWND ) lParam == odpowiedzm15 )
     MessageBox( hwnd, "To bledna odpowiedz!", "Zle!", MB_ICONINFORMATION );
if(( HWND ) lParam == odpowiedzm16 )
     MessageBox( hwnd, "To bledna odpowiedz", "Zle!", MB_ICONINFORMATION );
case WM_CLOSE:
{
    ShowWindow(hwnd, SW_HIDE);
}
break;

default:
    return DefWindowProc (hwnd, message, wParam, lParam);
}
return 0;
}

LRESULT CALLBACK ChildWindowProcedure16( HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam )
{
switch (message)
{
case WM_CREATE:
pytanie1 = CreateWindowEx( 0, "BUTTON", "Pytanie 1", WS_CHILD | WS_VISIBLE, 50, 150, 300, 100, hwnd, (HMENU) 20, hInstance, NULL );
pytanie2 = CreateWindowEx( 0, "BUTTON", "Pytanie 2", WS_CHILD | WS_VISIBLE, 50, 300, 300, 100, hwnd, (HMENU) 21, hInstance, NULL );
pytanie3 = CreateWindowEx( 0, "BUTTON", "Pytanie 3", WS_CHILD | WS_VISIBLE, 400, 150, 300, 100, hwnd, (HMENU) 22, hInstance, NULL );
pytanie4 = CreateWindowEx( 0, "BUTTON", "Pytanie 4", WS_CHILD | WS_VISIBLE, 400, 300, 300, 100, hwnd, (HMENU) 23, hInstance, NULL );
    break;

case WM_COMMAND:
switch( wParam )
{
case 20:
    ShowWindow(hwnd18, SW_SHOW);
        break;
case 21:
    ShowWindow(hwnd19, SW_SHOW);
        break;
case 22:
    ShowWindow(hwnd20, SW_SHOW);
        break;
case 23:
    ShowWindow(hwnd21, SW_SHOW);
        break;
}
break;
case WM_CLOSE:
    if (MessageBox(hwnd, "Czy na pewno chcesz zamknac program?", szChildName, MB_YESNO | MB_ICONQUESTION) == IDYES)
{
        ShowWindow(hwnd, SW_HIDE);
}
break;

default:
    return DefWindowProc (hwnd, message, wParam, lParam);
}
return 0;
}

LRESULT CALLBACK ChildWindowProcedure17( HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam )
{
switch (message)
{
case WM_CREATE:
pytanie5 = CreateWindowEx( 0, "STATIC", "W jakim filmie NIE zagra³ Cezary Pazura?", WS_CHILD | WS_VISIBLE, 300, 100, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzf1 = CreateWindowEx( 0, "BUTTON", "Seksmisja", WS_CHILD | WS_VISIBLE, 50, 150, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzf2  = CreateWindowEx( 0, "BUTTON", "Kiler", WS_CHILD | WS_VISIBLE, 50, 300, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzf3  = CreateWindowEx( 0, "BUTTON", "Kariera Nikosia Dyzmy", WS_CHILD | WS_VISIBLE, 400, 150, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzf4 = CreateWindowEx( 0, "BUTTON", "Nic Œmiesznego", WS_CHILD | WS_VISIBLE, 400, 300, 300, 100, hwnd, NULL, hInstance, NULL );

break;
case WM_COMMAND:
if(( HWND ) lParam == odpowiedzf1  )
     MessageBox( hwnd, "To poprawna odpowiedz", "Brawo!", MB_ICONINFORMATION );
if(( HWND ) lParam == odpowiedzf2  )
     MessageBox( hwnd, "To bledna odpowiedz", "Zle!", MB_ICONINFORMATION );
if(( HWND ) lParam == odpowiedzf3  )
     MessageBox( hwnd, "To bledna odpowiedz!", "Zle!", MB_ICONINFORMATION );
if(( HWND ) lParam == odpowiedzf4  )
     MessageBox( hwnd, "To bledna odpowiedz", "Zle!", MB_ICONINFORMATION );
case WM_CLOSE:
{
    ShowWindow(hwnd, SW_HIDE);
}
break;

default:
    return DefWindowProc (hwnd, message, wParam, lParam);
}
return 0;
}
LRESULT CALLBACK ChildWindowProcedure18( HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam )
{
switch (message)
{
case WM_CREATE:
pytanie5 = CreateWindowEx( 0, "STATIC", "Kto zagra³ g³ówn¹ rolê w filmie Szklana Pu³apka", WS_CHILD | WS_VISIBLE, 300, 100, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzf5  = CreateWindowEx( 0, "BUTTON", "Mel Gibson", WS_CHILD | WS_VISIBLE, 50, 150, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzf6  = CreateWindowEx( 0, "BUTTON", "Bruce Willis", WS_CHILD | WS_VISIBLE, 50, 300, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzf7  = CreateWindowEx( 0, "BUTTON", "Bogus³aw Linda", WS_CHILD | WS_VISIBLE, 400, 150, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzf8  = CreateWindowEx( 0, "BUTTON", "Steven Seagal", WS_CHILD | WS_VISIBLE, 400, 300, 300, 100, hwnd, NULL, hInstance, NULL );

break;
case WM_COMMAND:
if(( HWND ) lParam == odpowiedzf5  )
     MessageBox( hwnd,  "To bledna odpowiedz!", "Zle!", MB_ICONINFORMATION );
if(( HWND ) lParam == odpowiedzf6 )
     MessageBox( hwnd, "To poprawna odpowiedz", "Brawo!", MB_ICONINFORMATION );
if(( HWND ) lParam == odpowiedzf7 )
     MessageBox( hwnd, "To bledna odpowiedz!", "Zle!", MB_ICONINFORMATION );
if(( HWND ) lParam == odpowiedzf8  )
     MessageBox( hwnd, "To bledna odpowiedz", "Zle!", MB_ICONINFORMATION );
case WM_CLOSE:
{
    ShowWindow(hwnd, SW_HIDE);
}
break;

default:
    return DefWindowProc (hwnd, message, wParam, lParam);
}
return 0;
}

LRESULT CALLBACK ChildWindowProcedure19( HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam )
{
switch (message)
{
case WM_CREATE:
pytanie5 = CreateWindowEx( 0, "STATIC", "Jaki film opowiada o historii Bilbo Baginsa?", WS_CHILD | WS_VISIBLE, 300, 100, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzf9  = CreateWindowEx( 0, "BUTTON", "Harry Potter", WS_CHILD | WS_VISIBLE, 50, 150, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzf10  = CreateWindowEx( 0, "BUTTON", "Igrzyska Œmierci", WS_CHILD | WS_VISIBLE, 50, 300, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzf11  = CreateWindowEx( 0, "BUTTON", "Hobbit", WS_CHILD | WS_VISIBLE, 400, 150, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzf12  = CreateWindowEx( 0, "BUTTON", "W³adca Pierœcieni", WS_CHILD | WS_VISIBLE, 400, 300, 300, 100, hwnd, NULL, hInstance, NULL );

break;
case WM_COMMAND:
if(( HWND ) lParam == odpowiedzf9 )
     MessageBox( hwnd, "To bledna odpowiedz!", "Zle!", MB_ICONINFORMATION );
if(( HWND ) lParam == odpowiedzf10)
     MessageBox( hwnd, "To bledna odpowiedz", "Zle!", MB_ICONINFORMATION );
if(( HWND ) lParam == odpowiedzf11 )
     MessageBox( hwnd, "To bledna odpowiedz!", "Zle!", MB_ICONINFORMATION );
if(( HWND ) lParam == odpowiedzf12 )
     MessageBox( hwnd, "To poprawna odpowiedz", "Brawo!", MB_ICONINFORMATION );
case WM_CLOSE:
{
    ShowWindow(hwnd, SW_HIDE);
}
break;

default:
    return DefWindowProc (hwnd, message, wParam, lParam);
}
return 0;
}
LRESULT CALLBACK ChildWindowProcedure20( HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam )
{
switch (message)
{
case WM_CREATE:
pytanie5 = CreateWindowEx( 0, "STATIC", "W którym filmie NIE zagra³‚ Bogus³aw Linda?", WS_CHILD | WS_VISIBLE, 300, 100, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzf13 = CreateWindowEx( 0, "BUTTON", "Kiler", WS_CHILD | WS_VISIBLE, 50, 150, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzf14 = CreateWindowEx( 0, "BUTTON", "Sara", WS_CHILD | WS_VISIBLE, 50, 300, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzf15 = CreateWindowEx( 0, "BUTTON", "Powidoki", WS_CHILD | WS_VISIBLE, 400, 150, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzf16 = CreateWindowEx( 0, "BUTTON", "Sezon na leszcza", WS_CHILD | WS_VISIBLE, 400, 300, 300, 100, hwnd, NULL, hInstance, NULL );

break;
case WM_COMMAND:
if(( HWND ) lParam == odpowiedzf13)
     MessageBox( hwnd, "To poprawna odpowiedz", "Brawo!", MB_ICONINFORMATION );
if(( HWND ) lParam == odpowiedzf14 )
     MessageBox( hwnd, "To bledna odpowiedz", "Zle!", MB_ICONINFORMATION );
if(( HWND ) lParam == odpowiedzf15 )
     MessageBox( hwnd, "To bledna odpowiedz!", "Zle!", MB_ICONINFORMATION );
if(( HWND ) lParam == odpowiedzf16 )
     MessageBox( hwnd, "To bledna odpowiedz", "Zle!", MB_ICONINFORMATION );
case WM_CLOSE:
{
    ShowWindow(hwnd, SW_HIDE);
}
break;

default:
    return DefWindowProc (hwnd, message, wParam, lParam);
}
return 0;
}

LRESULT CALLBACK ChildWindowProcedure21( HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam )
{
switch (message)
{
case WM_CREATE:
pytanie1 = CreateWindowEx( 0, "BUTTON", "Pytanie 1", WS_CHILD | WS_VISIBLE, 50, 150, 300, 100, hwnd, (HMENU) 24, hInstance, NULL );
pytanie2 = CreateWindowEx( 0, "BUTTON", "Pytanie 2", WS_CHILD | WS_VISIBLE, 50, 300, 300, 100, hwnd, (HMENU) 25, hInstance, NULL );
pytanie3 = CreateWindowEx( 0, "BUTTON", "Pytanie 3", WS_CHILD | WS_VISIBLE, 400, 150, 300, 100, hwnd, (HMENU) 26, hInstance, NULL );
pytanie4 = CreateWindowEx( 0, "BUTTON", "Pytanie 4", WS_CHILD | WS_VISIBLE, 400, 300, 300, 100, hwnd, (HMENU) 27, hInstance, NULL );
    break;

case WM_COMMAND:
switch( wParam )
{
case 24:
    ShowWindow(hwnd23, SW_SHOW);
        break;
case 25:
    ShowWindow(hwnd24, SW_SHOW);
        break;
case 26:
    ShowWindow(hwnd25, SW_SHOW);
        break;
case 27:
    ShowWindow(hwnd26, SW_SHOW);
        break;
}
break;
case WM_CLOSE:
    if (MessageBox(hwnd, "Czy na pewno chcesz zamknac program?", szChildName, MB_YESNO | MB_ICONQUESTION) == IDYES)
{
        ShowWindow(hwnd, SW_HIDE);
}
break;

default:
    return DefWindowProc (hwnd, message, wParam, lParam);
}
return 0;
}

LRESULT CALLBACK ChildWindowProcedure22( HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam )
{
switch (message)
{
case WM_CREATE:
pytanie5 = CreateWindowEx( 0, "STATIC", "Jaki jêzyk obowi¹zuje w Brazylii?", WS_CHILD | WS_VISIBLE, 300, 100, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzj1 = CreateWindowEx( 0, "BUTTON", "Portugalski", WS_CHILD | WS_VISIBLE, 50, 150, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzj2 = CreateWindowEx( 0, "BUTTON", "Angielski", WS_CHILD | WS_VISIBLE, 50, 300, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzj3 = CreateWindowEx( 0, "BUTTON", "£aciñski", WS_CHILD | WS_VISIBLE, 400, 150, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzj4 = CreateWindowEx( 0, "BUTTON", "Brazylijski", WS_CHILD | WS_VISIBLE, 400, 300, 300, 100, hwnd, NULL, hInstance, NULL );

break;
case WM_COMMAND:
if(( HWND ) lParam == odpowiedzj1 )
     MessageBox( hwnd, "To poprawna odpowiedz", "Brawo!", MB_ICONINFORMATION );
if(( HWND ) lParam == odpowiedzj2)
     MessageBox( hwnd, "To bledna odpowiedz", "Zle!", MB_ICONINFORMATION );
if(( HWND ) lParam == odpowiedzj3)
     MessageBox( hwnd, "To bledna odpowiedz!", "Zle!", MB_ICONINFORMATION );
if(( HWND ) lParam == odpowiedzj4 )
     MessageBox( hwnd, "To bledna odpowiedz", "Zle!", MB_ICONINFORMATION );
case WM_CLOSE:
{
    ShowWindow(hwnd, SW_HIDE);
}
break;

default:
    return DefWindowProc (hwnd, message, wParam, lParam);
}
return 0;
}
LRESULT CALLBACK ChildWindowProcedure23( HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam )
{
switch (message)
{
case WM_CREATE:
pytanie5 = CreateWindowEx( 0, "STATIC", "Jaki jêzyk obowi¹zuje w Indiach?", WS_CHILD | WS_VISIBLE, 300, 100, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzj5 = CreateWindowEx( 0, "BUTTON", "Suahili", WS_CHILD | WS_VISIBLE, 50, 150, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzj6 = CreateWindowEx( 0, "BUTTON", "Hindi", WS_CHILD | WS_VISIBLE, 50, 300, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzj7 = CreateWindowEx( 0, "BUTTON", "Indonezyjski", WS_CHILD | WS_VISIBLE, 400, 150, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzj8 = CreateWindowEx( 0, "BUTTON", "£aciñski", WS_CHILD | WS_VISIBLE, 400, 300, 300, 100, hwnd, NULL, hInstance, NULL );

break;
case WM_COMMAND:
if(( HWND ) lParam == odpowiedzj5 )
     MessageBox( hwnd,  "To bledna odpowiedz!", "Zle!", MB_ICONINFORMATION );
if(( HWND ) lParam == odpowiedzj6 )
     MessageBox( hwnd, "To poprawna odpowiedz", "Brawo!", MB_ICONINFORMATION );
if(( HWND ) lParam == odpowiedzj7 )
     MessageBox( hwnd, "To bledna odpowiedz!", "Zle!", MB_ICONINFORMATION );
if(( HWND ) lParam == odpowiedzj8 )
     MessageBox( hwnd, "To bledna odpowiedz", "Zle!", MB_ICONINFORMATION );
case WM_CLOSE:
{
    ShowWindow(hwnd, SW_HIDE);
}
break;

default:
    return DefWindowProc (hwnd, message, wParam, lParam);
}
return 0;
}

LRESULT CALLBACK ChildWindowProcedure24( HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam )
{
switch (message)
{
case WM_CREATE:
pytanie5 = CreateWindowEx( 0, "STATIC", "Jaki jêzyk obowi¹zuje  na Grenlandii?", WS_CHILD | WS_VISIBLE, 300, 100, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzj9= CreateWindowEx( 0, "BUTTON", "Angielski", WS_CHILD | WS_VISIBLE, 50, 150, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzj10 = CreateWindowEx( 0, "BUTTON", "Holenderski", WS_CHILD | WS_VISIBLE, 50, 300, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzj11 = CreateWindowEx( 0, "BUTTON", "Niemiecki", WS_CHILD | WS_VISIBLE, 400, 150, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzj12 = CreateWindowEx( 0, "BUTTON", "Duñski", WS_CHILD | WS_VISIBLE, 400, 300, 300, 100, hwnd, NULL, hInstance, NULL );

break;
case WM_COMMAND:
if(( HWND ) lParam == odpowiedzj9 )
     MessageBox( hwnd, "To bledna odpowiedz!", "Zle!", MB_ICONINFORMATION );
if(( HWND ) lParam == odpowiedzj10 )
     MessageBox( hwnd, "To bledna odpowiedz", "Zle!", MB_ICONINFORMATION );
if(( HWND ) lParam == odpowiedzj11 )
     MessageBox( hwnd, "To bledna odpowiedz!", "Zle!", MB_ICONINFORMATION );
if(( HWND ) lParam == odpowiedzj12 )
     MessageBox( hwnd, "To poprawna odpowiedz", "Brawo!", MB_ICONINFORMATION );
case WM_CLOSE:
{
    ShowWindow(hwnd, SW_HIDE);
}
break;

default:
    return DefWindowProc (hwnd, message, wParam, lParam);
}
return 0;
}
LRESULT CALLBACK ChildWindowProcedure25( HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam )
{
switch (message)
{
case WM_CREATE:
pytanie5 = CreateWindowEx( 0, "STATIC", "Jaki jêzyk obowi¹zuje w Australii?", WS_CHILD | WS_VISIBLE, 300, 100, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzj13 = CreateWindowEx( 0, "BUTTON", "Angielski", WS_CHILD | WS_VISIBLE, 50, 150, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzj14 = CreateWindowEx( 0, "BUTTON", "Australijski", WS_CHILD | WS_VISIBLE, 50, 300, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzj15 = CreateWindowEx( 0, "BUTTON", "Austriacki", WS_CHILD | WS_VISIBLE, 400, 150, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzj16 = CreateWindowEx( 0, "BUTTON", "Niemiecki", WS_CHILD | WS_VISIBLE, 400, 300, 300, 100, hwnd, NULL, hInstance, NULL );

break;
case WM_COMMAND:
if(( HWND ) lParam == odpowiedzj13 )
     MessageBox( hwnd, "To poprawna odpowiedz", "Brawo!", MB_ICONINFORMATION );
if(( HWND ) lParam == odpowiedzj14)
     MessageBox( hwnd, "To bledna odpowiedz", "Zle!", MB_ICONINFORMATION );
if(( HWND ) lParam == odpowiedzj15 )
     MessageBox( hwnd, "To bledna odpowiedz!", "Zle!", MB_ICONINFORMATION );
if(( HWND ) lParam == odpowiedzj16 )
     MessageBox( hwnd, "To bledna odpowiedz", "Zle!", MB_ICONINFORMATION );
case WM_CLOSE:
{
    ShowWindow(hwnd, SW_HIDE);
}
break;

default:
    return DefWindowProc (hwnd, message, wParam, lParam);
}
return 0;
}

LRESULT CALLBACK ChildWindowProcedure26( HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam )
{
switch (message)
{
case WM_CREATE:
pytanie1 = CreateWindowEx( 0, "BUTTON", "Pytanie 1", WS_CHILD | WS_VISIBLE, 50, 150, 300, 100, hwnd, (HMENU) 28, hInstance, NULL );
pytanie2 = CreateWindowEx( 0, "BUTTON", "Pytanie 2", WS_CHILD | WS_VISIBLE, 50, 300, 300, 100, hwnd, (HMENU) 29, hInstance, NULL );
pytanie3 = CreateWindowEx( 0, "BUTTON", "Pytanie 3", WS_CHILD | WS_VISIBLE, 400, 150, 300, 100, hwnd, (HMENU) 30, hInstance, NULL );
pytanie4 = CreateWindowEx( 0, "BUTTON", "Pytanie 4", WS_CHILD | WS_VISIBLE, 400, 300, 300, 100, hwnd, (HMENU) 31, hInstance, NULL );
    break;

case WM_COMMAND:
switch( wParam )
{
case 28:
    ShowWindow(hwnd28, SW_SHOW);
        break;
case 29:
    ShowWindow(hwnd29, SW_SHOW);
        break;
case 30:
    ShowWindow(hwnd30, SW_SHOW);
        break;
case 31:
    ShowWindow(hwnd31, SW_SHOW);
        break;
}
break;
case WM_CLOSE:
    if (MessageBox(hwnd, "Czy na pewno chcesz zamknac program?", szChildName, MB_YESNO | MB_ICONQUESTION) == IDYES)
{
        ShowWindow(hwnd, SW_HIDE);
}
break;

default:
    return DefWindowProc (hwnd, message, wParam, lParam);
}
return 0;
}

LRESULT CALLBACK ChildWindowProcedure27( HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam )
{
switch (message)
{
case WM_CREATE:
pytanie5 = CreateWindowEx( 0, "STATIC", "Jaki sport uprawia Hubert Hurkacz?", WS_CHILD | WS_VISIBLE, 300, 100, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzsp1 = CreateWindowEx( 0, "BUTTON", "Tenis ", WS_CHILD | WS_VISIBLE, 50, 150, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzsp2= CreateWindowEx( 0, "BUTTON", "¯u¿el", WS_CHILD | WS_VISIBLE, 50, 300, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzsp3 = CreateWindowEx( 0, "BUTTON", "Siatkówka", WS_CHILD | WS_VISIBLE, 400, 150, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzsp4= CreateWindowEx( 0, "BUTTON", "Pi³ka no¿na", WS_CHILD | WS_VISIBLE, 400, 300, 300, 100, hwnd, NULL, hInstance, NULL );

break;
case WM_COMMAND:
if(( HWND ) lParam == odpowiedzsp1)
     MessageBox( hwnd, "To poprawna odpowiedz", "Brawo!", MB_ICONINFORMATION );
if(( HWND ) lParam == odpowiedzsp2 )
     MessageBox( hwnd, "To bledna odpowiedz", "Zle!", MB_ICONINFORMATION );
if(( HWND ) lParam == odpowiedzsp3 )
     MessageBox( hwnd, "To bledna odpowiedz!", "Zle!", MB_ICONINFORMATION );
if(( HWND ) lParam == odpowiedzsp4 )
     MessageBox( hwnd, "To bledna odpowiedz", "Zle!", MB_ICONINFORMATION );
case WM_CLOSE:
{
    ShowWindow(hwnd, SW_HIDE);
}
break;

default:
    return DefWindowProc (hwnd, message, wParam, lParam);
}
return 0;
}
LRESULT CALLBACK ChildWindowProcedure28( HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam )
{
switch (message)
{
case WM_CREATE:
pytanie5 = CreateWindowEx( 0, "STATIC", "W jakim klubie gra Marcin Gortat?", WS_CHILD | WS_VISIBLE, 300, 100, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzsp5 = CreateWindowEx( 0, "BUTTON", "Washington Wizards", WS_CHILD | WS_VISIBLE, 50, 150, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzsp6 = CreateWindowEx( 0, "BUTTON", "LA CLippers", WS_CHILD | WS_VISIBLE, 50, 300, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzsp7 = CreateWindowEx( 0, "BUTTON", "Miami Heats", WS_CHILD | WS_VISIBLE, 400, 150, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzsp8 = CreateWindowEx( 0, "BUTTON", "Boston Celtics", WS_CHILD | WS_VISIBLE, 400, 300, 300, 100, hwnd, NULL, hInstance, NULL );

break;
case WM_COMMAND:
if(( HWND ) lParam == odpowiedzsp5 )
     MessageBox( hwnd,  "To bledna odpowiedz!", "Zle!", MB_ICONINFORMATION );
if(( HWND ) lParam == odpowiedzsp6 )
     MessageBox( hwnd, "To poprawna odpowiedz", "Brawo!", MB_ICONINFORMATION );
if(( HWND ) lParam == odpowiedzsp7 )
     MessageBox( hwnd, "To bledna odpowiedz!", "Zle!", MB_ICONINFORMATION );
if(( HWND ) lParam == odpowiedzsp8 )
     MessageBox( hwnd, "To bledna odpowiedz", "Zle!", MB_ICONINFORMATION );
case WM_CLOSE:
{
    ShowWindow(hwnd, SW_HIDE);
}
break;

default:
    return DefWindowProc (hwnd, message, wParam, lParam);
}
return 0;
}

LRESULT CALLBACK ChildWindowProcedure29( HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam )
{
switch (message)
{
case WM_CREATE:
pytanie5 = CreateWindowEx( 0, "STATIC", "W jakim klubie gra Krzystof Pi¹tek", WS_CHILD | WS_VISIBLE, 300, 100, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzsp9 = CreateWindowEx( 0, "BUTTON", "Legia Warszawa", WS_CHILD | WS_VISIBLE, 50, 150, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzsp10 = CreateWindowEx( 0, "BUTTON", "Udinese", WS_CHILD | WS_VISIBLE, 50, 300, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzsp11 = CreateWindowEx( 0, "BUTTON", "Cracovia", WS_CHILD | WS_VISIBLE, 400, 150, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzsp12 = CreateWindowEx( 0, "BUTTON", "Genoa", WS_CHILD | WS_VISIBLE, 400, 300, 300, 100, hwnd, NULL, hInstance, NULL );

break;
case WM_COMMAND:
if(( HWND ) lParam == odpowiedzsp9 )
     MessageBox( hwnd, "To bledna odpowiedz!", "Zle!", MB_ICONINFORMATION );
if(( HWND ) lParam == odpowiedzsp10 )
     MessageBox( hwnd, "To bledna odpowiedz", "Zle!", MB_ICONINFORMATION );
if(( HWND ) lParam == odpowiedzsp11 )
     MessageBox( hwnd, "To bledna odpowiedz!", "Zle!", MB_ICONINFORMATION );
if(( HWND ) lParam == odpowiedzsp12 )
     MessageBox( hwnd, "To poprawna odpowiedz", "Brawo!", MB_ICONINFORMATION );
case WM_CLOSE:
{
    ShowWindow(hwnd, SW_HIDE);
}
break;

default:
    return DefWindowProc (hwnd, message, wParam, lParam);
}
return 0;
}
LRESULT CALLBACK ChildWindowProcedure30( HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam )
{
switch (message)
{
case WM_CREATE:

pytanie5 = CreateWindowEx( 0, "STATIC", "Z jakiego miasta pochodzi polski klub siatkarski SKRA", WS_CHILD | WS_VISIBLE, 300, 100, 300, 100, hwnd, NULL, hInstance, NULL );

odpowiedzsp13 = CreateWindowEx( 0, "BUTTON", TEXT("Be³chatów"), WS_CHILD | WS_VISIBLE, 50, 150, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzsp14 = CreateWindowEx( 0, "BUTTON", "Radom", WS_CHILD | WS_VISIBLE, 50, 300, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzsp15 = CreateWindowEx( 0, "BUTTON", "Wroc³aw", WS_CHILD | WS_VISIBLE, 400, 150, 300, 100, hwnd, NULL, hInstance, NULL );
odpowiedzsp16 = CreateWindowEx( 0, "BUTTON", "Warszawa", WS_CHILD | WS_VISIBLE, 400, 300, 300, 100, hwnd, NULL, hInstance, NULL );

break;
case WM_COMMAND:



if(( HWND ) lParam == odpowiedzsp13 )
     MessageBox( hwnd, "To poprawna odpowiedz", "Brawo!", MB_ICONINFORMATION );
if(( HWND ) lParam == odpowiedzsp14)
     MessageBox( hwnd, "To bledna odpowiedz", "Zle!", MB_ICONINFORMATION );
if(( HWND ) lParam == odpowiedzsp15)
     MessageBox( hwnd, "To bledna odpowiedz!", "Zle!", MB_ICONINFORMATION );
if(( HWND ) lParam == odpowiedzsp16 )
     MessageBox( hwnd, "To bledna odpowiedz", "Zle!", MB_ICONINFORMATION );
case WM_CLOSE:
{
    ShowWindow(hwnd, SW_HIDE);
}
break;

default:
    return DefWindowProc (hwnd, message, wParam, lParam);
}
return 0;
}
