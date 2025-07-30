// DesktopProject1.cpp : アプリケーションのエントリ ポイントを定義します。
//

#include "framework.h"
#include "DesktopProject1.h"

// バージョン情報ボックスのメッセージ ハンドラーです。
// メイン関数の前に定義されている必要があります。
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

int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
                     _In_opt_ HINSTANCE,
                     _In_ LPWSTR    lpCmdLine,
                     _In_ int       nCmdShow)
{
    return 0;
}
