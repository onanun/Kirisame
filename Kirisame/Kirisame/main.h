//======================================================
//
// DX21
// DirectX雛型処理[main.h]
//
//======================================================
#ifndef _MAIN_H_
#define _MAIN_H_

//******************************************************
// インクルードファイル
//******************************************************
#include <windows.h>
#include "d3dx9.h"       //描画処理に必要
#include "2dpolygon.h"
#include "input.h"
#include "TexLoad.h"
//******************************************************
// ライブラリのリンク
//******************************************************
#if 1 //ここを"0"にした場合、"構成プロパティ" -> "リンカー" -> "入力" -> ""追加の依存ファイルに対象ライブラリを設定する

#pragma comment (lib,"d3d9.lib")  // 描画処理に必要
#pragma comment (lib,"d3dx9.lib") // [d3d9.lib]の拡張ライブラリ
#pragma comment (lib,"dxguid.lib")// DirectXコンポーネント使用に必要
#pragma comment (lib,"winmm.lib")
#endif

//******************************************************
// マクロ定義
//******************************************************
#define SCREEN_WIDTH  (1000)   //ウインドウの幅
#define SCREEN_HEIGHT (600)   //ウインドウの高さ

enum SCENE {//状態
	TITLE,
	TUTORIAL,
	GAME_STAGE1,
	GAME_STAGE2,
	RESULT,
	LOAD
};
extern SCENE Scene;
extern _TexOp *TexOp;


#endif
