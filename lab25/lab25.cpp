// lab25.cpp : Определяет точку входа для приложения.
//

#include "framework.h"
#include "lab25.h"

#define MAX_LOADSTRING 100

// Глобальные переменные:
HINSTANCE hInst;                                // текущий экземпляр
WCHAR szTitle[MAX_LOADSTRING];                  // Текст строки заголовка
WCHAR szWindowClass[MAX_LOADSTRING];            // имя класса главного окна

// Отправить объявления функций, включенных в этот модуль кода:
ATOM                MyRegisterClass(HINSTANCE hInstance);
BOOL                InitInstance(HINSTANCE, int);
LRESULT CALLBACK    WndProc(HWND, UINT, WPARAM, LPARAM);
INT_PTR CALLBACK    About(HWND, UINT, WPARAM, LPARAM);

int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
                     _In_opt_ HINSTANCE hPrevInstance,
                     _In_ LPWSTR    lpCmdLine,
                     _In_ int       nCmdShow)
{
    UNREFERENCED_PARAMETER(hPrevInstance);
    UNREFERENCED_PARAMETER(lpCmdLine);

    // TODO: Разместите код здесь.

    // Инициализация глобальных строк
    LoadStringW(hInstance, IDS_APP_TITLE, szTitle, MAX_LOADSTRING);
    LoadStringW(hInstance, IDC_LAB25, szWindowClass, MAX_LOADSTRING);
    MyRegisterClass(hInstance);

    // Выполнить инициализацию приложения:
    if (!InitInstance (hInstance, nCmdShow))
    {
        return FALSE;
    }

    HACCEL hAccelTable = LoadAccelerators(hInstance, MAKEINTRESOURCE(IDC_LAB25));

    MSG msg;

    // Цикл основного сообщения:
    while (GetMessage(&msg, nullptr, 0, 0))
    {
        if (!TranslateAccelerator(msg.hwnd, hAccelTable, &msg))
        {
            TranslateMessage(&msg);
            DispatchMessage(&msg);
        }
    }

    return (int) msg.wParam;
}



//
//  ФУНКЦИЯ: MyRegisterClass()
//
//  ЦЕЛЬ: Регистрирует класс окна.
//
ATOM MyRegisterClass(HINSTANCE hInstance)
{
    WNDCLASSEXW wcex;

    wcex.cbSize = sizeof(WNDCLASSEX);

    wcex.style          = CS_HREDRAW | CS_VREDRAW;
    wcex.lpfnWndProc    = WndProc;
    wcex.cbClsExtra     = 0;
    wcex.cbWndExtra     = 0;
    wcex.hInstance      = hInstance;
    wcex.hIcon          = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_LAB25));
    wcex.hCursor        = LoadCursor(nullptr, IDC_ARROW);
    wcex.hbrBackground  = (HBRUSH)(COLOR_WINDOW+1);
    wcex.lpszMenuName   = MAKEINTRESOURCEW(IDC_LAB25);
    wcex.lpszClassName  = szWindowClass;
    wcex.hIconSm        = LoadIcon(wcex.hInstance, MAKEINTRESOURCE(IDI_SMALL));

    return RegisterClassExW(&wcex);
}

//
//   ФУНКЦИЯ: InitInstance(HINSTANCE, int)
//
//   ЦЕЛЬ: Сохраняет маркер экземпляра и создает главное окно
//
//   КОММЕНТАРИИ:
//
//        В этой функции маркер экземпляра сохраняется в глобальной переменной, а также
//        создается и выводится главное окно программы.
//
BOOL InitInstance(HINSTANCE hInstance, int nCmdShow)
{
   hInst = hInstance; // Сохранить маркер экземпляра в глобальной переменной

   HWND hWnd = CreateWindowW(szWindowClass, szTitle, WS_OVERLAPPEDWINDOW,
      CW_USEDEFAULT, 0, CW_USEDEFAULT, 0, nullptr, nullptr, hInstance, nullptr);

   if (!hWnd)
   {
      return FALSE;
   }

   ShowWindow(hWnd, nCmdShow);
   UpdateWindow(hWnd);

   return TRUE;
}

//
//  ФУНКЦИЯ: WndProc(HWND, UINT, WPARAM, LPARAM)
//
//  ЦЕЛЬ: Обрабатывает сообщения в главном окне.
//
//  WM_COMMAND  - обработать меню приложения
//  WM_PAINT    - Отрисовка главного окна
//  WM_DESTROY  - отправить сообщение о выходе и вернуться
//
//


void Triangle(HDC hdc, int cx, int cy, int size) {
    HPEN hPen;
    hPen = CreatePen(PS_SOLID, 2, RGB(255, 50, 150));
    SelectObject(hdc, hPen);

    MoveToEx(hdc, cx, cy - size, NULL);
    LineTo(hdc, cx + size, cy + size);
    LineTo(hdc, cx - size, cy + size);
    LineTo(hdc, cx, cy - size);

    DeleteObject(hPen);
}

























        // -------------------------Пирамида ----------------------

void RecursiveTriangle1(HDC hdc, int cx, int cy, int size) {
    Triangle(hdc, cx, cy, size);

    if (size < 10) {
        return;
    }

    RecursiveTriangle1(hdc, cx, cy - size, size / 2);
    RecursiveTriangle1(hdc, cx + size, cy + size, size / 2);
    RecursiveTriangle1(hdc, cx - size, cy + size, size / 2);
}


            // Правая половина
void RecursiveTriangle2(HDC hdc, int cx, int cy, int size) {
    Triangle(hdc, cx, cy, size);

    if (size < 10) {
        return;
    }

    RecursiveTriangle2(hdc, cx, cy - size, size / 2);
    RecursiveTriangle2(hdc, cx + size, cy + size, size / 2);
    
}


                    // треугольники вверх
void RecursiveTriangle3(HDC hdc, int cx, int cy, int size) {
    Triangle(hdc, cx, cy, size);

    if (size < 10) {
        return;
    }

    RecursiveTriangle3(hdc, cx, cy - size, size / 2);
}


                    //Левая половина пирамида
void RecursiveTriangle4(HDC hdc, int cx, int cy, int size) {
    Triangle(hdc, cx, cy, size);

    if (size < 10) {
        return;
    }

    RecursiveTriangle4(hdc, cx, cy - size, size / 2);
    RecursiveTriangle4(hdc, cx - size, cy + size, size / 2);
}

                // Треугольники вправо
void RecursiveTriangle5(HDC hdc, int cx, int cy, int size) {
    Triangle(hdc, cx, cy, size);

    if (size < 10) {
        return;
    }

    RecursiveTriangle5(hdc, cx + size/2, cy, size / 1.2);
}


                // Треугольники влево
void RecursiveTriangle6(HDC hdc, int cx, int cy, int size) {
    Triangle(hdc, cx, cy, size);

    if (size < 10) {
        return;
    }

    RecursiveTriangle6(hdc, cx - size / 2, cy, size / 1.2);
}




void RecursiveTriangle7(HDC hdc, int cx, int cy, int size) {
    Triangle(hdc, cx, cy, size);

    if (size < 10) {
        return;
    }

    
    RecursiveTriangle7(hdc, cx - size, cy + size, size / 2);
    RecursiveTriangle7(hdc, cx + size, cy + size, size / 2);
}



void RecursiveTriangle8(HDC hdc, int cx, int cy, int size) {
    Triangle(hdc, cx, cy, size);

    if (size < 10) {
        return;
    }
    RecursiveTriangle5(hdc, cx + size / 2, cy, size / 1.5);
    RecursiveTriangle6(hdc, cx - size / 2, cy, size / 1.5);
    RecursiveTriangle8(hdc, cx - size, cy + size, size / 3);
    RecursiveTriangle8(hdc, cx + size, cy + size, size / 3);
    
}





//  --------------------------- РОМБ ------------------------


void Image3(HDC hdc, int cx, int cy, int size) {
    int x1 = cx;
    int y1 = cy - size;

    int x2 = cx + size;
    int y2 = cy;

    int x3 = cx;
    int y3 = cy + size;

    int x4 = cx - size;
    int y4 = cy;

    HPEN hPen;
    hPen = CreatePen(PS_SOLID, 2, RGB(0, 0, 2555));
    SelectObject(hdc, hPen);

    MoveToEx(hdc, x1, y1, NULL);
    LineTo(hdc, x2, y2);
    LineTo(hdc, x3, y3);
    LineTo(hdc, x4, y4);
    LineTo(hdc, x1, y1);

    DeleteObject(hPen);





}



// Ромбы вправо и влево

void RecursiveImage3_1(HDC hdc, int cx, int cy, int size) {
    Image3(hdc, cx, cy, size);
    if (size < 20) {
        return;
    }
    RecursiveImage3_1(hdc, cx + size, cy, size / 2);
    RecursiveImage3_1(hdc, cx - size, cy, size / 2);
}
// +Ромбы внизу
void RecursiveImage3_2(HDC hdc, int cx, int cy, int size) {
    Image3(hdc, cx, cy, size);
    if (size < 20) {
        return;
    }
    RecursiveImage3_2(hdc, cx + size, cy, size / 2);
    RecursiveImage3_2(hdc, cx - size, cy, size / 2);
    RecursiveImage3_2(hdc, cx, cy+size, size / 2);

}
// +Ромбы вверху
void RecursiveImage3_3(HDC hdc, int cx, int cy, int size) {
    Image3(hdc, cx, cy, size);
    if (size < 20) {
        return;
    }
    RecursiveImage3_3(hdc, cx + size, cy, size / 2);
    RecursiveImage3_3(hdc, cx - size, cy, size / 2);
    RecursiveImage3_3(hdc, cx, cy - size, size / 2);

}



//Ромбы во все стороны
void RecursiveImage3_4(HDC hdc, int cx, int cy, int size) {
    Image3(hdc, cx, cy, size);
    if (size < 20) {
        return;
    }
    RecursiveImage3_4(hdc, cx + size, cy, size / 2);
    RecursiveImage3_4(hdc, cx - size, cy, size / 2);
    RecursiveImage3_4(hdc, cx, cy + size, size / 2);
    RecursiveImage3_4(hdc, cx, cy - size, size / 2);

}
// Фиугура 5
void RecursiveImage3_5(HDC hdc, int cx, int cy, int size) {
    Image3(hdc, cx, cy, size);
    if (size < 20) {
        return;
    }
    RecursiveImage3_1(hdc, cx + size, cy, size / 2);
    RecursiveImage3_1(hdc, cx - size, cy, size / 2);

    RecursiveImage3_1(hdc, cx + size, cy + size, size / 2);
    RecursiveImage3_1(hdc, cx - size, cy - size, size / 2);


}


// Фигура 6 


void RecursiveImage3_6(HDC hdc, int cx, int cy, int size) {
    Image3(hdc, cx, cy, size);
    if (size < 20) {
        return;
    }
    RecursiveImage3_1(hdc, cx + size, cy, size / 2);
    RecursiveImage3_1(hdc, cx - size, cy, size / 2);

    RecursiveImage3_1(hdc, cx + size, cy - size, size / 2);
    RecursiveImage3_1(hdc, cx - size, cy + size, size / 2);


}
// Фигура 7
void RecursiveImage3_7(HDC hdc, int cx, int cy, int size) {
    Image3(hdc, cx, cy, size);
    if (size < 20) {
        return;
    }
    RecursiveImage3_1(hdc, cx - size, cy, size / 2);
    RecursiveImage3_1(hdc, cx + size, cy, size / 2);

    RecursiveImage3_1(hdc, cx - size, cy - size, size / 2);
    RecursiveImage3_1(hdc, cx + size, cy + size, size / 2);


}

// Фиугура 8
void RecursiveImage3_8(HDC hdc, int cx, int cy, int size) {
    Image3(hdc, cx, cy, size);
    if (size < 20) {
        return;
    }
    RecursiveImage3_1(hdc, cx + size, cy, size / 2);
    RecursiveImage3_1(hdc, cx - size, cy, size / 2);

    RecursiveImage3_1(hdc, cx + size, cy - size, size / 2);
    RecursiveImage3_1(hdc, cx - size, cy + size, size / 2);


}
















//          -----------------------ЗВЕЗДА---------------------------------

void Image4(HDC hdc, int cx, int cy, int size) {
    int x1 = cx;
    int y1 = cy - size;

    int x2 = cx + size / 4;
    int y2 = cy - size / 4;

    int x3 = cx + size;
    int y3 = cy;

    int x4 = cx + size / 4;
    int y4 = cy + size / 4;

    int x5 = cx;
    int y5 = cy + size;

    int x6 = cx - size / 4;
    int y6 = cy + size / 4;

    int x7 = cx - size;
    int y7 = cy;

    int x8 = cx - size / 4;
    int y8 = cy - size / 4;

    
    

    HPEN hPen;
    hPen = CreatePen(PS_SOLID, 3, RGB(0, 255, 50));
    SelectObject(hdc, hPen);


    MoveToEx(hdc, x1, y1, NULL);
    LineTo(hdc, x2, y2);
    LineTo(hdc, x3, y3);
    LineTo(hdc, x4, y4);
    LineTo(hdc, x5, y5);
    LineTo(hdc, x6, y6);
    LineTo(hdc, x7, y7);
    LineTo(hdc, x8, y8);
    LineTo(hdc, x1, y1);


}

// Лево право
void RecursiveImage4_1(HDC hdc, int cx, int cy, int size) {
    Image4(hdc, cx, cy, size);
    if (size < 20) {
        return;
    }
    RecursiveImage4_1(hdc, cx + size, cy, size / 2);
    RecursiveImage4_1(hdc, cx - size, cy, size / 2);

}


// Верх низ

void RecursiveImage4_2(HDC hdc, int cx, int cy, int size) {
    Image4(hdc, cx, cy, size);
    if (size < 20) {
        return;
    }
    RecursiveImage4_2(hdc, cx, cy - size, size / 2);
    RecursiveImage4_2(hdc, cx, cy + size, size / 2);

}

// Влево треугольником

void RecursiveImage4_3(HDC hdc, int cx, int cy, int size) {
    Image4(hdc, cx, cy, size);
    if (size < 20) {
        return;
    }
    RecursiveImage4_3(hdc, cx, cy - size, size / 2);
    RecursiveImage4_3(hdc, cx, cy + size, size / 2);
    RecursiveImage4_3(hdc, cx - size, cy, size / 2);

}
// Лево + право треугольник
void RecursiveImage4_4(HDC hdc, int cx, int cy, int size) {
    Image4(hdc, cx, cy, size);
    if (size < 20) {
        return;
    }
    RecursiveImage4_4(hdc, cx, cy - size, size / 2);
    RecursiveImage4_4(hdc, cx, cy + size, size / 2);
    RecursiveImage4_4(hdc, cx - size, cy, size / 2);
    RecursiveImage4_4(hdc, cx + size, cy, size / 2);

}

// Лево + право + вверх + вниз

void RecursiveImage4_5(HDC hdc, int cx, int cy, int size) {
    Image4(hdc, cx, cy, size);
    if (size < 20) {
        return;
    }
    RecursiveImage4_1(hdc, cx + size, cy, size / 2);
    RecursiveImage4_1(hdc, cx - size, cy, size / 2);
    RecursiveImage4_2(hdc, cx, cy - size, size / 2);
    RecursiveImage4_2(hdc, cx, cy + size, size / 2);
}



// Еще фигура

void RecursiveImage4_6(HDC hdc, int cx, int cy, int size) {
    Image4(hdc, cx, cy, size);
    if (size < 20) {
        return;
    }
    RecursiveImage4_1(hdc, cx + size, cy, size / 2);
    RecursiveImage4_1(hdc, cx - size, cy, size / 2);
    RecursiveImage4_2(hdc, cx, cy - size, size / 2);
    RecursiveImage4_2(hdc, cx, cy + size, size / 2);

    RecursiveImage4_1(hdc, cx + size, cy, size / 2);
    RecursiveImage4_1(hdc, cx - size, cy, size / 2);
    RecursiveImage4_2(hdc, cx, cy - size, size / 2);
    RecursiveImage4_2(hdc, cx, cy + size, size / 2);


    RecursiveImage4_1(hdc, cx + size, cy, size * 1.3);
    RecursiveImage4_1(hdc, cx - size, cy, size * 1.3);
    RecursiveImage4_2(hdc, cx, cy - size, size * 1.3);
    RecursiveImage4_2(hdc, cx, cy + size, size * 1.3);



}

// -----------------ПЕСРЧНЫЕЕ ЧАСЫ-----------------------


void Hours(HDC hdc, int cx, int cy, int size) {
    int x1 = cx - size / 2;
    int y1 = cy - size;

    int x2 = cx + size / 2;
    int y2 = cy - size;

    int x3 = cx - size;
    int y3 = cy + size;

    int x4 = cx + size;
    int y4 = cy + size;
   
    HPEN hPen;
    hPen = CreatePen(PS_SOLID, 2, RGB(255, 255, 0));
    SelectObject(hdc, hPen);

    MoveToEx(hdc, x1, y1, NULL);
    LineTo(hdc, x2, y2);
    LineTo(hdc, x3, y3);
    LineTo(hdc, x4, y4);
    LineTo(hdc, x1, y1);

    DeleteObject(hPen);


}


void RecursiveHours_1(HDC hdc, int cx, int cy, int size) {
    Hours(hdc, cx, cy, size);
    if (size < 5) {
        return;


    }
    RecursiveHours_1(hdc, cx + size, cy + size, size/2);
}

// 3 рисунок из лр

void RecursiveHours_2(HDC hdc, int cx, int cy, int size) {
    Hours(hdc, cx, cy, size);
    if (size < 5) {
        return;


    }
    RecursiveHours_2(hdc, cx + size, cy + size, size / 2);
    RecursiveHours_2(hdc, cx - size, cy + size, size / 2);
}

// 2 рисунок из лр
void RecursiveHours_3(HDC hdc, int cx, int cy, int size) {
    Hours(hdc, cx, cy, size);
    if (size < 5) {
        return;


    }
    RecursiveHours_3(hdc, cx + size / 2, cy - size , size / 2);
    RecursiveHours_3(hdc, cx - size / 2, cy - size , size / 2);
    
}
// 4 ФИГУРА

void RecursiveHours_4(HDC hdc, int cx, int cy, int size) {
    Hours(hdc, cx, cy, size);
    if (size < 5) {
        return;


    }
    RecursiveHours_4(hdc, cx + size, cy + size, size / 2);
    RecursiveHours_4(hdc, cx - size, cy + size, size / 2);

    RecursiveHours_3(hdc, cx + size / 2, cy - size, size / 2);
    RecursiveHours_3(hdc, cx - size / 2, cy - size, size / 2);

    
}
// лево верх
void RecursiveHours_5(HDC hdc, int cx, int cy, int size) {
    Hours(hdc, cx, cy, size);
    if (size < 5) {
        return;


    }
    RecursiveHours_5(hdc, cx - size, cy - size, size / 2);
}

// Часы влево и вправо


void RecursiveHours_6(HDC hdc, int cx, int cy, int size) {
    Hours(hdc, cx, cy, size);
    if (size < 5) {
        return;


    }
    RecursiveHours_6(hdc, cx + size, cy, size / 2);
    RecursiveHours_6(hdc, cx - size, cy, size / 2);
}


void RecursiveHours_7(HDC hdc, int cx, int cy, int size) {
    Hours(hdc, cx, cy, size);
    if (size < 5) {
        return;


    }
    RecursiveHours_6(hdc, cx + size, cy, size / 2);
    RecursiveHours_6(hdc, cx - size, cy, size / 2);

    RecursiveHours_6(hdc, cx, cy + size, size / 2);
    RecursiveHours_6(hdc, cx, cy - size, size / 2);

}








LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    switch (message)
    {
    case WM_COMMAND:
        {
            int wmId = LOWORD(wParam);
            // Разобрать выбор в меню:
            switch (wmId)
            {
            case IDM_ABOUT:
                DialogBox(hInst, MAKEINTRESOURCE(IDD_ABOUTBOX), hWnd, About);
                break;
            case IDM_EXIT:
                DestroyWindow(hWnd);
                break;
            default:
                return DefWindowProc(hWnd, message, wParam, lParam);
            }
        }
        break;
    case WM_PAINT:
        {
            PAINTSTRUCT ps;
            HDC hdc = BeginPaint(hWnd, &ps);
            // TODO: Добавьте сюда любой код прорисовки, использующий HDC...

            //Triangle(hdc, 200, 160, 80);

                        //ФОН
            HBRUSH hBrush;
            hBrush = CreateSolidBrush(RGB(0, 0, 20));
            SelectObject(hdc, hBrush);
            Rectangle(hdc, 0, 0, 10000, 1000);

                        // ТРЕУГОЛЬНИКИ

         /*   RecursiveTriangle1(hdc, 200, 260, 100);

            RecursiveTriangle2(hdc, 500, 260, 100);

            RecursiveTriangle3(hdc, 800, 260, 100);

            RecursiveTriangle4(hdc, 1100, 260, 100);



            RecursiveTriangle5(hdc, 1500, 260, 100);

            RecursiveTriangle6(hdc, 1500, 260, 100);

            RecursiveTriangle7(hdc, 200, 580, 100);

            RecursiveTriangle8(hdc, 800, 580, 100);
            


                    // РОМБ
            
            
            RecursiveImage3_1(hdc, 200, 200, 100);
            RecursiveImage3_2(hdc, 600, 200, 100);
            RecursiveImage3_3(hdc, 1000, 300, 100);
            RecursiveImage3_4(hdc, 1400, 300, 100);
            RecursiveImage3_5(hdc, 600, 600, 90);
            RecursiveImage3_6(hdc, 600, 870, 90);
            RecursiveImage3_7(hdc, 875, 870, 90);
            RecursiveImage3_8(hdc, 875, 600, 90);
            // ЗВЕЗДА


           RecursiveImage4_1(hdc, 300, 200, 120);

            RecursiveImage4_2(hdc, 150, 600, 120);

            RecursiveImage4_3(hdc, 600, 600, 125);

            RecursiveImage4_4(hdc, 1600, 700, 150);

            RecursiveImage4_5(hdc, 1000, 600, 100);

            RecursiveImage4_6(hdc, 1300, 300, 85); */
            
            /// ПЕСОЧНЫЕ ЧАСЫ

            RecursiveHours_1(hdc, 200, 200, 100);
            RecursiveHours_2(hdc, 200, 200, 100);

            RecursiveHours_3(hdc, 600, 300, 100);
            RecursiveHours_4(hdc, 1000, 250, 100);

            RecursiveHours_5(hdc, 200, 800, 100);

            RecursiveHours_6(hdc, 700, 800, 100);

            RecursiveHours_7(hdc, 1200, 800, 125);




            









            EndPaint(hWnd, &ps);
        }
        break;
    case WM_DESTROY:
        PostQuitMessage(0);
        break;
    default:
        return DefWindowProc(hWnd, message, wParam, lParam);
    }
    return 0;
}

// Обработчик сообщений для окна "О программе".
INT_PTR CALLBACK About(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
{
    UNREFERENCED_PARAMETER(lParam);
    switch (message)
    {
    case WM_INITDIALOG:
        return (INT_PTR)TRUE;

    case WM_COMMAND:
        if (LOWORD(wParam) == IDOK || LOWORD(wParam) == IDCANCEL)
        {
            EndDialog(hDlg, LOWORD(wParam));
            return (INT_PTR)TRUE;
        }
        break;
    }
    return (INT_PTR)FALSE;
}
