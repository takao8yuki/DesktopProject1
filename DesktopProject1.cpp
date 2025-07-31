// DesktopProject1.cpp : アプリケーションのエントリ ポイントを定義します。
//

#include "framework.h"
#include "DesktopProject1.h"

// バージョン情報ボックスのメッセージ ハンドラーです。
// メイン関数の前に定義されている必要があります。
INT_PTR CALLBACK DialogProc(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
{
    UNREFERENCED_PARAMETER(lParam);
    switch (message)
    {
    case WM_INITDIALOG:
        return true;

    case WM_COMMAND:
        switch (LOWORD(wParam))
        {
        case IDOK: // OK ボタンがクリックされたときの処理
            return true;
        case IDCANCEL: // キャンセル ボタンがクリックされたときの処理
            EndDialog(hDlg, IDCANCEL);
            return true;
        default: // 他のコマンドが発生した場合の処理
            return false;
        }
    default:
        return false;
    }
}

int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
                     _In_opt_ HINSTANCE,
                     _In_ LPWSTR    lpCmdLine,
                     _In_ int       nCmdShow)
{
    DialogBoxParam
    ( hInstance
    , MAKEINTRESOURCE(IDD_DIALOG1)
    , NULL
    , DialogProc
    , 0
    );

    return 0;
}
